/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171376
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
    var_12 -= (-((~(min((((/* implicit */unsigned long long int) var_7)), (var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */short) ((long long int) min((min((var_4), (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((/* implicit */long long int) arr_0 [i_0] [i_1])))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) var_10))))))));
                var_14 = ((/* implicit */long long int) arr_5 [i_0] [5LL] [i_0]);
                var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6419))));
            }
        } 
    } 
}
