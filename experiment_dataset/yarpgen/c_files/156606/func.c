/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156606
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
            arr_5 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) var_2);
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)255);
        }
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
    }
}
