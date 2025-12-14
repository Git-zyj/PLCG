/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175263
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
    var_20 ^= ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((arr_11 [(unsigned short)0] [(_Bool)0]), (min(((~(3457883630034231648ULL))), (((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */int) arr_0 [(short)8] [i_1])))))))));
                            var_22 &= ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) <= (var_4))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3457883630034231648ULL) << (((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) % (((((/* implicit */_Bool) arr_3 [i_3] [0ULL] [i_0])) ? (arr_5 [i_0] [9]) : (((/* implicit */long long int) 2147483633))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (max((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            var_24 |= (_Bool)1;
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (var_13))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-31866)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) arr_11 [i_0 - 1] [i_1]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) var_19))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
                var_28 = min((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0 - 2])), (var_0)))), (min((-2053497807), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_13)))))));
            }
        } 
    } 
}
