/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18109
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_6))));
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)205)))), (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (var_9)))))))));
    var_16 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (arr_3 [i_0])))), (arr_0 [i_1]))))));
                var_19 = ((/* implicit */_Bool) 1221810998U);
                var_20 = ((/* implicit */long long int) (_Bool)1);
                var_21 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_12)), ((~(max((5986873118072477529ULL), (((/* implicit */unsigned long long int) var_12))))))));
            }
        } 
    } 
}
