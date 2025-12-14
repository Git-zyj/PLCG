/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186915
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
    var_12 -= (_Bool)1;
    var_13 ^= ((/* implicit */unsigned char) (~(min((((((/* implicit */int) var_4)) >> (((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = (_Bool)1;
                arr_6 [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))))), (max((((((/* implicit */int) var_3)) % (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) (unsigned short)26545))))));
            }
        } 
    } 
}
