/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107276
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
    var_18 = ((/* implicit */unsigned short) ((_Bool) 1613744056U));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((signed char) arr_12 [i_1] [i_2] [i_4]))) : ((-(((/* implicit */int) var_5))))))));
                                var_20 = -1879151995;
                                arr_16 [i_2] [i_2] [i_0 - 2] = ((/* implicit */unsigned short) (+(807947250)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((int) arr_0 [(_Bool)1] [i_0])))));
    }
}
