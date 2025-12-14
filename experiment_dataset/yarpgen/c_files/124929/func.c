/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124929
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6310748194746383234LL)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned short)1151)) : (((/* implicit */int) (unsigned short)7803))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (140737488355327LL) : (((/* implicit */long long int) var_7)))) > (((/* implicit */long long int) ((/* implicit */int) ((140737488355314LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))))))))) : ((~((~(1136308398)))))));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(1890018345)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))))) * (((var_9) ? (140737488355319LL) : (((/* implicit */long long int) ((int) var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_2] = ((int) (+(140737488355327LL)));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1382663284)))) <= (((unsigned int) ((((/* implicit */_Bool) -4957239216278671659LL)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [12U] = ((/* implicit */int) ((unsigned char) ((unsigned short) max((3582415968U), (((/* implicit */unsigned int) var_5))))));
                var_15 = var_1;
                var_16 = ((/* implicit */int) min((var_16), ((((~(((/* implicit */int) arr_5 [i_1] [i_0] [i_0] [i_0])))) + (((((/* implicit */_Bool) 1702750004)) ? (-2147483631) : (805306368)))))));
                var_17 = ((/* implicit */unsigned char) (~((-(max((-1835501254), (var_8)))))));
            }
        } 
    } 
}
