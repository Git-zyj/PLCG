/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113569
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
    var_15 = ((/* implicit */short) max(((~(((int) var_14)))), (max((((/* implicit */int) ((var_14) <= (((/* implicit */long long int) 2147483647))))), (((((/* implicit */int) (short)-32743)) % (((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [6] = ((/* implicit */unsigned int) ((-1) + (max((((var_9) >> (((((/* implicit */int) (short)32742)) - (32732))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(short)15] [i_0]) : (((/* implicit */int) (short)-10897))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4 - 2] [(short)21] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_2]), (arr_1 [i_0 + 1] [i_0 + 3])))) ? (min((arr_1 [i_0 + 3] [i_0 - 2]), (arr_1 [i_2] [i_3]))) : (((int) arr_1 [i_0 + 3] [i_0 - 1]))));
                                var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */unsigned int) arr_13 [i_2] [i_1] [i_2] [i_1] [(short)12]))))) && (((/* implicit */_Bool) (short)32767)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */int) ((max((arr_3 [i_1] [i_2]), (((/* implicit */long long int) arr_13 [i_1] [i_2] [i_1] [i_0] [i_0])))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32743)) && (((/* implicit */_Bool) 127)))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), ((~(min((arr_5 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned int) ((short) arr_0 [i_6])))))))));
                                var_19 -= ((/* implicit */short) max((arr_7 [i_1] [i_0 + 3] [i_0] [i_0]), (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_1] [i_0] [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((max((max((-8711527136451847762LL), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_7] [i_0] [16] [i_8] [i_7])), (arr_25 [8] [8])))))) ^ (arr_0 [i_0 - 1]))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1430146279)) ? (-5989267661268076784LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6))))), (((/* implicit */long long int) arr_16 [i_0] [i_7] [i_7] [i_7]))))) || (((/* implicit */_Bool) var_8)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_11 = 2; i_11 < 19; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    arr_36 [i_0] [i_0] = ((/* implicit */int) -8711527136451847760LL);
                    arr_37 [i_12] [i_10] [i_10] [i_0 + 2] = ((/* implicit */short) ((((((/* implicit */long long int) arr_35 [i_12] [i_0] [i_0])) / (var_14))) ^ (((long long int) arr_13 [i_0 + 2] [i_10] [i_11 - 1] [i_0 + 2] [i_0 + 2]))));
                }
                var_22 = ((/* implicit */short) max((var_22), (((short) arr_12 [i_0] [20] [20] [i_11]))));
            }
            for (int i_13 = 3; i_13 < 21; i_13 += 4) /* same iter space */
            {
                arr_40 [i_13] [i_10] [i_0 + 2] = ((/* implicit */long long int) ((((((arr_5 [i_0] [i_0]) % (((/* implicit */unsigned int) var_4)))) % (((/* implicit */unsigned int) ((int) 3085412629U))))) % (((((/* implicit */_Bool) max((arr_11 [(short)1] [(short)1] [(short)1] [0U] [i_0]), (((/* implicit */long long int) -377306414))))) ? (((/* implicit */unsigned int) ((arr_19 [i_0] [i_0] [i_0 + 2] [(short)15] [i_0]) & (1208304978)))) : (arr_25 [20U] [(short)4])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_23 -= ((short) ((short) arr_11 [i_14] [i_13] [i_0] [i_0] [i_0]));
                    arr_45 [i_14] [i_13] [10] [i_10] [i_0] [i_0] = ((short) (~(arr_10 [i_14] [i_10] [i_13] [7U] [i_14])));
                    arr_46 [i_14] [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) var_7);
                }
                var_24 = ((int) arr_15 [i_13] [i_13 - 3] [(short)16] [i_0 + 3] [i_0 + 1] [i_0 + 3]);
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            arr_52 [i_15] = ((/* implicit */unsigned int) min((((arr_7 [i_0 + 1] [(short)11] [i_13 - 2] [(short)11]) / (arr_7 [i_0 + 2] [i_10] [i_13 + 1] [i_10]))), (((int) max((var_9), (var_4))))));
                            arr_53 [i_0] [16] [i_13] [i_13] [i_13] [i_10] = ((/* implicit */short) ((unsigned int) (~(((long long int) arr_3 [1] [i_10])))));
                            var_25 = ((/* implicit */short) ((max((arr_21 [i_13 - 2] [i_0 + 1] [i_0 + 2]), (arr_21 [i_13 + 1] [i_0 - 1] [i_0 + 2]))) <= (((((((/* implicit */_Bool) 573592382U)) || (((/* implicit */_Bool) (short)2)))) ? (((3387365422U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)2941))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_13 - 3] [i_0] [i_0])) ? (arr_34 [i_16] [i_10] [i_13] [i_15] [i_0 + 2]) : (((/* implicit */int) arr_6 [i_13] [i_13] [i_13])))))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 3; i_17 < 21; i_17 += 4) /* same iter space */
            {
                arr_56 [i_17] [14] = ((/* implicit */unsigned int) min((1340738909), (((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned int) ((long long int) max((((720874835U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)1739))))), (720874851U))));
                            arr_61 [i_17] [i_19 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_19] [i_10] [i_17 - 2] [i_17] [7U] [(short)15] [i_18]))) ? (max((((/* implicit */unsigned int) arr_43 [i_0 + 1] [i_10] [i_17 - 3] [11LL])), (arr_17 [3] [3] [i_17 - 2] [i_17] [i_19] [i_19 - 1] [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_43 [i_0] [i_10] [i_17 + 1] [i_18]), (arr_43 [i_0] [i_10] [i_17 + 1] [i_18])))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)1747)) < (6))))) : (4294967295U))), (((/* implicit */unsigned int) ((-6679039567693186510LL) <= (((/* implicit */long long int) arr_24 [i_0] [i_10] [0])))))));
                var_28 ^= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 377306423)) || (((/* implicit */_Bool) arr_25 [12] [12]))))), (((arr_25 [12] [12]) ^ (arr_41 [i_17 - 1] [i_0 - 1] [i_0]))));
            }
            /* vectorizable */
            for (int i_20 = 3; i_20 < 21; i_20 += 4) /* same iter space */
            {
                arr_66 [i_10] [i_20] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((short) arr_18 [10LL] [i_20 + 1] [i_20 + 1] [10LL])))));
                var_30 = ((/* implicit */int) min((var_30), ((~(arr_7 [i_20] [i_20 - 3] [17LL] [i_20 - 2])))));
            }
            var_31 = ((/* implicit */unsigned int) min((var_31), (((unsigned int) max((arr_43 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 2]), (arr_43 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 2]))))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_57 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]) < (arr_57 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))))))));
            arr_67 [i_0] [1LL] [i_10] = ((long long int) ((unsigned int) arr_3 [i_0 + 3] [i_0 - 1]));
        }
        /* vectorizable */
        for (short i_21 = 3; i_21 < 19; i_21 += 4) 
        {
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((arr_10 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_21 - 3] [i_21]) < (arr_10 [2U] [21U] [i_0 - 2] [i_0] [i_0 + 3]))))));
            var_34 = ((/* implicit */short) ((int) var_5));
            var_35 ^= ((/* implicit */unsigned int) arr_68 [i_0 + 1] [i_0] [i_0 + 1]);
        }
    }
    var_36 = ((/* implicit */int) min((var_36), (max((((/* implicit */int) var_10)), (124)))));
    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (720874835U)))))), (var_14))))));
    var_38 ^= ((/* implicit */int) var_10);
}
