/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128506
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_2 [i_0])))) >> ((((+(((/* implicit */int) arr_0 [i_1])))) - (41)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((2118480435404709478LL) >> (((42004072U) - (42004023U)))));
                                arr_15 [i_1] [i_2] [i_4] = (!(arr_2 [i_0]));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))) && (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))))));
                var_21 = (~(((/* implicit */int) ((((/* implicit */int) max(((unsigned char)178), (((/* implicit */unsigned char) arr_10 [i_0] [(signed char)7] [i_0] [i_0]))))) == (((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_13);
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 2118480435404709489LL))));
}
