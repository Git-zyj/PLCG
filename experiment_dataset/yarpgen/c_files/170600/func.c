/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170600
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_1] &= ((/* implicit */short) ((((-542878200) != (-542878201))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((int) (unsigned char)149)) : (((/* implicit */int) arr_3 [6])))) : (((/* implicit */int) ((signed char) var_4)))));
                var_18 |= ((/* implicit */_Bool) arr_0 [i_0]);
                arr_5 [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_3 [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_8);
    var_20 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) max(((unsigned char)107), (((/* implicit */unsigned char) (signed char)0))))))), (((/* implicit */int) (short)-11221))));
}
