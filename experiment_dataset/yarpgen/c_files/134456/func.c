/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134456
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
    var_15 = ((unsigned long long int) max((((unsigned long long int) 1127851707740937299ULL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0 + 1] [i_1] [i_0 + 1] [9ULL] [i_0 + 1] [i_4] = ((unsigned long long int) 1ULL);
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_1] [i_3 + 3]) % (17318892365968614316ULL)))) ? (var_9) : (min((var_4), (arr_1 [9ULL])))))) ? (arr_8 [3ULL] [3ULL] [i_3 - 2]) : ((~(var_9))));
                            }
                        } 
                    } 
                } 
                var_17 = (+(max((((((/* implicit */_Bool) 2ULL)) ? (var_12) : (var_12))), (arr_11 [i_0 - 1] [i_1] [i_1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                arr_27 [i_0] [i_0] [i_5 - 1] [10ULL] [4ULL] = ((unsigned long long int) 7892348970469656813ULL);
                                arr_28 [i_1] [i_6] [i_7] = ((13147375989853310662ULL) - (17318892365968614318ULL));
                                var_18 = 5299368083856240954ULL;
                                var_19 = ((((/* implicit */_Bool) var_4)) ? (arr_26 [i_0 + 1] [i_5 + 1] [i_5]) : (2ULL));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                arr_31 [i_0] [10ULL] [i_5] [i_8] [5ULL] [5ULL] = ((unsigned long long int) ((7715073368042241466ULL) & (10554395103239894802ULL)));
                                var_20 = arr_0 [i_0 + 1] [i_1];
                            }
                            for (unsigned long long int i_9 = 3; i_9 < 7; i_9 += 1) 
                            {
                                var_21 = ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((var_14) & (arr_30 [i_0 + 1] [3ULL] [i_5 - 1] [2ULL] [i_6] [i_6] [i_9]))) : (min((var_4), (arr_15 [6ULL] [i_1] [i_5] [i_1] [3ULL] [i_5 - 1])))));
                                arr_34 [i_0 + 1] [i_1] [6ULL] [5ULL] = (-(max(((-(var_0))), (max((arr_26 [i_5 + 2] [i_9] [i_5]), (5299368083856240941ULL))))));
                            }
                            arr_35 [i_0] [i_0] [i_5] [i_0] [7ULL] = max((((unsigned long long int) ((unsigned long long int) 12997816667354207279ULL))), (arr_0 [4ULL] [i_5 - 1]));
                            arr_36 [i_0] [0ULL] [i_1] [i_1] = var_12;
                            var_22 = max((min((8367586675975200620ULL), (arr_2 [i_0 - 1] [i_0] [i_0 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (5299368083856240953ULL) : (arr_7 [i_0] [i_1] [i_0] [7ULL])))) ? (max((arr_3 [i_0] [i_0] [i_6]), (arr_24 [i_0] [8ULL] [i_5] [i_6] [10ULL] [6ULL]))) : (var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
}
