/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1059
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) max(((((-(((/* implicit */int) (signed char)-9)))) * (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_19)))))), ((+(((((/* implicit */int) arr_3 [(unsigned char)18] [i_1])) % (((/* implicit */int) var_15))))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) || (((/* implicit */_Bool) min((var_12), ((unsigned short)255)))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
}
