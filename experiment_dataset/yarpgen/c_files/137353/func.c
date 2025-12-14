/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137353
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
                var_16 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                var_17 |= ((/* implicit */unsigned short) arr_5 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_2] [(unsigned short)6] [i_3] [i_4] = arr_11 [i_4] [i_3] [i_2] [i_1];
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_4])) || (((/* implicit */_Bool) ((short) arr_10 [i_0] [i_3] [i_4]))));
                                var_18 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]);
                                var_19 = arr_11 [i_0] [i_2] [i_1] [i_0];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [16ULL]))));
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
                for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((arr_5 [i_5]), (arr_5 [i_1])))), (max((arr_19 [(unsigned char)22] [i_1] [(unsigned char)22]), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_1] [i_1] [(signed char)3])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [(short)18] [(_Bool)1] [i_0]))))))));
                    arr_21 [(_Bool)1] [(_Bool)1] [i_0] &= ((/* implicit */unsigned short) ((short) max((((/* implicit */int) ((short) arr_13 [4] [i_1] [i_5] [i_5]))), (((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [(signed char)10])))))));
                    arr_22 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0] [i_1] [i_5])), (arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_0])))), (arr_19 [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) (_Bool)1))))))));
                    arr_23 [i_1] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */int) arr_2 [i_6]))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_12 [i_8] [(_Bool)1] [i_6] [i_6] [i_1] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((max((arr_33 [i_10]), (((/* implicit */short) max((((/* implicit */unsigned char) arr_31 [i_9])), ((unsigned char)135)))))), (((/* implicit */short) arr_31 [i_10])))))));
            var_25 *= ((/* implicit */_Bool) arr_31 [i_9]);
            arr_35 [i_9] = ((/* implicit */unsigned short) arr_33 [i_10]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))) - (max((((/* implicit */unsigned long long int) min((arr_32 [i_9]), (arr_36 [i_9])))), (((arr_37 [i_9] [i_9] [i_11]) - (((/* implicit */unsigned long long int) arr_32 [i_9]))))))));
            arr_38 [i_9] [i_11] = ((/* implicit */_Bool) arr_36 [i_11]);
            var_27 = ((/* implicit */unsigned char) min((max((arr_34 [i_11]), (max((arr_33 [i_11]), (((/* implicit */short) arr_31 [i_9])))))), (arr_34 [i_9])));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) arr_32 [i_12]);
                        var_29 = ((/* implicit */unsigned short) arr_37 [i_9] [i_11] [i_12]);
                        var_30 = max((((((/* implicit */int) arr_33 [i_13])) - (min((((/* implicit */int) arr_33 [(unsigned char)6])), ((-2147483647 - 1)))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_9])) || (((/* implicit */_Bool) arr_42 [i_13] [i_11] [i_12] [i_13]))))) - (max((((/* implicit */int) arr_41 [i_13] [i_9] [i_9] [i_9])), (arr_36 [i_9]))))));
                    }
                } 
            } 
            var_31 &= ((/* implicit */unsigned short) min((arr_32 [i_9]), (((/* implicit */int) arr_41 [i_11] [i_11] [i_9] [(short)8]))));
        }
        for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            arr_48 [i_14] = ((/* implicit */_Bool) max((arr_36 [i_14]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_14] [i_9] [i_14] [i_14])) << (((((/* implicit */int) arr_33 [i_9])) + (6890)))))) <= (max((arr_37 [i_14] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_47 [i_9] [20ULL] [i_14])))))))));
            var_32 -= ((/* implicit */_Bool) max((min((arr_40 [i_14] [i_14]), (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_14])) || (((/* implicit */_Bool) arr_31 [i_9]))))))), (((/* implicit */int) min((min((arr_42 [(unsigned char)22] [i_9] [i_9] [(unsigned char)22]), (((/* implicit */unsigned short) arr_34 [i_9])))), (((/* implicit */unsigned short) arr_34 [i_14])))))));
            var_33 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9] [i_14])) > (arr_32 [i_9])))) >> (((((/* implicit */int) arr_45 [i_14])) - (17816))))) >= (arr_36 [i_14])));
            var_34 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */unsigned long long int) arr_45 [i_9])), (arr_37 [i_14] [i_9] [i_9]))), (((/* implicit */unsigned long long int) arr_39 [i_9] [i_14])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_42 [i_14] [23ULL] [i_9] [i_14]))) - (arr_32 [i_9]))))));
        }
        arr_49 [i_9] = ((/* implicit */unsigned char) arr_33 [i_9]);
    }
    var_35 = ((/* implicit */signed char) var_4);
    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned short) var_7))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
}
