/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135113
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_11 |= ((/* implicit */unsigned short) max(((-(((long long int) var_4)))), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 127))))))));
                            var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_1]))) ? (var_8) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_0 - 1] [i_0 - 1] [12ULL]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_15 [i_4] [i_1] [i_4] [i_4] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (min((((/* implicit */unsigned int) ((unsigned char) arr_14 [i_0] [i_1] [i_4] [i_5]))), (var_1))));
                            arr_16 [i_4] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_8 [i_1]))))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)10)), (127))))))));
                            arr_17 [i_4] [i_1] = ((/* implicit */int) (((-((+(arr_4 [i_0] [i_1] [i_0]))))) != ((+(((/* implicit */int) arr_8 [i_1]))))));
                            var_13 *= ((/* implicit */short) max((min((var_1), (((unsigned int) arr_10 [i_0] [i_0] [4U] [i_5] [i_5])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 784376775U)) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_4] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_4] [i_5] [i_0])))))));
                            arr_18 [i_4] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) var_9)) : (136)))))), (var_6)));
}
