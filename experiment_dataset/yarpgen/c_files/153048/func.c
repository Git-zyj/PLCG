/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153048
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2007338326U)))))));
                var_15 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_2) ^ (var_2)))), ((((+(var_0))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [14LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2287628970U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (2007338325U) : (arr_3 [i_2] [i_2]))))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4]);
                                var_18 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                                var_19 ^= ((/* implicit */long long int) ((short) ((2007338326U) < (((/* implicit */unsigned int) var_2)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_20 += arr_1 [i_1];
                    arr_14 [5U] [i_1] = ((/* implicit */long long int) arr_9 [i_0] [i_1 + 1] [i_5] [i_0] [i_5]);
                }
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned short) var_2);
}
