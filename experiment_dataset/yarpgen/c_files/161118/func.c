/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161118
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) min(((-(8506588683751165518LL))), (((/* implicit */long long int) (unsigned short)65535))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = min((max((((/* implicit */int) (_Bool)1)), (1855620329))), (((/* implicit */int) var_12)));
                                var_16 = ((/* implicit */short) ((min((((/* implicit */int) arr_4 [i_0] [i_3] [i_4])), (min((var_14), (((/* implicit */int) var_2)))))) ^ (((/* implicit */int) ((unsigned char) ((int) arr_10 [i_4]))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)18679)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-77)))), (49152)))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */short) (unsigned char)130))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : ((~(1854169703795760238LL))))) : (((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) / (var_3)))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_1] [i_3] [i_1] [i_3]), (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */short) min(((signed char)-7), (arr_7 [i_4] [i_3] [i_1] [i_1])))))))) : ((~(((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) == (((/* implicit */int) (unsigned short)32458))))) : (var_14)))) + (max((min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
                    var_20 = ((int) ((short) arr_9 [i_2] [i_1] [i_0] [i_0] [i_0]));
                }
                for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (49133)))) ^ (min((3566389648U), (((/* implicit */unsigned int) arr_8 [i_6])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (signed char)69)))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) (_Bool)1);
                            var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_5 + 1])))) < (((((/* implicit */_Bool) (~(arr_8 [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_21 [i_0] [i_6] [i_5] [i_5] [i_0] [i_0])), (var_14)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_11 [i_1] [i_5 - 1] [i_1] [i_1]) : (-6814836656820966929LL))))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) arr_5 [i_5 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_6])) : (var_8)))) : (max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_5 - 1])))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_6)) : (var_9)))))) ? (min((var_7), (((/* implicit */long long int) (signed char)-108)))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1]))))))));
                        arr_25 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_5 - 1])) ? (((/* implicit */int) var_4)) : (arr_9 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) ((short) min((var_10), (((/* implicit */short) arr_13 [i_5] [i_1] [i_5] [i_6] [i_6]))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */int) var_2);
                        arr_29 [i_0] [i_5] [i_5] = ((/* implicit */short) arr_16 [i_1] [i_5 + 1] [i_5 + 1]);
                    }
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((_Bool) var_0)))))));
                        arr_32 [i_0] [i_0] [i_9] [i_5] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-108)), (var_9)))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_11)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (+(min((min((arr_22 [i_10] [i_5] [i_5] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_14 [i_10] [i_0]))))));
                        var_27 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_0 [i_5 + 1])) : (arr_18 [i_5 - 1] [i_1]))), (((/* implicit */int) ((short) arr_18 [i_5 - 1] [i_1])))));
                        arr_36 [i_5] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_30 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_5 + 2])))))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((((/* implicit */_Bool) (~(8172915230270873278LL)))) ? (min((((/* implicit */long long int) (_Bool)1)), (4060910022157526497LL))) : (min((var_7), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_1] [i_5 + 2] [i_0] [i_11 + 1] [i_11 + 1])))))), (((/* implicit */long long int) var_9)))))));
                        var_30 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                        var_31 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) min((((/* implicit */short) var_11)), (arr_31 [i_11 + 1] [i_5] [i_1] [i_5] [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                        var_32 = min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_11])))))), (((min((((/* implicit */int) arr_34 [i_0] [i_1] [i_5] [i_0])), (arr_23 [i_5] [i_5]))) + (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_1 [i_1] [i_11])))))));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= (min((((/* implicit */int) (unsigned short)24131)), (-1341452554)))))) / ((~(((((/* implicit */_Bool) 6397378289038612412LL)) ? (((/* implicit */int) arr_1 [i_12] [i_0])) : (((/* implicit */int) (unsigned short)6219))))))));
                        arr_43 [i_5] [i_12] = ((/* implicit */_Bool) (~(-49152)));
                        var_34 = max((min((((/* implicit */int) arr_20 [i_12] [i_5 + 2] [i_5 + 1] [i_1])), (-1))), (((/* implicit */int) ((1265423034313517371LL) == (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5 - 1] [i_5] [i_5])))))));
                    }
                    var_35 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_5] [i_0])) ? (-49153) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-7)), ((unsigned char)227))))))));
                    var_36 = min((((/* implicit */int) max((((/* implicit */signed char) arr_16 [i_5 - 1] [i_5 + 2] [i_5 - 1])), (var_5)))), (max((min((arr_23 [i_5] [i_5]), (arr_41 [i_5] [i_5] [i_5] [i_5]))), (min((((/* implicit */int) (_Bool)1)), (arr_23 [i_0] [i_5]))))));
                }
                var_37 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_1] [i_1]))))));
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_0] [i_0] [i_1] [i_1]), (((/* implicit */long long int) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_4)))))))) ? (min((((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1]))), (((((/* implicit */_Bool) 4103476950U)) ? (((/* implicit */int) (unsigned char)153)) : (var_8))))) : ((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_2))))))) ? (var_9) : (((/* implicit */int) var_2))));
    var_40 = ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) max((var_0), (536870911)))), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
}
