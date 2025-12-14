/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153911
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((_Bool) ((arr_3 [i_1 + 1]) ? (((/* implicit */int) min((arr_6 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0]))))) : (((arr_1 [i_0] [(signed char)12]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)0] [i_1])))))));
                var_20 = ((/* implicit */unsigned char) ((((((_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1])) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_2)))))) ^ (((/* implicit */int) ((_Bool) (unsigned char)33)))));
            }
        } 
    } 
    var_21 = var_16;
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */short) (+((+((-(((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */_Bool) ((var_13) ? ((+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)33)))))) : ((+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-65))))))));
    }
}
