/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14693
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_11 = ((_Bool) arr_2 [i_0] [i_1 + 1] [i_1]);
            arr_5 [i_1] = ((/* implicit */unsigned char) 9223372036854775804LL);
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0]) : (arr_0 [i_2])));
            var_13 = ((((/* implicit */_Bool) (unsigned char)218)) || (((/* implicit */_Bool) (unsigned char)193)));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_0]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) * (((/* implicit */int) arr_10 [i_0] [i_3]))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 24; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_21 [14LL] [i_0] [i_3] [i_4] [10LL] [(_Bool)1] [(unsigned char)16] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) != ((-(((/* implicit */int) (_Bool)1))))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 2])))))));
                            arr_22 [i_0] [i_0] [i_0] [10LL] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [6LL] [6LL] [i_4 - 1] [i_5] [i_6]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_15 *= ((/* implicit */unsigned char) var_2);
                            arr_25 [13LL] [i_3] [(_Bool)1] [i_5] |= ((/* implicit */unsigned char) ((long long int) arr_17 [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 2]));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4])) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_0]) : (arr_14 [i_4 - 1] [(unsigned char)15] [i_4 - 1])));
                            arr_26 [i_0] [i_0] [i_4 + 1] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) var_6);
                            arr_27 [i_5] [i_3] [i_7] [i_5] = ((((/* implicit */_Bool) arr_17 [i_0] [i_4 + 1] [i_4 + 1] [i_7])) || (((/* implicit */_Bool) var_6)));
                        }
                        var_17 = ((/* implicit */unsigned char) ((_Bool) var_10));
                        var_18 ^= ((unsigned char) arr_0 [i_4 - 2]);
                        arr_28 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) arr_7 [i_0] [i_4 - 2])) : (((/* implicit */int) arr_4 [i_5]))));
                    }
                } 
            } 
            arr_29 [(unsigned char)1] [i_3] = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_3] [i_3]));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [22LL] [i_0] [(unsigned char)10] [i_0]))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (arr_18 [i_0] [i_0])));
        var_20 = arr_0 [i_0];
    }
    var_21 = ((/* implicit */long long int) max((min((((/* implicit */unsigned char) var_7)), (var_9))), (min(((unsigned char)64), (var_6)))));
    var_22 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (var_4)))) || (var_0))))));
}
