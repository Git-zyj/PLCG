/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168420
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (arr_4 [i_0] [10] [i_1]))))))));
                var_12 += ((/* implicit */long long int) ((signed char) (unsigned char)255));
                var_13 -= ((int) var_7);
            }
        } 
    } 
    var_14 &= var_8;
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)23))) - (((/* implicit */int) var_7))));
}
