/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161721
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
    var_12 = ((/* implicit */long long int) ((unsigned long long int) ((((unsigned long long int) (signed char)55)) & (((/* implicit */unsigned long long int) 514780619)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) (+(((/* implicit */int) min(((signed char)-45), ((signed char)-43))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) & (((/* implicit */long long int) var_11))));
        arr_3 [i_0] [1LL] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = var_0;
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) & (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [1]) & (((/* implicit */long long int) var_3))))));
            arr_8 [i_0] = ((/* implicit */long long int) ((unsigned int) var_8));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((8008280456563972535LL) <= (((/* implicit */long long int) var_3))))) & (((/* implicit */int) (signed char)-39))))));
                arr_16 [i_0] [i_0] [i_3] [i_2] = min((var_8), (((/* implicit */unsigned int) min((((((/* implicit */int) var_4)) & (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_12 [i_0] [i_2] [i_3]))))));
            }
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_25 [i_0] [i_5] [9ULL] [i_5] [i_2] [i_0] = ((/* implicit */unsigned char) arr_17 [i_0] [(unsigned char)10] [i_4] [2ULL]);
                    var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_10)))));
                    arr_26 [i_0] [i_4] [i_4] [i_2] [i_5] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(short)0] [i_5])) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4])) : (arr_23 [i_5]))))), (((int) ((arr_19 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_32 [i_0] [i_4] [i_6] [i_7] = ((/* implicit */short) ((unsigned long long int) var_7));
                        arr_33 [i_0] [i_0] [2] [i_0] [(signed char)7] = ((/* implicit */unsigned long long int) ((int) arr_29 [i_0] [i_2] [i_2] [(unsigned char)6] [(unsigned char)6] [i_7]));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_20 [i_0]))))) / (((((/* implicit */_Bool) (unsigned short)21799)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)6))))));
                        arr_35 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)9] [i_2] [i_2] [i_2]))) % (arr_28 [i_6] [i_6] [i_6]))) < (((/* implicit */unsigned long long int) arr_10 [i_0]))));
                    }
                    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_22 [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_2] [i_4]))))))) && (((/* implicit */_Bool) var_1))))));
                    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned long long int) var_0)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (arr_11 [i_0] [i_0] [i_0] [i_6]))))))) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((arr_0 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                }
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            var_17 = ((max((((/* implicit */long long int) min(((signed char)39), ((signed char)-6)))), (((((/* implicit */long long int) var_11)) & (arr_6 [i_0] [i_2] [i_4]))))) * (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) arr_9 [i_9] [i_9] [11])) < (((/* implicit */int) arr_37 [i_8] [i_8] [i_4] [i_0] [i_8])))), (((arr_9 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) arr_20 [i_0])))))))));
                            arr_40 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_28 [4] [4] [i_9])) || (((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_4])))))) ? (max((((/* implicit */long long int) ((unsigned int) (signed char)55))), (arr_6 [i_4] [i_2] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_0] [i_2] [i_0]), (arr_14 [i_0] [i_2] [i_4])))))));
                        }
                    } 
                } 
            }
            arr_41 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_24 [i_0] [4] [i_0] [i_2]) % (arr_24 [(unsigned short)8] [i_2] [(unsigned short)8] [i_2])))), (min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((unsigned char) arr_27 [i_2] [i_2] [i_2] [5ULL])))))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        arr_44 [i_10] = ((/* implicit */unsigned int) arr_42 [i_10] [i_10]);
        arr_45 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_10] [13])) ? (var_1) : (var_1))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_10]))) == (var_7)))))))), ((+((-(((/* implicit */int) (signed char)124))))))));
        var_18 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)3170)) >> (((-323789238) + (323789258))))));
        arr_46 [i_10] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_10] [i_10])) <= (((/* implicit */int) arr_43 [i_10] [i_10]))))), ((-((-(arr_42 [i_10] [i_10]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        arr_49 [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [(short)11] [i_11] [i_11]))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) var_11)) % (arr_36 [i_11] [i_11] [i_11]))))));
        var_20 = ((/* implicit */_Bool) arr_28 [(_Bool)1] [i_11] [i_11]);
    }
}
