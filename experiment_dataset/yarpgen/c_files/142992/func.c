/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142992
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
    var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_3] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 2] [i_1] [i_0]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2042315403U))))));
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_1] [i_1])))))));
                        arr_16 [i_0] [i_0] [(short)6] [i_0] [i_0] [i_0] = (!((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 2] [i_0])))));
                    }
                } 
            } 
        } 
        var_12 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))));
    }
    var_13 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_10))))));
    var_14 = ((/* implicit */signed char) min((var_14), (var_7)));
}
