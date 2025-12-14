/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155673
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_15)), (min((max((var_2), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
    var_20 = ((/* implicit */unsigned long long int) var_18);
    var_21 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) -1LL)) / (arr_2 [i_0]));
        arr_4 [(unsigned char)9] = ((/* implicit */int) (unsigned char)65);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
            arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_1]) : (arr_6 [i_0] [i_1])));
        }
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((2147483647) > (-1991200787)));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-38))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_3))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)6))));
                    var_23 = ((/* implicit */unsigned short) arr_14 [i_2] [i_2 + 1] [i_4]);
                    arr_20 [i_0] [i_2] [i_3] [i_4] [(unsigned short)2] = ((/* implicit */unsigned long long int) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                }
                for (int i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
                {
                    arr_24 [i_2] [i_3] [i_3] [i_5] = ((_Bool) arr_1 [i_2 + 1] [i_5 + 1]);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_2] [i_2 - 1] [i_2] [(_Bool)1] [i_2 + 1])) < (((((/* implicit */int) var_12)) | (((/* implicit */int) var_0))))));
                    arr_25 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_5] [i_5 - 1])) / (11)));
                    var_25 = ((/* implicit */_Bool) ((arr_23 [i_2 + 1] [i_2] [i_2 + 1] [(_Bool)1] [9ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_0 [i_2 - 1])));
                    var_26 = ((/* implicit */int) var_6);
                }
                for (int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9452994270373168123ULL)) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_6 + 1])) : (((/* implicit */int) var_16))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6] [i_6 + 2] [(unsigned char)8])) ? (arr_19 [i_6 + 4] [i_6] [i_6] [i_6 + 2]) : (arr_19 [i_6 + 1] [(short)12] [i_6 + 4] [i_6])));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_32 [i_0] [6ULL] [i_3] [3U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_7])) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        var_29 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1202559654)) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [(_Bool)1] [i_6] [i_7])) : (var_10)))));
                        arr_33 [i_7] [i_7] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((short) (signed char)-75));
                        var_30 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (arr_2 [i_2]))));
                    }
                }
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [(short)8] [i_2 - 1] [i_2])) ? (arr_16 [12] [i_2 - 1] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2])));
                var_32 = ((/* implicit */unsigned char) 12895316699125254945ULL);
            }
            arr_34 [i_2] [i_2] = ((/* implicit */signed char) (unsigned char)0);
        }
    }
}
