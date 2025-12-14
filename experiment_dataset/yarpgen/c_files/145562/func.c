/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145562
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 11267256068868041202ULL)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3930549941U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2])))));
                    var_18 = ((/* implicit */_Bool) max((364417382U), (364417390U)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (arr_4 [10U] [i_3 - 1])));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_2 [i_3 - 1])), (max((((/* implicit */long long int) arr_2 [i_3 - 1])), (var_9))))))));
        arr_10 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_3 - 1])), (max((((/* implicit */unsigned long long int) (-(4169500567U)))), (arr_3 [i_3 - 1] [i_3])))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_21 = arr_1 [i_4];
        var_22 = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_4] [i_4]));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (max((((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (arr_14 [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_2 [i_5])))))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (arr_4 [(_Bool)1] [i_5])));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_8 [8LL] [i_5]))));
    }
}
