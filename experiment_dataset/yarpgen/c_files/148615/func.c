/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148615
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
    var_12 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)15)), (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_6))))))));
                var_15 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [(unsigned char)17] [i_0])), (var_10)))) ? (((((/* implicit */_Bool) -1931609857489854034LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
            }
        } 
    } 
}
