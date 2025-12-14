/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118857
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)24883))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (var_7)))));
    var_12 = ((/* implicit */short) max((((long long int) ((((/* implicit */int) (short)24906)) << (((var_6) - (11936243647373822931ULL)))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((((_Bool) arr_5 [i_0] [i_0])) ? (((unsigned int) var_2)) : (((arr_0 [i_0]) ? (var_0) : (arr_1 [i_0 + 2])))))));
            var_13 = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 134217720U)), (var_6))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
            var_14 = ((/* implicit */int) arr_1 [i_0]);
            var_15 = ((/* implicit */long long int) (+((+(arr_4 [i_0 + 1] [i_0 + 1])))));
        }
        var_16 = ((/* implicit */short) ((signed char) arr_0 [i_0]));
        arr_7 [i_0] = ((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) ^ (((arr_0 [i_0 - 2]) ? (((/* implicit */unsigned long long int) var_3)) : (arr_2 [i_0] [i_0]))));
    }
    for (short i_2 = 4; i_2 < 16; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_8))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned int) ((unsigned long long int) (short)-3528))))));
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] [13ULL] = ((/* implicit */int) arr_5 [i_2] [i_2]);
            var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) min((arr_12 [i_2] [i_2] [13ULL]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3])))))), ((+(arr_4 [i_2 - 4] [i_2 - 4])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned long long int) arr_8 [i_4]);
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_3] [(short)5] [i_2])), (var_1))) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                    arr_20 [i_2 - 2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) 9223372036854775804LL)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6 - 1])) ? (arr_1 [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */unsigned long long int) arr_1 [i_6 - 2])) ^ (arr_2 [i_2 - 4] [i_6 + 2])))));
                            var_23 = ((/* implicit */short) (+(((long long int) arr_10 [i_2]))));
                            arr_26 [i_2 + 1] [i_2] [i_3] [12ULL] [i_6] [i_2 + 1] [i_7] |= ((/* implicit */short) ((((((int) arr_21 [i_3] [i_3] [i_6] [14ULL])) ^ ((+(((/* implicit */int) arr_9 [i_2] [(short)5])))))) << (min((((/* implicit */int) arr_5 [i_2 - 2] [i_6 - 1])), ((+(((/* implicit */int) var_2))))))));
                            arr_27 [i_2] [i_3] [i_4] [11] [i_3] [i_3] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_0 [i_6 + 2])), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_5 [i_4] [i_2]))));
                            arr_28 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) ((arr_9 [i_4] [i_6 - 1]) ? (arr_11 [i_2] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))))))) : (((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)24883)))) : (((/* implicit */int) arr_5 [i_2] [(signed char)16]))))));
                        }
                    } 
                } 
                arr_29 [i_2] [0LL] [10ULL] [8LL] &= arr_3 [i_2];
                arr_30 [i_3] [i_3] [i_4] = (+(max((arr_23 [i_3]), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_2] [i_3] [i_3] [i_2] [8LL] [10U]))))))));
            }
            for (int i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                var_24 = arr_8 [i_2];
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_40 [i_2] [i_2] [i_3] [i_9 - 1] [i_10] = ((/* implicit */short) (+(140728898420736ULL)));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_18 [i_2] [i_3]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_43 [i_2] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_32 [i_9 - 1])) ^ (arr_42 [i_2 - 1] [i_3] [i_9 + 4]))));
                        arr_44 [15ULL] [6LL] [i_3] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_22 [i_2] [i_2] [i_2] [15ULL])) : (arr_38 [i_2] [i_2] [i_11] [i_9] [i_9] [i_2 - 3] [i_3]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 7226488430029718233ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4122))) : (-1LL))))));
                    }
                    arr_45 [11ULL] [11ULL] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((int) arr_22 [i_8] [i_8] [i_2] [i_2]));
                    arr_46 [i_3] [i_3] [i_3] [(short)4] [i_3] [i_8] = (+((+(((/* implicit */int) var_4)))));
                    arr_47 [9] [i_3] [(short)7] [4ULL] = (+(min((((9884599480155292033ULL) ^ (((/* implicit */unsigned long long int) arr_34 [i_2] [7ULL] [i_8] [i_3])))), (((/* implicit */unsigned long long int) arr_16 [i_2 - 2] [i_8 - 1] [i_9 + 2] [i_9 + 4])))));
                }
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 3; i_13 < 13; i_13 += 1) 
            {
                var_26 -= ((/* implicit */signed char) arr_33 [i_2] [(short)13] [i_13]);
                var_27 = ((/* implicit */long long int) ((signed char) arr_4 [i_12] [i_12]));
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 13; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)-16374))));
                            var_29 = ((/* implicit */int) ((long long int) ((long long int) ((unsigned long long int) arr_51 [i_12] [i_12] [i_13] [i_14]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) (short)-15083);
            }
            var_31 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19)) + (2147483647))) << (((((arr_9 [i_2 - 1] [i_2 - 1]) ? (max((arr_42 [i_2] [i_12] [i_2]), (arr_10 [7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16358))))) - (16264731883032483088ULL)))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 - 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2] [i_2 - 4] [i_16] [(short)6] [i_2 - 4] [i_2])) ? (((/* implicit */int) (short)24883)) : (-1)))))))));
            var_33 = ((((/* implicit */_Bool) arr_58 [i_2])) ? (-5246197321365768430LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24883))));
        }
        for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            var_34 = ((((((/* implicit */_Bool) ((short) arr_5 [8LL] [i_17]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9ULL]))) : (18446744073709551608ULL)))))) && (((/* implicit */_Bool) arr_34 [i_2 - 1] [i_2 - 1] [i_2] [i_17])));
            var_35 = ((/* implicit */long long int) 4294967284U);
        }
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_1 [6])), (18446744073709551615ULL))), (var_7)))) ? ((+(((/* implicit */int) ((_Bool) arr_3 [i_2]))))) : (((((/* implicit */_Bool) ((short) var_7))) ? ((+(((/* implicit */int) arr_21 [(short)0] [(short)0] [i_2] [(short)2])))) : (arr_32 [(short)13])))));
    }
}
