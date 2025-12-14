/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130043
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_3 [i_0]))));
                arr_4 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [5ULL]) : (arr_3 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)-85)) : ((-(((/* implicit */int) arr_0 [i_0]))))))) : ((~(min((arr_2 [(signed char)20] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] = ((/* implicit */unsigned int) 6603177354341196003ULL);
                            var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((-(var_4))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-85))))), (var_6))))));
}
