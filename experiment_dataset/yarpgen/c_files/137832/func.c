/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137832
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)17] [i_2 - 1])) | (((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_2 - 1])) - (10172))))))))));
                    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((0) * (((/* implicit */int) var_14))))) == (min((arr_5 [i_0]), (var_5))))))));
                    var_20 -= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2]))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) -3))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])))));
    }
}
