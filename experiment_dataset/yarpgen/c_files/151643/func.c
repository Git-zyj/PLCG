/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151643
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
    var_20 = var_7;
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_13 [13ULL] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) (~(arr_0 [i_3])));
                        var_22 = ((/* implicit */int) ((unsigned long long int) arr_6 [i_2] [i_3]));
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_3]))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
    }
}
