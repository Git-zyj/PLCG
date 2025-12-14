/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12485
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) arr_5 [i_3] [i_0]))));
                        arr_8 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3]);
                    }
                    var_12 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)13)) + (((/* implicit */int) arr_6 [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_0] [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (unsigned char)238))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) / ((((-(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_4))))));
    var_14 = ((/* implicit */short) var_3);
}
