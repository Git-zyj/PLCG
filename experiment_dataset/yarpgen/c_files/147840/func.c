/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147840
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_5))))));
                            var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)116))));
                            var_14 = (!(((/* implicit */_Bool) var_3)));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)116))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                            {
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)109)) ? (524288) : (((/* implicit */int) (unsigned char)15))));
                                arr_21 [i_4] [i_1] = arr_0 [i_5];
                                arr_22 [i_4] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */long long int) arr_4 [i_0]);
                                arr_23 [i_0] [i_1] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_4] [i_0])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_4 [i_1 - 2]))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                            {
                                arr_26 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                                arr_27 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                                arr_28 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) var_4);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_7);
    var_18 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
}
