/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116857
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((min((arr_1 [i_0]), (min((arr_2 [8ULL]), (arr_3 [i_0] [i_0]))))) * (((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_0 [i_1])))) ? (arr_3 [i_0 + 2] [i_1 - 1]) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (arr_0 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_17 &= (+(0ULL));
                            arr_11 [i_0 - 2] [i_1] [i_1] [i_1] [i_1] = arr_3 [i_2] [i_2];
                            arr_12 [i_1] [i_2] [i_3] = ((max((((unsigned long long int) var_0)), (arr_9 [i_2 + 2]))) % (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (arr_4 [i_3 - 4] [i_3 - 4]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0 - 2] [i_1] = min((max((((/* implicit */unsigned long long int) ((var_12) > (var_1)))), (((((/* implicit */_Bool) var_12)) ? (3043775595656866318ULL) : (var_4))))), (max((9005984821717894492ULL), (16160106011066170823ULL))));
                    var_18 += (((-(max((8589934560ULL), (var_14))))) ^ (min((((unsigned long long int) arr_7 [i_0] [i_0 + 2] [i_0] [i_4] [i_4 + 1])), (((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0] [i_0 - 3])) ? (arr_9 [i_0]) : (var_5))))));
                }
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (((-(22ULL))) % (var_4)))) ? (min((min((arr_5 [i_1] [i_1]), (var_4))), (max((var_9), (arr_5 [i_1] [i_1]))))) : ((+(min((var_10), (arr_1 [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        var_19 *= ((arr_7 [i_6] [i_6] [i_1] [i_1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((9073223577927641547ULL) > (7226705189412261427ULL))))));
                        arr_23 [i_0] [i_1] [i_5] [i_6] = ((arr_17 [i_0] [i_1] [i_5] [i_6 + 1]) ^ (((((/* implicit */_Bool) var_9)) ? (1168522619991878138ULL) : (arr_9 [i_0]))));
                        var_20 = ((unsigned long long int) ((((/* implicit */_Bool) 7226705189412261438ULL)) ? (var_14) : (arr_14 [i_6 + 2])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        var_21 = ((arr_3 [i_1 - 2] [i_0 - 3]) % (arr_17 [i_1 - 2] [i_1] [i_5 - 1] [i_7 + 1]));
                        var_22 = ((/* implicit */unsigned long long int) ((((arr_13 [i_1] [i_0] [i_7] [i_7 - 4]) + (15003922746888402714ULL))) > (var_0)));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) 16033754174573867924ULL))));
                    }
                }
                var_24 = min((((((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) % (var_9))) + (((((/* implicit */_Bool) arr_13 [i_1] [i_0 + 2] [i_0] [i_1])) ? (var_14) : (18446744073709551605ULL))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 - 1] [i_0 - 1] [i_1])) ? (arr_18 [i_0] [i_1] [i_0] [i_1]) : ((-(arr_10 [i_0 + 2] [i_1] [i_0 + 1] [i_1 - 1] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_25 *= ((/* implicit */unsigned long long int) ((var_8) == (arr_33 [i_8] [i_9] [i_10])));
                    var_26 ^= ((unsigned long long int) 18446744073709551594ULL);
                    arr_35 [i_8 - 2] [i_9 - 4] = max((((((14318920774066409479ULL) + (var_11))) ^ (var_0))), (min((arr_32 [i_9 - 4] [i_8 - 2] [i_8]), (10006617581908115068ULL))));
                }
            } 
        } 
        arr_36 [i_8] = min((var_3), (min((14318920774066409479ULL), (((unsigned long long int) var_15)))));
        var_27 = min((13ULL), (1990241059249169363ULL));
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16371163672749477732ULL)) ? (var_7) : (var_14)))) ? ((-((-(var_3))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_34 [i_8] [i_8] [i_8 - 2]) : (var_10))) : (arr_28 [i_8]))));
    }
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((((/* implicit */_Bool) 0ULL)) ? (((4793217724456466143ULL) + (var_8))) : (var_4))), (((unsigned long long int) var_14))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((((unsigned long long int) arr_34 [i_11] [i_11] [i_11])) ^ (7263543243457172259ULL))) ^ (((unsigned long long int) 18446744073709551615ULL))))));
        var_31 = ((max((((((/* implicit */_Bool) 39ULL)) ? (1073741823ULL) : (8440126491801436547ULL))), (((((/* implicit */_Bool) arr_39 [i_11] [i_11 - 1])) ? (10254331951880643675ULL) : (var_13))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (18174740107788766491ULL))))));
    }
    for (unsigned long long int i_12 = 4; i_12 < 11; i_12 += 2) /* same iter space */
    {
        var_32 = arr_38 [i_12];
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (arr_31 [i_12] [i_12])));
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((unsigned long long int) (((-(8202333842656099641ULL))) ^ (var_1))))));
        var_35 += max((((/* implicit */unsigned long long int) ((7465651226100668200ULL) == (18446726481523507200ULL)))), (arr_27 [i_12 - 2] [i_12 + 1]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
        {
            var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((16453328337387672517ULL) > (11220038884297290188ULL))))) == (var_13)));
            arr_44 [i_13 - 1] [i_12] = ((unsigned long long int) arr_31 [i_12] [i_13 - 1]);
            var_37 = ((/* implicit */unsigned long long int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((18342965344636068782ULL) > (12925348102683985689ULL)))))));
            var_38 = ((arr_34 [i_12 - 3] [i_12 + 1] [i_12 + 1]) / (arr_32 [i_12 - 2] [i_12 - 4] [i_12 + 1]));
        }
    }
    var_39 = ((0ULL) + (9757039873666115773ULL));
}
