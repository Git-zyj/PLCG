/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165313
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
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_15))))) & (((/* implicit */int) var_0))))));
    var_17 = ((/* implicit */_Bool) ((unsigned char) var_0));
    var_18 = var_15;
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)0))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) == (((/* implicit */int) var_10))));
}
