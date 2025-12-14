/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115570
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((var_10), (((unsigned short) var_3)))))));
                    arr_11 [i_2] = ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_4 [i_1 + 2])))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max(((-((+(((/* implicit */int) var_1)))))), (((/* implicit */int) var_1))));
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)93)), (var_3))))) != (arr_14 [i_1 - 1] [(unsigned short)14] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), ((!(((/* implicit */_Bool) (~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (min((((/* implicit */unsigned char) ((arr_14 [i_0] [i_0] [i_1 + 2] [(unsigned char)10] [i_3]) != (((/* implicit */long long int) 4203598769U))))), (max(((unsigned char)50), (var_5)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_1 + 2])) ? (10895144134808765414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                    arr_19 [i_5] [i_5] = ((/* implicit */int) (unsigned char)22);
                    arr_20 [i_5] [(signed char)9] [(signed char)9] = ((/* implicit */unsigned short) var_3);
                    var_15 = min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))), (var_4));
                    arr_21 [i_0] [(unsigned char)8] [i_5] = ((/* implicit */short) min(((-(min((var_8), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_7)) != (arr_7 [i_5] [i_1 + 1] [i_0] [i_0])))))));
                }
                for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) arr_0 [i_1 + 1] [i_6 - 1])))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1 + 2]))) : (arr_3 [(signed char)7])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) (+(var_8)));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            var_19 |= ((/* implicit */signed char) (unsigned char)93);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)5)) ? (arr_17 [i_6] [i_1 - 1] [i_6 + 1] [i_9 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)31)))))));
                            arr_37 [i_0] [i_6] [i_6] [i_6] [i_10 + 2] = ((/* implicit */short) (!(((((/* implicit */int) (unsigned char)162)) != (((/* implicit */int) var_7))))));
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)108))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)163))));
                            var_24 |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)159)) < (((/* implicit */int) arr_28 [i_11 + 2] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_1 + 1]))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) var_9))));
                            arr_40 [(unsigned short)1] [i_6] [(unsigned short)1] [i_6] [(unsigned short)1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)-2538)))) >= (((/* implicit */int) (short)2537))));
                        }
                        for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((short) arr_0 [i_1 - 1] [i_6 - 1]));
                            arr_45 [i_0] [i_6] [i_0] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26294)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6020)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_1)))))));
                            var_27 = ((/* implicit */signed char) var_9);
                        }
                        arr_46 [i_0] [i_6] = ((/* implicit */unsigned char) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)11]);
                        var_28 = ((/* implicit */long long int) ((signed char) var_4));
                    }
                    var_29 = ((/* implicit */short) var_10);
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((var_0), (var_0))) : ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((unsigned short) ((signed char) arr_44 [i_6])))) : ((-(arr_39 [i_0] [i_0])))));
                }
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_0] [i_0] [11ULL] = ((/* implicit */unsigned char) min((min((arr_14 [(unsigned short)11] [i_1 + 1] [i_0] [i_0] [i_0]), (arr_3 [i_1 + 1]))), (((/* implicit */long long int) (-(arr_5 [i_13] [i_1 - 1]))))));
                    var_31 -= ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (((/* implicit */int) (signed char)-62)))) << ((((~(((/* implicit */int) var_3)))) - (32760))))));
                    var_32 += ((/* implicit */unsigned short) ((unsigned char) var_7));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(((unsigned int) var_0)))))));
                }
                var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_16 [i_1 + 1] [i_1 + 2])))) ? (((/* implicit */int) (signed char)-93)) : ((-(((/* implicit */int) var_10))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_14 = 2; i_14 < 14; i_14 += 1) 
                {
                    arr_53 [(_Bool)1] [(_Bool)1] [(_Bool)1] [15] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) (~(arr_29 [i_0] [i_0] [i_0]))))));
                    var_35 = ((/* implicit */signed char) ((int) arr_26 [i_14 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]));
                    arr_54 [i_0] = ((/* implicit */unsigned char) var_3);
                }
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 5360782304049656347LL))) | (((/* implicit */int) var_5)))))));
                    arr_57 [i_1 + 1] [i_15] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_15] [i_15])) || (((/* implicit */_Bool) var_9))))))));
                    var_37 = (~(((unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_5))))) : (((((/* implicit */int) (signed char)-63)) & (((/* implicit */int) var_9))))))));
    var_39 -= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (15830987866896965095ULL)))));
}
