/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132561
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
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned char) var_3)), ((unsigned char)0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) var_8);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) 416114832);
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    var_21 = ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (arr_1 [i_0 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_22 &= ((/* implicit */unsigned int) arr_8 [i_0]);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */int) (unsigned char)227)))), (((/* implicit */int) ((signed char) arr_11 [18ULL] [16] [i_2] [i_3] [i_3])))))) ? (((long long int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1785678168U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)28)))))));
                    }
                }
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    var_24 -= ((/* implicit */unsigned int) var_9);
                    arr_17 [i_4] [i_1] [i_4] = 82432386U;
                    arr_18 [i_4] [i_4] = ((/* implicit */int) var_13);
                }
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_25 += ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 + 1]);
                    var_26 &= ((unsigned long long int) (unsigned char)28);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_0 + 1])) >= (((/* implicit */int) (short)-20571)))) ? (((((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_16)))))) / (((/* implicit */int) arr_13 [4U] [i_1] [i_5] [i_5] [i_6] [i_6])))) : (((/* implicit */int) arr_8 [i_0 + 1]))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((long long int) ((arr_19 [i_0] [i_0] [i_5] [i_6]) ? (arr_9 [i_1] [i_6]) : (((/* implicit */int) arr_19 [i_0 + 1] [13ULL] [i_5] [i_6]))))))));
                    }
                    var_29 &= ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_30 *= ((/* implicit */long long int) (signed char)-110);
                    var_31 ^= ((/* implicit */unsigned int) ((int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                    arr_26 [i_0] [17LL] [i_7] = ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1]);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    arr_29 [i_0] [i_1] [i_8] = ((/* implicit */int) ((signed char) (_Bool)0));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [(_Bool)1] [i_8 + 1] [i_8] [i_9 + 1] [i_8])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_8] [i_1]))) & (var_7))) : (((/* implicit */unsigned long long int) arr_1 [i_9 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1]))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) (unsigned char)249))))));
                                arr_35 [i_8] = ((/* implicit */int) var_7);
                                var_33 = max((((/* implicit */long long int) var_14)), (arr_24 [i_10] [i_9] [(_Bool)1] [(_Bool)1]));
                                var_34 = ((/* implicit */unsigned short) min((arr_9 [i_0] [22]), (((((/* implicit */_Bool) max((arr_20 [i_0 + 1] [i_1] [i_0 + 1] [i_9 + 2]), (((/* implicit */unsigned long long int) -6880714879062995724LL))))) ? (((/* implicit */int) var_3)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-15))))))));
                                arr_36 [i_0] [i_1] [i_1] [i_10] [i_9] [i_10] &= arr_19 [i_0 + 1] [i_1] [i_8] [i_8];
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) ((((long long int) var_7)) % (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [(unsigned char)22] [(_Bool)1])), (var_15))))));
                    var_36 = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_33 [i_0 + 1] [i_1] [i_1] [i_8 - 2] [21U] [i_0 + 1])) : (var_7))), (((var_8) ^ (arr_30 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))))));
                }
                for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) var_16);
                    var_38 = ((/* implicit */int) ((var_5) << (((((/* implicit */int) ((signed char) min((arr_33 [(unsigned char)19] [i_0] [i_0] [i_1] [i_1] [i_11 + 1]), (arr_22 [i_11]))))) + (69)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            var_39 = ((/* implicit */short) var_6);
                            var_40 = ((/* implicit */short) var_11);
                        }
                        arr_51 [i_14] [i_14] [i_12] [i_15] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_12] [i_12] [i_12] [i_14] [i_12]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) / (arr_25 [i_14 + 1])))));
                    }
                    var_41 = ((/* implicit */long long int) ((_Bool) var_11));
                    arr_52 [i_14] [i_13] [i_13] [i_14] = ((/* implicit */unsigned int) var_13);
                    var_42 ^= ((/* implicit */unsigned short) max((((unsigned int) (unsigned char)179)), (((/* implicit */unsigned int) (unsigned char)120))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)249))))) > (12386761210536157138ULL))))));
                        var_44 = ((/* implicit */unsigned char) var_5);
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 4; i_18 < 16; i_18 += 4) 
                    {
                        var_45 = var_13;
                        arr_59 [i_18] [i_14] [i_14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-29))));
                        var_46 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) arr_15 [i_14 + 1])) : (arr_2 [i_14 - 1])));
                        var_47 = ((/* implicit */signed char) arr_0 [i_14]);
                    }
                }
            } 
        } 
        arr_60 [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))) ? (var_4) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_12] [i_12] [8]))))) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [22] [i_12])))));
    }
    var_48 = ((/* implicit */unsigned short) var_5);
}
