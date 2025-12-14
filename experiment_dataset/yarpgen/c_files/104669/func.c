/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104669
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (var_5))));
            arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0 + 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                /* LoopSeq 4 */
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_11 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) <= (((/* implicit */int) arr_0 [i_0 + 2]))));
                    var_12 = ((/* implicit */int) var_3);
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */long long int) 1033233962U);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))) : (arr_4 [i_2] [i_3])));
                }
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    var_14 = ((/* implicit */int) var_9);
                    var_15 = ((/* implicit */int) var_8);
                    arr_17 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) arr_0 [i_0 + 2]);
                    arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1]))) != (arr_16 [i_0 + 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4])));
                }
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    arr_22 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (3975217903U) : (((/* implicit */unsigned int) ((int) arr_14 [20ULL] [i_2] [i_1] [i_1] [i_1] [i_1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [(_Bool)1])) ? (arr_10 [i_6] [i_5] [i_2] [i_1] [i_0 + 1]) : (var_4)));
                        var_17 = var_1;
                    }
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_18 = ((/* implicit */int) 319749392U);
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((arr_4 [i_0 - 1] [i_0 + 2]) <= (((/* implicit */int) var_3)));
                    arr_30 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) (short)18247);
                }
                var_19 = ((/* implicit */unsigned long long int) var_5);
                arr_31 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_25 [i_0 - 1] [i_1])))));
                arr_32 [i_0 + 2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]));
            }
            for (short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                var_20 = ((/* implicit */short) arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                var_21 = ((/* implicit */long long int) arr_27 [i_1]);
            }
            arr_35 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0 + 2] [i_0]);
        }
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [1LL] [i_0] [i_0] [1LL]))));
        var_23 ^= arr_13 [i_0] [i_0] [i_0 - 1] [6ULL];
        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0] [i_0 + 1])) * (((/* implicit */int) arr_25 [i_0] [i_0 - 1]))));
        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [0])) ? (108086391056891904ULL) : (((/* implicit */unsigned long long int) arr_2 [22] [i_0] [i_0 - 1]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_10);
    var_27 = ((/* implicit */int) ((_Bool) var_2));
}
