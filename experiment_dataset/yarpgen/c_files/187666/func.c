/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187666
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
    var_18 |= ((/* implicit */short) min((((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) (unsigned short)50404)) : (((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))), (((min((var_11), (var_12))) * (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    var_19 = ((/* implicit */unsigned short) var_13);
    var_20 = var_11;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            arr_4 [i_1 - 1] [i_0] = ((/* implicit */long long int) (signed char)-72);
            arr_5 [i_0] [(signed char)8] = max(((~(arr_2 [i_0] [i_1 + 1] [i_1 - 1]))), (max((arr_2 [i_0] [i_0] [i_1 + 1]), (((/* implicit */long long int) arr_1 [i_0])))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [3ULL])) ? (arr_0 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195)))))), (min((((/* implicit */unsigned long long int) (unsigned short)26214)), (var_8)))))) ? (max((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))), (((/* implicit */long long int) ((signed char) arr_2 [i_0] [(unsigned char)4] [i_1 - 2]))))) : (((/* implicit */long long int) arr_1 [i_0]))));
        }
        var_22 = ((/* implicit */int) (unsigned short)15142);
        arr_6 [i_0] [i_0] = ((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1)))) + (max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))));
                            arr_21 [i_2] [(signed char)4] [(signed char)4] [(signed char)4] [i_3] = ((/* implicit */short) ((((long long int) arr_19 [i_2] [i_3] [i_4] [i_3] [i_2])) >> ((~(((/* implicit */int) arr_20 [i_3] [i_3 - 1] [i_3] [i_4] [i_5] [i_5] [(_Bool)0]))))));
                        }
                        arr_22 [i_4] [i_3] [i_3] [i_4 - 1] = ((/* implicit */signed char) 11005371888171368904ULL);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (arr_16 [10ULL] [10ULL] [i_4] [i_4])));
                    }
                } 
            } 
            arr_23 [(_Bool)1] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned char)187)))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])), (arr_9 [i_3 + 1])))) ? (((arr_16 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) + (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_2] [i_2])))));
        }
        for (long long int i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), ((unsigned short)11935))))));
            arr_26 [i_7 - 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) (~(-1LL))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        }
        arr_27 [i_2] = ((/* implicit */unsigned short) var_17);
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (max((arr_16 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) ? (((/* implicit */int) (unsigned short)15143)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])))))));
        var_28 = ((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) (unsigned short)65535);
                                arr_42 [i_8] [i_10] [i_8] [i_11] [i_12] = ((/* implicit */unsigned short) (short)11425);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (-(((/* implicit */int) var_16)))))), (9223372036854775807LL)));
                }
            } 
        } 
    } 
}
