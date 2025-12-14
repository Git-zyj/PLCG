/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164336
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
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (arr_4 [i_0]) : (4294967295U)))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 3586912691U)) : (arr_2 [i_0])))) || (((/* implicit */_Bool) arr_4 [5LL])))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) min((4294967295U), (arr_0 [i_1])))) : (arr_2 [i_0 + 4]))))))));
                    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_6 [i_0] [3ULL] [i_0 + 1] [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 8502583528985268998ULL)))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 26489619U))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (arr_2 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) var_3);
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (2147483647U)))) ? (((6268593504813206104ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) -2053316633)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_7);
}
