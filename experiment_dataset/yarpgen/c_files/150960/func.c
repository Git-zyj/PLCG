/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150960
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((long long int) var_1)) + (9223372036854775807LL))) << ((((((((_Bool)1) ? (-883855295) : (((/* implicit */int) (unsigned char)0)))) + (883855321))) - (26)))))) || ((!(((/* implicit */_Bool) (unsigned char)22))))));
                arr_7 [(unsigned char)0] [i_1] [i_0] = ((/* implicit */signed char) var_17);
                arr_8 [i_0] [i_1 - 2] = ((/* implicit */unsigned int) ((signed char) -451208360722572305LL));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)84)) < (883855294)))))));
                arr_9 [i_0] [i_0] [7ULL] = (~(((((/* implicit */_Bool) (unsigned short)24732)) ? (((/* implicit */int) (signed char)-1)) : (-883855290))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_14)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) -883855271)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9876))) : (3982639081127413542LL))) ^ (((/* implicit */long long int) var_14)))))));
}
