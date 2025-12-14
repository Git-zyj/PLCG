/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1327
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
    var_13 &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)32760))));
    var_14 = ((/* implicit */unsigned long long int) (signed char)-63);
    var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (839586434179509954ULL)))) >= (((/* implicit */int) (signed char)-109))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) * (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32760))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(min((0), (((/* implicit */int) ((((/* implicit */long long int) 1499136178U)) == (-7583385285053136146LL)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_1 [i_1]) : (var_7))), ((+(((/* implicit */int) (signed char)108))))))), (18446744073709551615ULL)));
                arr_5 [10LL] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) < (arr_1 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)16])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) (signed char)-34))))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (arr_2 [i_0] [i_1])))));
            }
        } 
    } 
}
