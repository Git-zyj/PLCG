/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181456
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((~(var_3)))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)-100))))) : (((/* implicit */int) ((max((((/* implicit */int) arr_2 [6U])), (var_3))) > (((/* implicit */int) var_9))))));
        var_12 = ((/* implicit */signed char) arr_3 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = max((max((arr_5 [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551595ULL))))))), (arr_5 [i_1]));
        var_13 = ((/* implicit */short) arr_5 [i_1]);
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_14 [i_3] [i_1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)121))))) : (var_10)));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned char) 561169260280823951LL)))));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_15 = -561169260280823951LL;
                    arr_19 [i_1] [i_2] [i_3] [19U] [i_5] = ((/* implicit */unsigned int) arr_13 [i_2 + 2]);
                    arr_20 [i_5] [i_1] [i_2] [i_1] = ((/* implicit */long long int) max((arr_10 [i_5] [i_5] [(_Bool)1] [i_5]), (max((arr_5 [i_2 - 2]), (arr_10 [i_1] [i_2] [i_2] [i_5])))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_16 = arr_15 [i_1] [i_2];
                    arr_23 [i_1] [4U] [i_3] [i_6] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_2] [i_2 - 2]));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_2] [i_3] [i_6]))));
                }
            }
            for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) 
            {
                arr_26 [i_7] [i_7] [(signed char)16] [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)5)) + (((/* implicit */int) (signed char)93))));
                var_18 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) / (max((-561169260280823945LL), (((/* implicit */long long int) ((unsigned int) arr_16 [i_1] [i_2] [i_2 + 1] [i_2] [i_7]))))));
                arr_27 [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)11);
                var_19 = ((/* implicit */int) (short)-23552);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 3]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7])))) : (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 3] [i_7 - 3]))));
            }
            var_21 &= ((/* implicit */signed char) 778017541);
            var_22 |= ((/* implicit */int) arr_24 [i_1] [i_1] [i_2 + 3]);
            arr_28 [16ULL] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) arr_24 [9ULL] [i_2] [i_1]));
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_8] [i_8]);
            var_24 = ((/* implicit */unsigned int) 499909635);
        }
    }
    var_25 = ((/* implicit */unsigned long long int) var_3);
}
