/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114263
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((var_3) >> (((var_1) - (3570858550084017716ULL))))))));
    var_19 = (-(var_4));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_5 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_1 + 1]))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) (signed char)63);
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (~(arr_6 [4U] [4U])));
        }
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((var_3), (((/* implicit */long long int) var_0))))))))))));
        arr_9 [i_0] = max((((((arr_6 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) - (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) 3721177961U)));
    }
}
