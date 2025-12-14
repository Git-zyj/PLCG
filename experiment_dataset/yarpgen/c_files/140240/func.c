/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140240
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_2] [i_0] |= ((/* implicit */short) ((signed char) (-(((/* implicit */int) (signed char)(-127 - 1))))));
                    var_15 = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) % ((-((-(((/* implicit */int) var_8))))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-109)))))))))))));
                        arr_14 [i_0] [(unsigned char)0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) ((var_1) >= (var_0)))) : (((/* implicit */int) min((var_12), ((signed char)0)))))), (((/* implicit */int) ((unsigned char) (~(3795291967801321918LL)))))));
                    }
                    arr_15 [i_0] = var_14;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), ((((!(((/* implicit */_Bool) (unsigned char)1)))) ? (min((((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_2))))), (var_0))) : (min((((/* implicit */long long int) (!((_Bool)1)))), (-61819754451929654LL)))))));
    var_19 ^= ((/* implicit */unsigned char) var_3);
}
