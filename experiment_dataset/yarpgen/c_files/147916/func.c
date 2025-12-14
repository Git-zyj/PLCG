/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147916
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_8 [0] [i_0] = arr_4 [(unsigned char)5] [i_1] [i_0];
                var_20 = ((/* implicit */signed char) min((max((min((var_19), (((/* implicit */int) (unsigned char)229)))), (((/* implicit */int) (unsigned char)23)))), ((~(((/* implicit */int) ((signed char) (signed char)-1)))))));
                arr_9 [i_0] [i_1] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 - 1]))) ? (((((/* implicit */int) arr_1 [i_0 + 1])) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (36))))) : ((((!(((/* implicit */_Bool) (unsigned short)53104)))) ? (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_5 [i_0] [(signed char)4])) - (24010))))) : ((+(((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)50))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)82))))) : (-1783465407)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_10))));
}
