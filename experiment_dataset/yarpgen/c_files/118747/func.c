/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118747
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */int) ((unsigned char) var_8)))))) || (((((/* implicit */_Bool) var_11)) && (((var_5) < (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))));
                    arr_9 [i_0] [i_0] = ((/* implicit */int) ((short) arr_6 [i_0] [i_1 + 1] [i_1 + 3]));
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-66))));
                    var_16 = ((/* implicit */short) arr_5 [i_0]);
                }
            } 
        } 
    } 
}
