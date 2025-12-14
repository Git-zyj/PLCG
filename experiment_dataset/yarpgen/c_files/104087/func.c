/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104087
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
    var_14 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1] [i_1]))) && (((/* implicit */_Bool) ((14458347229388463754ULL) * (arr_2 [i_0]))))))), (((((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)121), (((/* implicit */signed char) var_4)))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 2]))))))));
                arr_7 [i_0 + 2] [i_0 + 2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((arr_2 [i_1 - 2]) - (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2]))))))));
            }
        } 
    } 
    var_15 = min((((/* implicit */short) var_2)), (var_5));
}
