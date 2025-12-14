/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174353
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
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) > (((((/* implicit */_Bool) 9223372036854775801LL)) ? (((((/* implicit */_Bool) (short)-11541)) ? (((/* implicit */int) (short)11541)) : (var_5))) : (((/* implicit */int) (signed char)108))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) var_4)))));
                    arr_10 [i_0] = ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [(short)12] [i_0] [i_0] [i_0]))));
    }
    var_11 = ((/* implicit */unsigned char) var_9);
    var_12 = ((/* implicit */unsigned char) var_8);
    var_13 = ((/* implicit */signed char) (_Bool)1);
}
