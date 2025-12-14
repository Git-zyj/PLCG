/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171145
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) 295484027)) != (var_10))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 295484027)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))), (min((((((/* implicit */unsigned int) arr_5 [i_2])) ^ (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned int) ((unsigned char) var_3))))));
                    var_15 = ((signed char) var_6);
                    arr_10 [i_0] [i_0] = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) 295484052)), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_16 = ((/* implicit */short) ((unsigned char) 0U));
        arr_14 [i_3] = ((/* implicit */short) -295484032);
    }
    var_17 = (!(((/* implicit */_Bool) max((max((var_5), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) 295484052)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10))))))));
}
