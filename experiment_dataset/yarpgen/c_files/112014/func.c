/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112014
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(unsigned short)6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0]))) << (((arr_3 [i_0] [(signed char)19] [i_1]) - (11127479292934402211ULL)))))) || (((/* implicit */_Bool) ((unsigned short) ((arr_7 [1] [i_1] [i_1] [i_2]) && (((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_2]))))))));
                    var_11 = ((/* implicit */unsigned short) arr_6 [(unsigned short)20] [18ULL] [18ULL] [i_2]);
                    arr_9 [i_0] [i_0] [18U] = ((/* implicit */signed char) arr_2 [i_0] [i_0] [11]);
                }
            } 
        } 
    } 
    var_12 = min((((/* implicit */long long int) ((int) ((long long int) var_8)))), (((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_2))))) + (min((((/* implicit */long long int) (short)25547)), ((-9223372036854775807LL - 1LL)))))));
    var_13 = ((/* implicit */int) ((unsigned long long int) min(((unsigned char)72), (((/* implicit */unsigned char) (_Bool)0)))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_3))));
}
