/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142857
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_0 [(_Bool)1])), (arr_3 [i_1 + 2] [i_0] [i_1]))), (min((((/* implicit */unsigned int) var_12)), (var_11)))))) : (((arr_1 [i_1 + 3]) ? (((/* implicit */long long int) min((4074969008U), (((/* implicit */unsigned int) -1233421613))))) : (((((/* implicit */_Bool) -158475524565744192LL)) ? (7907812068475653099LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_1 - 1]) ? (((/* implicit */int) arr_0 [i_1 + 3])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) ? (16480371363799359060ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2] [i_1 + 3]))));
                arr_4 [i_1] = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) arr_1 [i_1 + 1])), (var_0))));
            }
        } 
    } 
    var_18 *= max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24150))) / (7685337218795891760LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(4202609103U))))))));
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) var_2)) ^ (15141184617334329166ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
