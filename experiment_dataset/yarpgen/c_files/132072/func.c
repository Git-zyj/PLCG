/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132072
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_6))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (var_8))))))) : ((+(((/* implicit */int) (unsigned short)48209))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_13 += ((/* implicit */short) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)57216)) ? (4517771286902549027LL) : (4517771286902549004LL)))));
                        var_14 = ((/* implicit */signed char) var_4);
                        var_15 = ((/* implicit */unsigned char) ((2070208256970027301LL) + (-9223372036854775807LL)));
                    }
                    var_16 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)155))));
                    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3])) & (-1279413779626104229LL)))) ? (((/* implicit */unsigned long long int) -1755450497412431278LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) | (arr_8 [6] [i_0])))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_1] [i_1] [9ULL] [i_3] [i_5] = ((/* implicit */unsigned char) arr_11 [i_1] [i_2] [i_3]);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [10U] [i_5])))))))));
                        arr_20 [i_0] [i_1] [11] [i_5] [i_5] = arr_9 [3ULL] [2LL] [i_5] [i_1] [i_5] [i_2];
                    }
                }
                var_19 += ((/* implicit */_Bool) var_3);
                arr_21 [(short)14] [13LL] [(short)0] = ((/* implicit */unsigned short) arr_11 [i_0] [(signed char)1] [i_2]);
            }
            for (short i_6 = 3; i_6 < 12; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_6 - 1] [i_6] [i_6] [i_6 - 3] [i_6 - 1] [i_6 + 3])) > (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 2] [i_6 - 3]))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_6 + 1] [i_6 + 1] [i_6 + 2])) ? (arr_14 [i_1] [i_6 + 3] [i_6 - 1] [i_6 - 2]) : (arr_14 [i_1] [i_6 - 3] [i_6 - 3] [i_6 - 1])));
            }
            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) ^ (((((/* implicit */_Bool) (short)-24353)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_0])))));
        }
    }
    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3413554474461413475LL)) ? (((unsigned int) 9223372036854775807LL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
}
