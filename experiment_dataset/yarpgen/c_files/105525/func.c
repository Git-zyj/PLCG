/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105525
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
    var_14 = ((0ULL) - (0ULL));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((unsigned long long int) ((unsigned long long int) arr_1 [i_0] [i_0]));
        var_15 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_0 [2ULL] [i_0]) & (arr_0 [i_0] [i_0])))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551601ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) == (max((min((arr_1 [i_0] [i_0]), (arr_1 [5ULL] [i_0]))), (18333477945941769410ULL)))));
        var_16 += 18446744073709551614ULL;
        arr_3 [i_0] = ((((/* implicit */_Bool) max((18446744073709551615ULL), (arr_1 [i_0] [i_0])))) ? (min((arr_0 [i_0] [i_0]), (((18446744073709551615ULL) << (((18192991748316239530ULL) - (18192991748316239526ULL))))))) : (((((/* implicit */_Bool) 13552048583649788116ULL)) ? (13579998602399300094ULL) : (18446744073709551615ULL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_8 [i_1] = (~(var_2));
            arr_9 [i_1] [i_1] [i_2] = (+(576460717943685120ULL));
        }
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            arr_13 [i_3] = 18446744073709551586ULL;
            arr_14 [i_3] [i_3] [i_3] = 13194986877910274534ULL;
            arr_15 [i_3] [i_3] = (+(((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? (arr_10 [i_3 + 1]) : (arr_10 [i_3 - 1]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_18 [18ULL] [i_4] &= 0ULL;
            arr_19 [i_1] [i_4] = (~(((18446744073709551615ULL) + (18446744073709551602ULL))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [0ULL] = 13194986877910274534ULL;
                        arr_26 [i_6] [i_4] [16ULL] [i_1] [i_4] [i_1] = 10113266063288571856ULL;
                        var_17 += ((arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_4]) | (((arr_22 [i_6 - 1] [i_4] [i_1]) / (arr_11 [i_6 + 1] [18ULL]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_30 [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? ((-(arr_17 [i_1]))) : (11ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((((/* implicit */_Bool) 16ULL)) ? (15639146291479250046ULL) : (0ULL)))))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) (~((+(18446744073709551615ULL)))))) ? (13194986877910274534ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((0ULL) % (arr_4 [i_7]))) < (((((/* implicit */_Bool) 3ULL)) ? (10220503414696103070ULL) : (21ULL)))))))))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), ((-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) > (18446744073709551615ULL))))) : (arr_11 [0ULL] [0ULL])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_20 = 12998328136566131966ULL;
            var_21 = 6426082171629280199ULL;
        }
        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((var_8) % (8796093022207ULL))) == (var_5)));
            var_23 += arr_4 [i_8];
        }
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_24 = ((var_1) ^ (18446744073709551615ULL));
                arr_42 [i_12] [2ULL] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((11549128199188609050ULL) >= (var_0))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        var_25 = arr_44 [i_8] [i_8] [i_8];
                        var_26 = ((((/* implicit */_Bool) arr_37 [i_8] [i_11])) ? (var_11) : (((((/* implicit */_Bool) var_13)) ? (arr_17 [i_13]) : (var_1))));
                        var_27 += ((arr_47 [i_14] [i_13] [10ULL] [10ULL] [i_11] [4ULL]) | (arr_47 [i_14] [12ULL] [2ULL] [2ULL] [i_8] [i_8]));
                        var_28 = (-(arr_34 [i_11] [i_8]));
                        var_29 += 2950216810288600212ULL;
                    }
                    arr_48 [i_8] [i_12] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((34359738367ULL) != (17479503043785965079ULL))))) != (var_13)));
                }
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    var_30 += var_3;
                    var_31 = ((/* implicit */unsigned long long int) ((var_4) == (arr_6 [i_15 + 1])));
                    var_32 += ((((/* implicit */_Bool) arr_47 [i_15 + 2] [i_15 + 2] [12ULL] [12ULL] [i_15 - 1] [i_15 + 2])) ? (4503599627370495ULL) : (arr_47 [i_15 + 1] [i_15 + 1] [8ULL] [8ULL] [i_15 + 2] [i_15 - 1]));
                }
                for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 3) 
                {
                    var_33 += ((unsigned long long int) arr_21 [i_16 + 2] [i_12] [i_11]);
                    arr_54 [0ULL] [i_12] [0ULL] [0ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_7 [i_8] [i_11] [i_16 - 2]) > (arr_11 [i_12] [12ULL])))) >> (((/* implicit */int) ((18446744073709551614ULL) >= (4503599627370501ULL))))));
                    arr_55 [i_8] [i_12] [10ULL] [i_8] = ((arr_33 [2ULL] [i_11] [i_16 - 1]) - (10381652551157515829ULL));
                }
            }
            var_34 = ((/* implicit */unsigned long long int) ((arr_45 [i_8] [i_8] [8ULL] [i_8]) != (arr_45 [i_8] [10ULL] [10ULL] [i_8])));
        }
        arr_56 [12ULL] = (+(arr_47 [i_8] [i_8] [i_8] [4ULL] [i_8] [i_8]));
        arr_57 [i_8] [i_8] = ((((((/* implicit */_Bool) var_6)) ? (5251757195799277082ULL) : (arr_52 [i_8] [4ULL] [i_8] [3ULL]))) % (((10455896817626620325ULL) % (10455896817626620333ULL))));
        var_35 = 8226240659013448546ULL;
    }
    var_36 &= ((/* implicit */unsigned long long int) ((var_10) != (((unsigned long long int) 18446744073709551615ULL))));
}
