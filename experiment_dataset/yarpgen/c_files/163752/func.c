/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163752
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */_Bool) (unsigned short)12065);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */signed char) arr_1 [i_1] [i_1])), (((signed char) arr_1 [i_1] [i_1])))))));
        arr_5 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1]))))));
        var_22 = max((arr_4 [4U] [i_1]), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) > (arr_3 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_2])), (max((((/* implicit */unsigned short) arr_4 [5LL] [i_2])), (var_0)))))) << (((/* implicit */int) ((_Bool) arr_7 [i_2])))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((signed char) max((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_9 [i_2])))));
                            var_24 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_1] [i_1] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)222))))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_2]) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)53464)) ? (((/* implicit */int) (unsigned short)53488)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
                            var_25 *= ((/* implicit */signed char) max((var_3), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1] [i_2])), (var_18)))) ? ((~(var_1))) : (((/* implicit */long long int) arr_2 [i_1]))))));
                        }
                        var_26 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_16 [i_2] [i_2] [1LL] [i_2] [i_2] [i_2] [1LL]))))));
                        arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (long long int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((var_27), (var_12)));
                                arr_23 [i_1] [i_1] [i_3] [i_6] [i_2] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                    arr_24 [i_1] [3LL] [i_2] [2LL] = ((/* implicit */unsigned int) ((arr_22 [i_3] [i_2] [i_2] [(_Bool)1] [i_1]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) <= (-1560995305100932919LL)))) : ((-(((/* implicit */int) arr_4 [(signed char)3] [i_2]))))));
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */long long int) arr_1 [i_1] [0]);
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8])) ? (arr_26 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_1 [i_8] [i_8])))));
        var_29 = ((/* implicit */int) var_1);
    }
}
