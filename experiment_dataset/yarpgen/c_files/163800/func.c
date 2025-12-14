/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163800
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) (~(arr_2 [i_0])));
        var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1500741415U))));
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        var_22 = ((/* implicit */short) (+(((((unsigned int) arr_3 [i_1])) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)25681))))))));
        arr_7 [0ULL] &= ((/* implicit */unsigned int) -713908117);
    }
    var_23 = ((/* implicit */_Bool) min((min(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_11)))), (min((((/* implicit */int) (signed char)-4)), ((+(((/* implicit */int) (unsigned char)142))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) arr_11 [i_2] [i_3] [i_2]);
                arr_14 [i_3] [i_2] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
}
