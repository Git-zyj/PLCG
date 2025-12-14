/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125972
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
    var_11 = ((/* implicit */signed char) var_5);
    var_12 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_10))))))));
    var_13 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 1])))), (((/* implicit */int) (signed char)114))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10798)))))) ^ (max((((/* implicit */unsigned long long int) (short)32765)), (arr_5 [(unsigned char)8] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-32763)) | (((/* implicit */int) arr_0 [i_1]))))) ? (arr_5 [i_0] [i_1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) / (3ULL))))))))));
                var_16 = ((/* implicit */_Bool) ((signed char) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned long long int) min(((short)-24529), ((short)32750)))))));
            }
        } 
    } 
}
