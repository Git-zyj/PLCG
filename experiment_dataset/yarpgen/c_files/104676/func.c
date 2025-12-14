/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104676
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (2713)))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (6358643328618932941LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-14445)))), (((/* implicit */int) ((unsigned char) arr_2 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((32212254720ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) & (((/* implicit */int) (short)-16049))))))))) : (((((/* implicit */_Bool) max((18446744041497296896ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]))))) ? (18446744041497296878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1040187392)))))));
                                arr_13 [(short)5] [i_0 + 1] [i_1] [i_2] [i_0] [i_3] [i_4] = ((unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0 + 2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) -1354504674)) ? (arr_4 [i_0] [i_2] [i_0]) : (arr_4 [i_0] [i_2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 32212254720ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [0LL] [i_0 - 1] [i_0]))))), (arr_10 [i_0] [7ULL] [(short)0] [i_0] [(short)1] [9LL] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                {
                    var_21 = ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-16020)) + (((/* implicit */int) arr_6 [i_6] [i_5 - 1] [2ULL]))))) ? (((/* implicit */unsigned long long int) ((int) arr_5 [i_5]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) ^ (1587648700373801379ULL))))) != (32212254719ULL));
                    arr_19 [(unsigned char)4] [(unsigned char)4] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+((-(((/* implicit */int) arr_3 [i_5])))))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((arr_5 [i_0]) ? (((/* implicit */int) arr_16 [i_0 + 1] [(short)4] [i_0 + 1] [i_0])) : (((/* implicit */int) (short)-30516))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))) : ((+(((18446744041497296896ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) 2444172116U);
    }
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_23 [i_7]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_28 [7U] [i_8] [i_10] [4ULL])) : (((/* implicit */int) arr_30 [i_10] [i_10] [i_9] [i_8] [i_7]))))))));
                                var_23 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_24 [i_10] [i_9] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1987556731714865138ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7] [i_9] [i_10] [i_11])) ? (((/* implicit */int) var_19)) : (-1040187404)))))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)4)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_26 [i_11])))) ? (((/* implicit */int) ((unsigned char) ((short) arr_32 [i_7 - 1] [i_7 - 1] [(short)9] [i_11])))) : (((/* implicit */int) ((unsigned char) (unsigned char)155)))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_33 [11U] [i_8] [11U] [11U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (32212254720ULL))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8855))))))) ? (((/* implicit */unsigned long long int) (~(((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-7839)))))))) : (min((var_9), (18446744041497296893ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 11; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((max((8835431458784988614ULL), (((/* implicit */unsigned long long int) arr_27 [i_7 + 3] [i_8 - 1])))) < (((/* implicit */unsigned long long int) ((long long int) 0ULL)))));
                                arr_39 [6U] [i_9] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_36 [i_8])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((11737188541631125467ULL) != (max((14695554622565871203ULL), (((/* implicit */unsigned long long int) (short)26943)))))))) : (max((((/* implicit */unsigned long long int) arr_28 [i_13] [i_12] [(short)10] [(unsigned short)9])), (8117103268849939567ULL)))));
                                arr_40 [(unsigned char)2] [i_8] [i_8] [(short)3] [i_13 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) arr_22 [(unsigned char)8] [i_9]))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_9] [i_12 - 2] [i_13]))) > (arr_38 [i_13 - 1] [11ULL] [i_12] [i_9] [i_9] [i_8] [11ULL]))))))) ? (((/* implicit */int) (unsigned char)155)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1578220551)))))))));
                                arr_41 [i_8] [i_8] [(short)5] [i_12] [i_8] = ((/* implicit */unsigned char) (short)-6918);
                            }
                        } 
                    } 
                    arr_42 [i_7 - 1] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_7] [(_Bool)1] [i_9] [i_8 - 3] [i_8 + 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [12ULL] [(unsigned short)5] [12ULL] [i_8] [i_9] [i_8]))) : (arr_25 [i_8] [i_8 + 1] [i_9]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_8] [i_9])) == (((/* implicit */int) arr_27 [i_8] [(_Bool)1]))))))));
                    var_27 = ((/* implicit */short) ((((((/* implicit */int) max((arr_30 [i_7] [i_7 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 2]), (arr_30 [i_7 + 4] [i_7 + 4] [i_8 - 2] [i_8 - 1] [i_8])))) + (2147483647))) >> (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_30 [i_7] [i_7 + 2] [i_8 - 2] [i_8 - 3] [i_9]))))));
                }
            } 
        } 
        arr_43 [i_7] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_24 [i_7 + 3] [i_7 - 1] [i_7]), (arr_24 [i_7 + 2] [i_7 + 4] [i_7 + 2])))) + (((4773242941331023351ULL) ^ (arr_34 [i_7 + 2] [i_7 + 1])))));
        arr_44 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_32 [i_7] [i_7] [i_7 + 3] [(unsigned char)7])) : (-1578220533)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [6ULL] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7 + 4] [i_7] [i_7] [i_7 + 4] [(short)10]))) : (var_1)))) : (arr_23 [i_7 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_7 - 1] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 4] [(unsigned char)10]))))))) : (((arr_29 [8ULL] [i_7]) << (((((((/* implicit */int) (unsigned short)6676)) ^ (((/* implicit */int) (unsigned char)0)))) - (6663)))))));
    }
    var_28 = ((/* implicit */unsigned short) max((var_10), ((unsigned char)78)));
    var_29 = ((/* implicit */short) min((((((((/* implicit */int) (unsigned char)126)) - (((/* implicit */int) (unsigned char)165)))) + (((var_0) - (((/* implicit */int) (unsigned short)13)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (var_9) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */int) (unsigned char)105)) / (((/* implicit */int) (unsigned short)58859)))) : (((/* implicit */int) var_13))))));
}
