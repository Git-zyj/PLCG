/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139665
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
    var_10 = ((/* implicit */unsigned short) (short)1995);
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8)))))))))));
    var_12 = ((/* implicit */unsigned short) min((((0LL) % (-1LL))), (((/* implicit */long long int) (((~(1399999857))) ^ ((~(((/* implicit */int) (signed char)-19)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-35)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_1)) + ((+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */short) min((var_1), ((_Bool)1)))), (var_5))))));
}
