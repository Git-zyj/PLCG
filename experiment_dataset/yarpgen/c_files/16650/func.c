/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16650
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
    var_15 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_3 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((arr_3 [(_Bool)1]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 3]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) ((short) arr_5 [i_1] [(short)4] [(short)5]));
                var_18 = ((/* implicit */_Bool) max((((unsigned long long int) arr_7 [i_0])), (((unsigned long long int) max((var_9), (((/* implicit */short) arr_0 [i_0] [i_0])))))));
                arr_12 [i_0] [i_0] [4] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_1 [i_0 + 3]))));
            }
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */long long int) 15366606837301557444ULL);
                            arr_23 [i_1] [i_1] [i_3] [i_4 - 1] [i_1] &= ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                var_19 = var_13;
            }
            for (long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [11] [i_1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [(signed char)3])))))), (((/* implicit */int) min((max((((/* implicit */unsigned char) var_13)), (arr_25 [i_0] [0] [i_6]))), (((unsigned char) var_9)))))));
                var_21 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 3] [i_0])) >> (((((((/* implicit */long long int) var_2)) ^ (607721096963746616LL))) + (607721097768231889LL)))))));
            }
            var_22 = arr_13 [i_0] [i_0] [i_0];
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_23 = ((/* implicit */int) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_0 + 2]))))));
            arr_31 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (short)32759)), (((((/* implicit */int) ((unsigned char) arr_29 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) 355833695929955740LL)) ? (var_12) : (((/* implicit */int) (signed char)0))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (int i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((var_14), (((/* implicit */unsigned long long int) var_5)))) <= (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) -6187090230142975368LL)))))))));
                            var_25 += ((/* implicit */short) min((((unsigned long long int) arr_6 [i_0 + 3] [i_0 - 3])), (((/* implicit */unsigned long long int) max((arr_6 [i_0 + 3] [i_0 - 3]), (arr_6 [i_0 + 3] [i_0 - 3]))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((arr_35 [i_0] [i_7] [i_10]) < (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)(-32767 - 1)), ((short)-32765)))), (max((var_2), (((/* implicit */int) (signed char)-2))))))))))));
                            arr_38 [i_0] [i_7] [i_8] [i_8] [i_0] [i_10] = ((/* implicit */_Bool) ((long long int) -1941352680));
                            arr_39 [(signed char)2] [i_7] [i_8] [i_0] [i_9] [i_10] = ((/* implicit */int) (_Bool)1);
                        }
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                        {
                            var_27 = max((1596071933), (((/* implicit */int) (short)32767)));
                            var_28 -= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)2)))));
                            arr_44 [i_0] [i_0] [i_8] [0LL] [i_11] = ((/* implicit */short) arr_30 [i_9]);
                        }
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_3))));
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 12; i_12 += 2) 
                        {
                            arr_47 [i_0] [i_7] [i_8] [i_8] [(_Bool)1] [i_7] [i_0] |= ((/* implicit */unsigned char) max(((short)0), (((/* implicit */short) (_Bool)1))));
                            arr_48 [i_12] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12] [7ULL]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15614)) / (((/* implicit */int) (signed char)-18))))) / (var_6)))));
                        }
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((((/* implicit */short) (signed char)-124)), ((short)1465))))));
                        arr_49 [i_0] [i_7] [i_7] [i_0] [i_7] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) min((arr_27 [8LL] [i_0 - 2] [i_0]), (((/* implicit */short) ((_Bool) (signed char)50)))))), ((-(max((((/* implicit */int) var_3)), (var_8)))))));
                    }
                } 
            } 
            arr_50 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)13532)), (-1191275607)))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [7LL] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]))))), (max((arr_35 [3] [3] [i_7]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))))));
        }
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (max((max((((/* implicit */int) var_9)), (var_12))), (((/* implicit */int) ((signed char) var_11)))))));
    var_32 ^= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_3))))), (max((((/* implicit */unsigned long long int) var_5)), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))))))));
}
