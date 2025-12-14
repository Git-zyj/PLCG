/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127855
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
    var_16 = ((/* implicit */int) min((var_16), (var_3)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) 176934222)) : (((((/* implicit */unsigned long long int) 0LL)) - (13993807309956782594ULL)))));
            /* LoopSeq 2 */
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) -1LL);
                arr_7 [i_1] [i_2] = ((/* implicit */int) var_15);
            }
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    var_18 -= ((/* implicit */long long int) ((int) arr_10 [i_3 - 3] [i_1 - 1] [i_3] [i_4 + 1]));
                    var_19 -= ((/* implicit */unsigned long long int) ((long long int) var_5));
                    arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_4 + 1] = ((/* implicit */long long int) 0);
                    arr_15 [i_1] = (((!(((/* implicit */_Bool) var_9)))) ? (((int) var_6)) : (((((var_10) + (2147483647))) >> (((arr_3 [7]) + (1171404539))))));
                    arr_16 [1ULL] [1ULL] [i_1] [1ULL] [i_4 - 1] = ((/* implicit */int) ((arr_9 [i_4 + 1] [i_1] [i_3 + 1]) ^ (((/* implicit */unsigned long long int) (~(-5303119669014051270LL))))));
                }
                arr_17 [i_1] [i_1 + 2] [i_1] = (+(((((arr_8 [i_0] [i_0] [i_1 - 1] [i_1]) + (2147483647))) << (((((var_6) + (944583605))) - (20))))));
                arr_18 [i_1] = var_10;
            }
        }
        var_20 = ((/* implicit */int) ((arr_6 [4] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 - 2]))));
        var_21 -= ((/* implicit */int) var_2);
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) -692617219)) ? (((/* implicit */unsigned long long int) arr_20 [i_5 + 1] [i_5 + 1])) : (arr_21 [i_5 - 1])))));
        arr_22 [i_5] = ((/* implicit */int) ((unsigned long long int) ((arr_21 [i_5 + 1]) & (arr_21 [i_5 + 1]))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned long long int) arr_21 [i_5 - 1])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        var_24 = ((((/* implicit */_Bool) arr_23 [8])) ? (arr_23 [14]) : (arr_23 [14LL]));
        var_25 -= ((/* implicit */int) 6132620928090082606LL);
        arr_25 [i_6] = (+(385252696));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */long long int) var_11)) : (arr_23 [i_6])));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) ((int) arr_24 [i_6] [i_6 + 1]));
    }
    var_27 = 13993807309956782584ULL;
}
