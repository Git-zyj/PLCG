/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148232
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
    var_20 = (~((-(16ULL))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 = (-(min((arr_6 [i_0] [i_1] [i_1] [3ULL]), (var_0))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (var_5)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3])))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_3] [i_3] [i_3] [i_3])))) || (((/* implicit */_Bool) arr_9 [i_3]))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 3) 
    {
        arr_17 [i_4] = (~(((arr_13 [i_4] [23ULL]) ^ (var_2))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_24 = ((unsigned long long int) (+(var_11)));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), ((~(arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4])))));
                    var_26 = arr_23 [i_4] [i_4] [i_4] [i_4];
                    var_27 = arr_22 [13ULL] [i_5];
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) min((var_28), ((-(12762162033647160313ULL)))));
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))))));
}
