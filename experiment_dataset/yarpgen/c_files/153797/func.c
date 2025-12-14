/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153797
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [18LL]);
                    var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    var_20 ^= ((((((/* implicit */int) arr_0 [i_1 - 2])) == (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_0 - 2])));
                    arr_9 [i_0] [i_1] [i_1] = max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)));
                    var_21 ^= ((/* implicit */_Bool) (~(((((((/* implicit */int) (signed char)-87)) & (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) (signed char)86)) | (((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)32))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_7))));
}
