/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126580
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
    var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-10))))) && (((/* implicit */_Bool) var_4)))))));
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = (~(arr_0 [i_0 + 1] [i_0 + 1]));
        arr_3 [i_0] = ((/* implicit */short) ((arr_1 [i_0 + 2] [i_0 + 2]) < (arr_1 [i_0 + 2] [i_0 - 1])));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1]));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_20 = ((/* implicit */_Bool) (~(arr_5 [i_0 - 1] [i_0])));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    var_21 = ((/* implicit */short) var_8);
                    var_22 = ((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2]);
                }
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = arr_8 [i_1] [i_4];
                var_24 = (~((+(((/* implicit */int) arr_8 [i_0] [i_0])))));
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_0] [5ULL] [i_0] [i_4])) ? (-6196950321560840407LL) : (2712846444790625898LL))) | (((/* implicit */long long int) arr_7 [i_0 + 2]))));
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_18 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((long long int) arr_14 [i_5] [i_4] [i_1 + 1]))));
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_21 [i_0] [i_6] [i_4] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) ((((arr_9 [i_1] [i_0 + 2] [i_4] [i_6] [i_0]) + (9223372036854775807LL))) >> (((arr_0 [i_0 + 1] [i_1 - 1]) - (10790812106306097412ULL)))))) : (((/* implicit */int) ((((((arr_9 [i_1] [i_0 + 2] [i_4] [i_6] [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((arr_0 [i_0 + 1] [i_1 - 1]) - (10790812106306097412ULL))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 1; i_7 < 7; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) ((((arr_14 [i_0] [4LL] [i_0]) >> (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) + (7286))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0] [i_4] [i_6] [i_7]) == (((/* implicit */unsigned long long int) 3992150301203255837LL))))))));
                        arr_25 [i_0] [i_1] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0 + 1] [i_7 + 3] [i_7] [i_7 + 3]);
                    }
                    for (int i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        var_28 = ((((/* implicit */_Bool) ((short) var_14))) ? (arr_0 [i_0 + 2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_27 [i_0] [i_4] [i_0] [i_0] [i_0] [i_8])) + (2147483647))) << (((((/* implicit */int) arr_22 [i_4])) - (1)))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((((arr_23 [i_6] [i_1] [i_4] [i_4] [4]) != (((/* implicit */int) (short)1)))) && (((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_0] [i_1] [i_0]))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6] [i_6]))) & (arr_9 [i_8] [(_Bool)1] [i_4] [i_1 - 1] [i_8]))))));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 7; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_9] = -6196950321560840407LL;
                        arr_32 [i_0] [i_1] [i_4] [i_6] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0 - 1] [i_6]))));
                        arr_33 [3LL] [i_6] [i_4] [i_6] [i_0] = ((/* implicit */short) (+(-4)));
                    }
                }
                for (short i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_27 [i_0] [i_0 + 2] [i_0] [i_0] [i_4] [i_0])) ? (((/* implicit */long long int) 3)) : (arr_19 [9ULL] [i_4] [i_4] [i_4] [i_4])))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_13))));
                }
            }
            for (short i_11 = 1; i_11 < 7; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((~(var_10))) | (((arr_29 [i_1] [i_12]) << (((((/* implicit */int) arr_30 [i_12] [i_12] [i_11] [2] [i_12])) - (9600))))))))));
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((arr_42 [i_12] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) == (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_12] [i_13] [8LL])) ^ (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_12]))))))))));
                        arr_45 [i_12] [i_1] [i_11] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_13] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((6196950321560840397LL) ^ (((/* implicit */long long int) 31))))) : (var_6)));
                        arr_46 [i_0] [i_0] [i_0] = ((/* implicit */short) var_14);
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 1) 
                    {
                        arr_49 [i_0] [i_1] [i_11] [i_12] [i_0] = ((/* implicit */unsigned long long int) (short)-10);
                        var_35 &= ((/* implicit */long long int) (-(((unsigned long long int) arr_15 [i_12]))));
                        arr_50 [i_12] &= ((/* implicit */long long int) ((unsigned long long int) var_14));
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    arr_53 [i_0] [i_0] [i_11 + 2] [i_11 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0])) ? (((/* implicit */unsigned long long int) -3992150301203255838LL)) : (arr_26 [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_15])) ? (((/* implicit */int) arr_44 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_44 [i_0 + 2] [i_0 + 1])))))));
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) var_1)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */int) (~(2305834213120671744ULL)));
                        var_39 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0 + 1] [i_1] [i_0] [i_0]))) & (arr_34 [i_0] [i_0]))));
                        arr_58 [2] [i_1] [i_11] [i_0] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_0] [i_16] [i_0]))));
                    }
                    for (short i_18 = 1; i_18 < 7; i_18 += 4) 
                    {
                        var_40 += arr_51 [i_0] [i_0] [i_1] [i_11] [i_16] [i_18];
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) 6196950321560840406LL)) ? (5581404552537797608ULL) : (((/* implicit */unsigned long long int) 0)))))));
                        var_42 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_0])) - (((/* implicit */int) arr_17 [i_18] [i_18 + 3] [i_1 - 1] [i_1 - 1]))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    arr_64 [(_Bool)1] [i_0] [i_11] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) arr_7 [i_0 + 1]))));
                    arr_65 [i_19] [i_0] [i_11] [i_19] = ((/* implicit */_Bool) (~(arr_36 [i_1] [i_0] [i_1 - 1])));
                }
                var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                arr_66 [i_0] = ((/* implicit */short) ((-6196950321560840398LL) == (((/* implicit */long long int) -2147483643))));
            }
            var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27))));
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                var_45 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [8ULL]);
                var_46 = ((/* implicit */unsigned long long int) min((var_46), (arr_0 [i_0 + 1] [i_0 - 1])));
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (11471005960469687386ULL)));
                var_48 = var_13;
            }
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (-(arr_29 [i_21] [i_21]))))));
                arr_71 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_1 - 1] [i_21]);
            }
        }
        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            var_50 = ((/* implicit */int) (~(2712846444790625918LL)));
            var_51 = ((/* implicit */unsigned short) ((((-3992150301203255854LL) != (((/* implicit */long long int) -4)))) ? (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) : ((+(3992150301203255827LL)))));
        }
    }
}
