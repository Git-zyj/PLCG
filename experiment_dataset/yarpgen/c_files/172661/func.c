/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172661
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [(_Bool)1]))))));
        arr_3 [i_0] = ((/* implicit */int) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) (~(-7868119858301904434LL)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_12 |= ((/* implicit */unsigned char) (unsigned short)7291);
    var_13 = ((/* implicit */unsigned char) (((+(var_0))) != (((/* implicit */unsigned long long int) var_10))));
    var_14 = ((((/* implicit */_Bool) (-(var_3)))) ? (var_0) : (((/* implicit */unsigned long long int) -4858513917625352900LL)));
}
