/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105244
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) + ((-(((/* implicit */int) (signed char)106))))));
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)2)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16404498987982735809ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (-2533865563602495694LL)));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) var_0);
                var_22 = ((/* implicit */signed char) ((unsigned long long int) max((((long long int) (signed char)-2)), (((/* implicit */long long int) (~(var_7)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((signed char)1), (min(((signed char)-2), (((/* implicit */signed char) arr_13 [i_4] [i_4])))))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (int i_6 = 3; i_6 < 20; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)23));
                    var_25 += ((/* implicit */short) min((((int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (signed char)2))))), (((/* implicit */int) arr_15 [i_5] [i_5] [i_6 + 2]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            arr_21 [i_4] = ((/* implicit */_Bool) ((long long int) ((long long int) (+(((/* implicit */int) arr_14 [i_4] [i_4]))))));
            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) arr_18 [i_4])), (((((/* implicit */_Bool) (+(2090980521U)))) ? (((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)1))))) : (((int) 13831144305447987414ULL))))));
        }
        arr_22 [i_4] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 405853254012765729LL)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (short)32767)))))) - ((-(((/* implicit */int) arr_19 [i_4] [i_4]))))));
        arr_23 [i_4] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_13 [i_4] [i_4])) & (max((min((((/* implicit */unsigned long long int) arr_19 [i_4] [i_4])), (2349820654980169034ULL))), (((/* implicit */unsigned long long int) ((473481077U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned short) min((max((3821486218U), (11U))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) + (((/* implicit */int) (_Bool)1))))) ? (3821486218U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)1), (arr_19 [i_8] [i_8])))))))));
        var_27 = ((/* implicit */long long int) 15794711852999411094ULL);
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        arr_29 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_9] [i_9] [i_9] [i_9]) : (arr_16 [i_9] [i_9] [i_9] [i_9])));
        var_28 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) arr_27 [i_9]))))) << (((((/* implicit */int) var_0)) - (11500)))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_34 [i_9] [i_10] [i_9] = ((/* implicit */long long int) arr_28 [i_10]);
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                arr_38 [i_9] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_9])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9])))));
                var_29 -= ((/* implicit */short) arr_37 [i_10]);
                arr_39 [i_10] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 7921755123554060436ULL)) || (((/* implicit */_Bool) 3ULL)))))));
            }
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        var_30 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_9] [i_10] [i_10] [i_13] [i_10])))))));
                        arr_48 [i_10] [i_10] [i_10] [i_13 - 1] [i_13 - 2] [i_14] [i_14] = ((/* implicit */int) arr_43 [i_13 - 2] [i_10] [i_12] [i_12] [i_12]);
                    }
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_13))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) (signed char)-2))))) ? (arr_49 [i_15] [i_10] [i_12] [i_13] [i_15]) : (arr_32 [i_9] [i_13 + 2])));
                        var_32 = ((/* implicit */short) ((signed char) arr_17 [i_9] [i_12] [i_12] [i_13 - 1]));
                        arr_52 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((39253790U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10])))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) ((unsigned long long int) arr_54 [i_13 - 2] [i_10] [i_12] [i_12]));
                        arr_55 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_11)))));
                    }
                    var_34 = (unsigned short)33920;
                }
                arr_56 [i_10] = arr_53 [i_9] [i_9] [i_10] [i_9] [i_12] [i_12];
                var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4034)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_10] [i_12])))))) * (((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_20 [i_10])))));
                arr_57 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */short) (unsigned short)1);
            }
        }
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) arr_40 [i_9])) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
}
