/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130821
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
    var_13 = ((((unsigned int) var_4)) >> (((var_10) - (2744020977U))));
    var_14 = (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) 0U)) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) == (var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) (~(var_6)))))))));
    var_15 = max((var_9), (var_7));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((unsigned int) min((1203960994U), ((~(arr_0 [i_0 - 2])))));
        var_17 = ((/* implicit */unsigned int) ((arr_1 [i_0 + 2] [i_0 + 1]) <= (min((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        arr_2 [i_0] = var_4;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (+(max((var_4), (max((var_4), (var_3))))));
        arr_6 [17U] = ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_1] [5U])))));
        arr_7 [i_1] = var_7;
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_19 = var_11;
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                {
                    var_20 |= min((((0U) + (arr_13 [9U] [2U]))), (((((((/* implicit */_Bool) var_4)) ? (var_6) : (var_11))) * (((var_3) - (1192845495U))))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_18 [i_4] [i_3 - 2] [i_2] [i_2] &= ((unsigned int) max((arr_14 [i_3 + 1] [i_3 - 2] [i_4 - 1] [i_4 - 1]), (((arr_16 [i_4]) & (8191U)))));
                }
            } 
        } 
        arr_19 [i_2] |= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_10)) ? (var_9) : (var_3))), ((-(0U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= ((~(2096128U)))))))));
    }
    var_22 = ((var_5) + (var_0));
}
