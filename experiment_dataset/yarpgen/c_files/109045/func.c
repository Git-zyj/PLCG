/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109045
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_12);
                        arr_10 [(signed char)4] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((2464545865655712514ULL) / ((~(((unsigned long long int) var_9))))));
                        arr_11 [i_0] [(unsigned short)2] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (~((-(((long long int) arr_1 [i_2]))))));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)21]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [(_Bool)1])) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_2]))) : (var_10))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_9)))))));
        arr_14 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_4)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [(short)14] [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)10])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1926480258U)) ? (arr_4 [i_0] [(short)14]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((long long int) (signed char)-4)) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [(signed char)2]))))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2368487037U)) ? (((((/* implicit */_Bool) (short)-1)) ? (arr_6 [18ULL] [(unsigned short)18] [(unsigned short)18] [(unsigned char)14]) : (((/* implicit */unsigned long long int) 70360154243072LL)))) : (((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_18 [i_4] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_1 [(signed char)3]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21] [(unsigned short)7]))));
        arr_19 [i_4] = ((2634254249236954855ULL) == (var_0));
        arr_20 [i_4] = ((/* implicit */unsigned char) ((arr_7 [i_4] [(short)6]) ? (arr_6 [i_4] [i_4] [(_Bool)1] [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [4LL])))));
    }
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((~(1926480258U)))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 7; i_8 += 3) 
                    {
                        {
                            arr_32 [i_5] [8LL] [i_7] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)0) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_16 [(unsigned short)8] [(unsigned short)8])))) : (((/* implicit */int) arr_16 [(unsigned short)1] [i_7])))))));
                            arr_33 [2LL] [(_Bool)1] |= ((/* implicit */short) var_11);
                            arr_34 [i_8] = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                arr_35 [i_5] [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_8 [i_5] [i_6] [i_5] [i_6])) | (((/* implicit */int) var_8))))))) ? (var_13) : (((((/* implicit */_Bool) min((arr_8 [i_6] [i_5] [i_5] [i_5]), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) var_0)) ? (5466765246199675331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))))) : (((/* implicit */unsigned long long int) ((arr_16 [i_5] [(_Bool)1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_5])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (signed char)16);
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            {
                arr_42 [i_9] [i_9] [i_10] = ((/* implicit */signed char) arr_38 [i_9]);
                arr_43 [22LL] = ((/* implicit */signed char) 16176678407974061413ULL);
                /* LoopNest 3 */
                for (unsigned short i_11 = 2; i_11 < 21; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 3) 
                        {
                            {
                                arr_53 [i_10] [1ULL] [i_9] [i_10] = ((/* implicit */signed char) arr_50 [i_9] [5ULL] [i_11 + 1] [i_12] [i_11 + 1]);
                                arr_54 [(short)4] [i_12] [(signed char)16] [(short)4] [(short)4] = ((/* implicit */unsigned short) arr_52 [i_9] [i_9]);
                                arr_55 [i_13] [6LL] [i_12] [i_9] [i_10] [i_10] [i_9] = ((/* implicit */signed char) 5740136349704522004LL);
                                arr_56 [i_13] [i_9] [(unsigned short)13] [i_12] [i_13] = ((/* implicit */_Bool) 14923239893488007555ULL);
                            }
                        } 
                    } 
                } 
                arr_57 [i_9] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) - (((((/* implicit */_Bool) arr_41 [i_9] [i_9])) ? (var_11) : (var_11)))))));
            }
        } 
    } 
}
