/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179105
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
    var_11 = ((/* implicit */unsigned char) ((_Bool) var_5));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((unsigned char) 2350142258U));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) max((1944825059U), (((/* implicit */unsigned int) (short)12232)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((signed char) 1944825059U)));
        var_13 = ((((/* implicit */int) max(((unsigned char)64), (min((((/* implicit */unsigned char) (signed char)-30)), ((unsigned char)198)))))) >= (((/* implicit */int) ((unsigned char) min((579436396550385088LL), (((/* implicit */long long int) (unsigned short)11457)))))));
        var_14 = ((((/* implicit */int) ((signed char) max((10877595871687302461ULL), (((/* implicit */unsigned long long int) (unsigned char)64)))))) >= (((/* implicit */int) ((4294967271U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))));
    }
}
