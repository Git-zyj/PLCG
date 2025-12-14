/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113765
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_9))), (((arr_3 [(unsigned short)3]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)107))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 13924194298944439338ULL)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                var_20 ^= ((/* implicit */short) var_3);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_14);
    var_22 = ((/* implicit */unsigned long long int) max((((long long int) max((((/* implicit */unsigned char) (signed char)-86)), ((unsigned char)255)))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (3380827935U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    var_23 = ((/* implicit */unsigned int) var_13);
    var_24 = ((/* implicit */short) ((var_1) % (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)131)))))))));
}
