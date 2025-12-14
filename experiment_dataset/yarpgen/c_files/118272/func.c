/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118272
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 3125976318U);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) 8U);
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    var_11 = ((/* implicit */unsigned int) var_8);
    var_12 = ((/* implicit */_Bool) ((short) var_5));
    var_13 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_7))))) & (min((((/* implicit */long long int) 4294967287U)), (var_2)))))) && (((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}
