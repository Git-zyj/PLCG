/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141748
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((17568059244567017684ULL) < (((/* implicit */unsigned long long int) var_3)))))) : (3192187027U)))) ? (var_4) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_1 [i_0 - 2]), (((/* implicit */short) (_Bool)1))))) + (2147483647))) >> (((((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) + (1215)))));
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-6531017943735755085LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_4 [8ULL] [i_1 + 1]))) : (((/* implicit */long long int) ((int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)4])) == (((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */_Bool) (unsigned char)230)) ? (6531017943735755055LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */long long int) arr_2 [i_2 - 1]))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_18 += ((((/* implicit */int) (unsigned char)170)) & (((/* implicit */int) var_14)));
                        var_19 += ((/* implicit */_Bool) (-(6531017943735755085LL)));
                        arr_15 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2336231250U);
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) 6531017943735755084LL)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1744415208)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2113981902U)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_3] [i_1 + 2] [i_0 + 1])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_23 += ((/* implicit */signed char) (~(arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2])));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5196846483145697757LL)) ? ((~(-6531017943735755084LL))) : (((/* implicit */long long int) 1211507545U))));
                        }
                    }
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72057594037927808ULL)) ? (-4242784676391638441LL) : (6531017943735755079LL))))));
                        var_26 += ((/* implicit */long long int) (~(4294967287U)));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((arr_6 [i_3] [i_3] [i_3]) <= (-2047166805))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (var_13)))))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)65022))))) ^ (-7636692035244529995LL))))));
                    }
                    var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (1320317497U) : (((/* implicit */unsigned int) -1252724717))));
                }
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    arr_26 [7U] [i_0] [i_8] = ((/* implicit */int) (unsigned short)51611);
                    var_31 += ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    var_32 += ((/* implicit */unsigned short) ((signed char) max((-140103819), (((/* implicit */int) arr_7 [(unsigned short)12])))));
                    var_33 += ((/* implicit */unsigned long long int) arr_21 [10U] [i_1] [i_0 - 1] [(signed char)8] [i_1 + 1]);
                }
                for (long long int i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3083459751U) : (((/* implicit */unsigned int) 140103820))))) ? (max((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) % (var_0)))))) ? (((((/* implicit */_Bool) arr_5 [i_10 + 4])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 1]))))) : (((/* implicit */long long int) (((_Bool)1) ? (var_6) : (1092238746U)))))))));
                    var_35 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) 281474976710656LL)) ? (1297903085U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)6])))))));
                    var_36 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 8702699736810210421LL)))))) / (max(((+(arr_20 [i_0] [(_Bool)0] [(_Bool)0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_9))))))));
                }
                for (long long int i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 1])) ? (8388607LL) : (((/* implicit */long long int) arr_25 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 1]))))) ? (max((((((/* implicit */_Bool) 2948230614U)) ? (6656190686229577703ULL) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_30 [i_0] [i_0 - 1] [i_1] [i_11 + 3])) : (((/* implicit */int) (signed char)4))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((3083459734U), (((/* implicit */unsigned int) (-2147483647 - 1)))))), (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_11 - 1])) ? (4674290164964746789LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 3]))))))))))));
                    var_38 = ((/* implicit */_Bool) ((6620058631759951587LL) * (((/* implicit */long long int) 0U))));
                    var_39 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 15650085466665033822ULL)) ? (arr_24 [i_1 - 1] [i_0] [i_11 + 3]) : (var_7)))));
                    var_40 += ((/* implicit */unsigned short) (+(((/* implicit */int) (short)8))));
                }
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (+(min((max((9859785187708200770ULL), (14506071401619092466ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_18 [i_0] [4LL] [i_0] [i_0] [i_1] [4U]) - (3642622955U)))))))))))));
            }
        } 
    } 
}
