/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189398
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 ^= arr_4 [i_1];
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) ((unsigned int) min((4294967267U), (20U))))) ? (2114638855U) : (min((2143289344U), (arr_5 [i_0] [i_1]))));
                var_17 = 878931094U;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) 4294967280U);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_12 [i_2] [i_3] [i_4]))) && (((((/* implicit */long long int) 6U)) > (140737488355072LL))))) ? (2408490476U) : (min((2U), (36U)))));
                    var_18 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])) ? (2408490486U) : (14U)))) ? (((/* implicit */long long int) 2133745125U)) : (max((arr_8 [i_2]), (-7070034151930710915LL))))));
                    var_19 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((4294967267U), (2902024796U)))) ? (((unsigned int) 4294967294U)) : (((((/* implicit */_Bool) 4294967270U)) ? (4294967268U) : (4294967249U))))) != (arr_10 [i_2] [8LL] [i_4])));
                    var_20 = min((((long long int) -6275478047265339871LL)), (arr_8 [i_4 - 1]));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        var_21 &= ((unsigned int) ((((/* implicit */_Bool) ((arr_5 [9U] [9U]) ^ (12U)))) ? (max((((/* implicit */long long int) 38U)), (-269508201029481447LL))) : (((/* implicit */long long int) ((arr_3 [i_5 - 1] [i_5 - 1] [0LL]) >> (((48U) - (44U))))))));
        var_22 += arr_0 [i_5];
    }
}
