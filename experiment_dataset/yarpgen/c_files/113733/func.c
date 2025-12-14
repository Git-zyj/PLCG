/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113733
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
    var_13 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_3)), (var_12))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    var_14 = ((((unsigned int) ((long long int) var_2))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7))))))));
    var_15 = ((/* implicit */short) (!(((_Bool) ((var_2) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) | (((((/* implicit */int) (signed char)0)) ^ (var_0))))) != (((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))) ^ (((/* implicit */int) ((2147475456U) != (3713081645U))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                var_17 ^= var_1;
            }
        } 
    } 
}
