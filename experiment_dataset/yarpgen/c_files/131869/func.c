/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131869
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1364)), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((unsigned long long int) arr_2 [i_0])));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((((arr_3 [i_0] [i_1] [i_1]) < (var_17))) ? (max((14625002292738064360ULL), (((/* implicit */unsigned long long int) (signed char)71)))) : (((((/* implicit */_Bool) (signed char)96)) ? (0ULL) : (var_16))))), ((~((~(12634789628997801546ULL)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [(unsigned short)6] [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_0]);
                            arr_11 [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) 1023ULL)) ? (arr_8 [i_0] [i_1] [i_2] [i_1] [16ULL] [16ULL]) : (arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] [i_2]))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */_Bool) 12634789628997801546ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            {
                var_21 = 15310577240149297783ULL;
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) var_14);
                var_22 += ((/* implicit */unsigned long long int) ((_Bool) min((arr_16 [i_4]), (((/* implicit */unsigned long long int) var_10)))));
            }
        } 
    } 
}
