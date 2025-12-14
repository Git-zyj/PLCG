/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139553
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(536869888)))) ? ((~(((/* implicit */int) arr_4 [i_1] [i_2] [i_2] [i_2 - 1])))) : (((/* implicit */int) ((signed char) min((((/* implicit */int) var_2)), (var_4)))))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) var_5)))));
                }
            } 
        } 
    } 
    var_12 = max((-536869884), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_5) : (-536869899))))));
}
