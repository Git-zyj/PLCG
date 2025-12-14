/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110239
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) var_1)), (max((((/* implicit */int) var_0)), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_12)))))))))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (((-(var_7))) != (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((short) (_Bool)1)), (max((((/* implicit */short) (_Bool)1)), (var_12)))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (max((var_3), (((/* implicit */long long int) arr_4 [i_1] [(signed char)14]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56265))) ^ (3307399503235026105ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))) : ((~(3307399503235026094ULL))))))))));
                var_23 -= ((/* implicit */int) var_4);
            }
        } 
    } 
}
