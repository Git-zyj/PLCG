/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165255
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (~(((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) < (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) (unsigned char)5)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (_Bool)1)))))))));
                var_12 -= ((((/* implicit */_Bool) min((max((var_1), (var_2))), (((/* implicit */unsigned int) (unsigned char)207))))) ? ((-(((/* implicit */int) (signed char)-106)))) : ((~(((/* implicit */int) (signed char)105)))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_0))))))) ? ((-(max((((/* implicit */int) (unsigned char)187)), ((-2147483647 - 1)))))) : ((-(((/* implicit */int) var_3)))))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 9885123254974616383ULL))))))))))));
            }
        } 
    } 
}
