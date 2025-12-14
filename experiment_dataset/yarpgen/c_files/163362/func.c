/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163362
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? ((~(arr_2 [i_0] [i_1] [(signed char)10]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)0])) ? (((/* implicit */int) arr_4 [12] [i_1] [12])) : (((/* implicit */int) arr_5 [i_1] [i_2 - 1])))))))));
                    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_0 [i_2] [i_2 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_13 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_3]))))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (arr_1 [9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_2] [(_Bool)1])))))));
                            var_12 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
                        }
                        var_13 = ((/* implicit */signed char) ((_Bool) arr_4 [i_3] [i_1] [i_0 + 1]));
                        var_14 = ((/* implicit */short) (~((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_2 - 1])))))));
                            var_16 = ((/* implicit */unsigned long long int) (~((~(arr_3 [16U])))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(unsigned short)6] [i_0] [i_3] [i_6]))) : (arr_2 [i_2] [17U] [i_2]))));
                            arr_20 [4] [4] [4] [i_2] [4] [4] = ((((/* implicit */_Bool) arr_2 [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_2 [i_2 - 1] [i_2 - 1] [i_2]) : (arr_2 [i_2] [i_2 - 1] [i_2 - 1]));
                            var_18 += (+(arr_1 [i_0 - 1]));
                        }
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0]))));
                            arr_23 [i_7] [i_3] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) arr_3 [i_0])));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_9 [i_9] [i_9] [i_8] [i_8] [i_0 + 1]), (arr_4 [i_0] [i_0] [i_9]))))));
                    arr_29 [(signed char)15] [i_8] [i_9] |= ((/* implicit */unsigned short) ((long long int) ((int) (unsigned short)38927)));
                }
            } 
        } 
        var_21 = ((((/* implicit */_Bool) max((arr_15 [i_0] [i_0 + 3] [i_0] [i_0 + 1]), (arr_15 [i_0] [i_0 + 1] [13] [13])))) ? (min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_25 [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_0])))), (((long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_12 [i_0] [i_0] [8LL] [i_0] [i_0] [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            arr_32 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */signed char) (+(max((arr_2 [i_0] [i_0] [i_0 + 3]), (((/* implicit */unsigned int) arr_27 [i_0 + 2]))))));
            var_22 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_6 [i_0 + 2])))), (((/* implicit */int) arr_25 [i_0] [i_10]))));
            arr_33 [i_0 + 1] [i_0 - 1] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_18 [i_0])), ((-(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_26 [i_10] [i_0]))))))));
        }
        var_23 -= ((/* implicit */long long int) min((((_Bool) ((signed char) (signed char)15))), ((!((!(((/* implicit */_Bool) -1886897587))))))));
    }
}
