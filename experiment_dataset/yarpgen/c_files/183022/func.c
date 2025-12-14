/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183022
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
    var_18 += ((/* implicit */long long int) max((((var_11) * ((-(var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) max((var_0), (var_8)))))))));
    var_19 += ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (var_6))) || (((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) max(((_Bool)1), (var_0))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (~(((/* implicit */int) var_6))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) arr_1 [(unsigned char)10] [i_1])))))));
                    arr_11 [22LL] [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 2] [i_1])) / (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1]))))) : (var_10)));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned char)16] [i_0]);
        var_21 -= ((/* implicit */short) ((var_16) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= ((~(((/* implicit */int) arr_9 [7LL]))))))))));
        var_22 = ((/* implicit */signed char) arr_9 [i_0]);
    }
    var_23 = (!((_Bool)0));
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
}
