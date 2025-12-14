/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176164
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [(signed char)13])))) ? (max((12336612868976859808ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (-3LL)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 -= ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [i_2] [i_4])), (6110131204732691804ULL))), (6110131204732691804ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) < (4912904481391818158ULL))))));
                            var_19 = max((var_1), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_3 - 1]))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_3] [i_3] [i_2] [i_2] [i_3] [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))), (((arr_6 [i_5] [i_5] [i_5] [i_5 - 2]) | (arr_10 [i_3] [i_1] [i_5] [i_3] [i_5] [i_0] [(unsigned short)3])))))));
                            var_22 = ((/* implicit */_Bool) ((long long int) max((arr_12 [i_0] [i_0] [i_0] [11LL] [3LL] [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)16))))))));
                        }
                        var_23 = ((unsigned long long int) var_0);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (max((1306461633U), (((/* implicit */unsigned int) var_11))))));
                    }
                    var_25 = ((/* implicit */_Bool) arr_8 [10ULL]);
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((max((max((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_6])))), (((/* implicit */unsigned long long int) (signed char)-35)))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_6] [i_6]))))))))))));
                    var_28 ^= ((/* implicit */unsigned int) (((+(arr_17 [i_0] [i_1] [i_6] [i_6]))) < (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((-(((((var_12) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-35)) + (98)))))))));
                }
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -4359206254955635132LL))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    arr_23 [i_0] [i_1] [i_7] = ((/* implicit */signed char) (((((_Bool)1) ? (6110131204732691795ULL) : (((((/* implicit */_Bool) 1203211324287563229LL)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_5 [i_7]))))) >= ((-(4912904481391818134ULL)))));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((((_Bool) arr_13 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_1] [i_1] [i_1] [i_1] [i_7] [i_7]))) : (3144830772U)))) : ((+(arr_6 [i_7] [i_1] [i_1] [i_0]))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_0);
    var_31 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (~(12336612868976859811ULL)))))));
        var_33 = ((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_29 [i_8] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)14)) ? (arr_17 [i_8] [i_8] [i_8] [i_8]) : (var_12))) - ((-(arr_8 [i_8])))))));
            var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 600680258U)) ? (((((/* implicit */_Bool) 3694287036U)) ? (((/* implicit */int) (unsigned char)152)) : (2147483647))) : (((/* implicit */int) arr_19 [i_9] [i_9] [16LL]))))));
        }
        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_35 &= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_20 [i_8] [i_8] [i_8]))))));
            var_36 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */long long int) arr_25 [(_Bool)0]))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38354)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_10]))) : (max((((/* implicit */long long int) 0U)), (6145136308704097862LL)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_38 += ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) 0)), (0U)))), (((((/* implicit */_Bool) var_0)) ? (17732923532771328LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            arr_35 [i_8] [i_8] [10LL] = ((/* implicit */int) ((((/* implicit */_Bool) min((12336612868976859820ULL), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_11] [i_8] [i_8] [i_11] [i_8] [i_8]))))) || (min((arr_19 [i_8] [i_11] [i_11]), (arr_19 [i_8] [i_11] [i_8])))));
        }
    }
}
