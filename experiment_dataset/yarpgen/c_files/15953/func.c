/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15953
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */long long int) (_Bool)0);
                            arr_14 [i_4] [(_Bool)1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_17 [7LL] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((long long int) ((int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [15U])), (var_1))));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_15 [i_3]))))))), ((((-(4293776130U))) % (var_8)))));
                            var_18 |= ((/* implicit */_Bool) ((unsigned int) ((long long int) (_Bool)0)));
                            arr_19 [i_0] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_5]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 - 1]))) : (arr_1 [i_2] [i_6 - 1])));
                            var_20 = ((/* implicit */_Bool) ((unsigned short) arr_11 [i_6 - 1] [i_6 - 1] [i_1] [i_3] [i_0]));
                        }
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_2 [i_0]) < (arr_2 [i_0]))))));
                        arr_23 [i_3] [i_1] [i_1] [i_0] = min((((((/* implicit */_Bool) (+(907569293U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)-20087), (((/* implicit */short) (unsigned char)203))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_1 [i_0] [i_2])))) ? (((/* implicit */int) min(((unsigned short)25606), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)29)), (var_3)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */_Bool) 3826157193U)) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) (short)-32760)))))));
                        var_22 = (~((~(((/* implicit */int) arr_10 [i_0])))));
                        arr_28 [i_7] [i_1] [6U] [i_7] [i_1] [i_7] = ((/* implicit */short) ((((_Bool) arr_6 [i_0] [i_1] [3] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_2] [i_7]), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (11662830384207199493ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        arr_32 [i_8] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_0] [i_2] [i_2] [i_8]));
                        var_23 = ((((/* implicit */_Bool) arr_30 [i_8] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_31 [i_1])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (arr_20 [i_0] [i_1] [i_2] [6] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_9))));
                            arr_36 [i_0] [(_Bool)0] [i_2] [i_8] [(_Bool)0] [i_2] = ((/* implicit */_Bool) -723828525);
                        }
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_2] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_15))) ? (arr_25 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 907569286U))))));
                            arr_42 [i_0] [i_0] [13ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4888966754895306418ULL)) ? (arr_12 [(unsigned char)2] [(unsigned char)2] [11U] [i_2] [i_2] [i_8] [i_10]) : (arr_12 [3U] [i_1] [i_2] [i_8] [i_8] [i_8] [i_8])));
                            arr_43 [i_0] [i_1] [(unsigned short)15] [(_Bool)1] [(unsigned char)1] = ((/* implicit */_Bool) (signed char)35);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_1] [(unsigned char)15] [i_10] [i_2])) ? (((unsigned int) (signed char)-20)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                        for (short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [5ULL] [i_0] [9] [9] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0] [(short)6] [i_0])))));
                            arr_48 [i_0] [i_1] [i_0] [i_8] [i_8] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(907569293U)))) || (((/* implicit */_Bool) (-(var_6))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 907569297U)) ? (var_13) : (((/* implicit */int) arr_10 [i_0])))))));
                            arr_49 [(_Bool)1] [i_8] [i_2] [0LL] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_2] [i_8] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_27 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_31 [i_1])));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_16);
    var_29 = var_2;
    var_30 = ((/* implicit */unsigned char) var_15);
    var_31 = ((/* implicit */_Bool) (+(((unsigned int) (~(var_1))))));
}
