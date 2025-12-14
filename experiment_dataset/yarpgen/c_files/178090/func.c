/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178090
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) (-2147483647 - 1)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */int) (unsigned char)255);
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) (~(arr_3 [i_0] [i_1] [i_1])));
                    arr_12 [i_1] [(unsigned short)2] = ((/* implicit */_Bool) arr_0 [i_2]);
                    var_14 = ((/* implicit */unsigned char) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned char)242))));
                }
            } 
        } 
    }
    var_15 &= ((/* implicit */short) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9))));
    var_16 &= min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))) - ((-(9223372036854775807LL))))), (((/* implicit */long long int) var_11)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_5)));
}
