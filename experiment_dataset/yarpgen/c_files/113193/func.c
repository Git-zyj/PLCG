/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113193
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 += ((/* implicit */signed char) (+(((arr_0 [i_0]) | (var_7)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (min((arr_0 [i_0]), (9ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) ((int) var_12))))));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) var_7);
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))), ((-(arr_2 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)57696)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_2] [(unsigned char)13]), ((unsigned short)65535))))) : (var_9)));
                    arr_12 [i_4] [(signed char)6] = ((/* implicit */signed char) ((long long int) (unsigned short)10351));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((short) ((signed char) (unsigned short)55185)));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_16 [(signed char)1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (signed char i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            for (unsigned char i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_19 = max((((((arr_15 [i_5] [i_7]) | (((/* implicit */int) var_1)))) | (((/* implicit */int) max(((unsigned short)10341), (((/* implicit */unsigned short) var_2))))))), (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) (unsigned short)55185)) : (((/* implicit */int) ((unsigned char) (unsigned short)10351))))));
                        arr_27 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2]))))), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 + 1] [i_6 - 2]))) : (((((/* implicit */_Bool) ((short) (unsigned short)10360))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_31 [i_7] [10U] [i_7] [i_9] [i_7] [i_6 + 1] = ((/* implicit */_Bool) ((((arr_29 [10] [i_6 - 2] [i_7] [i_6] [i_9]) && (arr_29 [i_6] [i_6 + 2] [i_7] [i_7] [i_6]))) ? (((arr_29 [5] [i_6 + 2] [i_7] [i_6] [i_7]) ? (((/* implicit */int) (unsigned short)55208)) : (((/* implicit */int) arr_29 [i_5] [i_6 - 3] [i_7] [i_5] [i_7 + 1])))) : (((int) arr_29 [i_6] [i_6 + 2] [i_7] [i_9] [i_9]))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned short)55208))));
                        arr_32 [i_5] [i_6] [i_7] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10329)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_6 - 2] [i_6 - 3]))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_7] [i_7 - 1] [i_6 - 2] [i_9])) : (((/* implicit */int) (unsigned short)55185)))))));
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_2)))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)55188)) < (((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55183)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10328)))))) ? ((~(((/* implicit */int) (unsigned short)10343)))) : ((~(((/* implicit */int) var_10))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_7] [i_6] [i_7] [i_10 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_10 - 1] [i_7])) / ((-(((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55216))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7] [i_10]))) * (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [(unsigned char)13] [(unsigned char)13])))))))));
                        var_23 += ((/* implicit */unsigned char) arr_21 [i_5] [i_5] [(signed char)16]);
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_5] [i_7] [i_5] &= ((/* implicit */unsigned int) arr_19 [4U] [i_6] [i_6]);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_24 *= ((/* implicit */long long int) (-(min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10314)))))))));
                            arr_43 [i_7] [i_7] = ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55191))) : (var_0)))))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_7 [i_5] [i_5])))))) : (((/* implicit */int) (unsigned short)55188)));
                        }
                        arr_44 [i_5] [(unsigned char)4] [i_7] [i_11] [i_6] = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (((unsigned char) arr_1 [i_5] [i_11])))));
                    }
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        arr_48 [i_5] [i_5] [i_7 - 2] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) var_13))), (var_9)));
                        arr_49 [i_5] [i_5] [i_7] [i_7 - 1] [i_13] = ((/* implicit */unsigned char) min((arr_47 [(short)9] [(short)9] [(_Bool)1] [i_7] [(short)9]), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_6 - 3] [i_6] [i_7 + 1] [i_6] [i_6] [i_7])) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)55194)))))))));
                        var_25 *= ((/* implicit */unsigned short) arr_21 [(signed char)0] [i_5] [i_5]);
                        var_26 = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (unsigned short)55230)));
                    }
                    var_27 |= ((/* implicit */unsigned long long int) (unsigned short)10358);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)55182)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)55221)))) : ((-(var_11)))))));
}
