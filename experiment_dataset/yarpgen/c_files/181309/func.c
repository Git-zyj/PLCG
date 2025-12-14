/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181309
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
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */short) min(((+(min((18001726206489857812ULL), (((/* implicit */unsigned long long int) (short)16870)))))), (((/* implicit */unsigned long long int) (short)-4842))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) arr_2 [(unsigned short)14] [i_0]);
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max(((+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])))))), (((/* implicit */int) arr_1 [i_0])))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)16873)), (18001726206489857793ULL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
