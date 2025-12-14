/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105858
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [16U] [i_0] |= ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) (short)32767)))));
        arr_3 [12LL] |= ((/* implicit */long long int) max((((unsigned int) (unsigned char)109)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41417)) << (((((/* implicit */int) (unsigned short)22224)) - (22211))))))));
        var_14 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)-8416)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-32364)))) > (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    var_15 = ((/* implicit */short) var_1);
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-1)), (-4771220731580969735LL)));
}
