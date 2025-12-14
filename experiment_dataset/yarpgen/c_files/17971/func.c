/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17971
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_0))));
    var_18 = ((/* implicit */short) (~(((((/* implicit */int) ((_Bool) var_9))) | ((~(((/* implicit */int) (unsigned char)16))))))));
    var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((/* implicit */int) ((_Bool) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) >= (8962869941499943894LL))))) : (((unsigned int) arr_4 [i_0 + 4] [i_2])))))));
                        var_21 |= ((/* implicit */unsigned char) ((signed char) var_7));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0 - 3] [i_0 - 3]));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 3])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_4 - 3]))));
                        arr_13 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_4 - 3] [i_4 - 3]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        arr_17 [16U] [i_1] = ((/* implicit */short) ((arr_12 [i_0 - 3] [i_5 - 1] [i_5] [i_5]) % (arr_12 [i_0 - 3] [i_5 + 1] [i_5] [i_5])));
                        var_24 = ((/* implicit */unsigned short) ((var_2) & (((/* implicit */long long int) arr_0 [i_5 - 2] [i_0 - 1]))));
                        var_25 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_5)) / (-1119890172))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_5 + 1]));
                            var_27 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_15))))));
                            arr_22 [(signed char)3] [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] = ((/* implicit */_Bool) (+(var_16)));
                            arr_23 [i_0 + 2] [i_0 + 2] [i_5] [i_5] [i_6 - 3] [i_5] = ((/* implicit */long long int) arr_7 [i_5] [i_0] [i_2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_28 ^= ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) != (((unsigned int) arr_2 [i_0] [i_2] [i_2]))));
                            var_29 = ((unsigned int) ((arr_15 [i_0 - 1] [i_7]) == (arr_18 [i_1] [i_2] [i_5])));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (short)(-32767 - 1))))));
                        arr_30 [i_0] [(signed char)13] [i_8] = ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_8]))) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0 + 3] [i_2])));
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) << (((((/* implicit */int) arr_32 [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0 - 2])) + (17885)))))));
                        var_31 = arr_0 [i_0] [i_1];
                        var_32 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                    }
                }
            } 
        } 
    } 
}
