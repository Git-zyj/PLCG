/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115335
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */int) var_8);
                var_15 -= ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14143))))) ? ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3363888878U)) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [2U]))))))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7917))) : (arr_3 [4] [i_1 + 2]))) >> (((/* implicit */int) ((unsigned char) (unsigned short)16910)))))));
                var_16 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((_Bool) (unsigned short)65535)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((arr_3 [(unsigned char)20] [(unsigned char)20]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))))), (((/* implicit */long long int) 1023U)))))));
        var_18 = ((/* implicit */unsigned short) ((unsigned char) ((short) ((unsigned char) arr_1 [i_2] [i_2]))));
    }
}
