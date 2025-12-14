/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166988
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 7; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) var_14);
                        arr_12 [i_0] [i_2 - 2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (min((((/* implicit */unsigned int) (_Bool)1)), (134036362U)))));
                        var_18 = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) var_0)), (var_7))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) var_7);
    }
    var_20 = ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13)))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << ((-(((/* implicit */int) (signed char)-14))))));
    var_23 = ((/* implicit */signed char) 9223372036854775807LL);
}
