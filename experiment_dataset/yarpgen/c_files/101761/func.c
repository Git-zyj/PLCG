/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101761
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)16)), ((~(((/* implicit */int) var_11)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [(unsigned short)4] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((short) 8745062368153837748ULL));
                        arr_16 [i_1] [i_2] [i_3] [i_1] = ((arr_4 [i_1]) != (var_14));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) + (64))) - (7)))));
    }
}
