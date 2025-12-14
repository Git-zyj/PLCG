/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13858
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) - (arr_4 [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) arr_9 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_1] [i_2] [i_1]) : (arr_3 [i_3] [19] [i_2]))))));
                            arr_10 [i_0] [i_0] [13] = arr_9 [i_3];
                        }
                    } 
                } 
                var_18 = max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) != (2126955582384626068ULL)))), (((int) var_4)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) 1336603066295197291ULL)) ? (1311162248) : (76031948));
                            var_20 = ((/* implicit */int) 10803344255521678786ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_28 [7] = ((/* implicit */unsigned long long int) var_11);
                                var_21 = ((/* implicit */unsigned long long int) ((int) arr_18 [i_6 - 1]));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (17110141007414354331ULL) : (((/* implicit */unsigned long long int) arr_19 [i_6 + 3]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) 17110141007414354324ULL);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 1463073586)) ? (min((arr_33 [i_11 - 1] [i_11 + 1]), (((/* implicit */unsigned long long int) arr_29 [i_11 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [15] [i_14])) && (((/* implicit */_Bool) var_6))))))));
                            var_25 = ((((/* implicit */_Bool) -1322162290)) ? (((int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 17110141007414354329ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (var_12)))));
                            var_26 = ((var_9) + (arr_34 [i_11 + 1] [i_13]));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        for (int i_17 = 1; i_17 < 21; i_17 += 4) 
                        {
                            {
                                var_27 |= -2147483647;
                                arr_48 [i_15] [14] [i_15] [i_15] [12] [i_17] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((1125322329) ^ (var_1)))), (((((/* implicit */_Bool) ((int) (-2147483647 - 1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 391033323)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) 4129701232566681337ULL)) ? (var_13) : (((/* implicit */unsigned long long int) var_7))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 2; i_18 < 24; i_18 += 4) 
                {
                    for (int i_19 = 1; i_19 < 23; i_19 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) max((var_28), (var_4)));
                            arr_55 [i_11] [i_12] [i_12] [14] |= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -2147483640)) : (max((((/* implicit */unsigned long long int) var_1)), (var_6))))));
                            arr_56 [i_11] [1] [i_11] [i_19 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 751820568)) ? (((((var_3) < (1391268985))) ? (arr_41 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_18 - 1]) : (((/* implicit */unsigned long long int) ((int) var_11))))) : (((/* implicit */unsigned long long int) ((int) ((int) var_6))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_20 = 1; i_20 < 23; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        for (int i_22 = 1; i_22 < 22; i_22 += 4) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (var_13)))) ? (((unsigned long long int) -305696340)) : (((3089631147833381645ULL) % (17110141007414354325ULL)))))) ? (((/* implicit */unsigned long long int) (-(arr_31 [i_11 + 1] [i_22 - 1])))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (0ULL))) : ((+(1336603066295197309ULL))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_0)) > (var_10))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 98512071)) : (arr_62 [i_11] [i_12] [i_20 - 1] [5] [i_22]))))) : ((+(11060988330911057339ULL)))));
                                arr_63 [i_11 - 1] [i_11 - 1] [i_20] [i_21] [i_22 + 3] = var_2;
                                var_31 &= ((var_9) - (((((/* implicit */_Bool) var_0)) ? (arr_57 [i_11 + 1] [i_22 + 2]) : (arr_57 [i_11 + 1] [i_22 + 2]))));
                                var_32 = ((/* implicit */int) max((var_32), (((var_0) - (((int) -989906737))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_23 = 0; i_23 < 25; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        for (unsigned long long int i_25 = 2; i_25 < 24; i_25 += 4) 
                        {
                            {
                                arr_72 [23] [i_12] [i_23] [i_23] [i_12] [i_25] [i_25 - 2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_51 [i_11 + 1] [i_12] [23] [i_24]) : (arr_30 [i_25]))) != (((((/* implicit */unsigned long long int) var_0)) ^ (var_6)))));
                                var_33 -= ((/* implicit */unsigned long long int) 2068671626);
                                arr_73 [i_25] [i_23] [i_24] [i_23] [i_12] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_54 [8ULL] [4ULL] [22]) : (var_2)))) ? (arr_40 [i_11] [i_24]) : (1336603066295197292ULL))) : (12144825193376550036ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((var_7) ^ (var_2)));
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 17; i_26 += 4) 
    {
        for (int i_27 = 0; i_27 < 17; i_27 += 4) 
        {
            {
                arr_81 [i_26] [i_27] [12] = min((((int) var_13)), (((((/* implicit */_Bool) -340855374)) ? (-1054709337) : ((-2147483647 - 1)))));
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-1452284535) >= (695013141)))))))));
            }
        } 
    } 
}
