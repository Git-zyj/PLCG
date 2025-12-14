/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13686
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [10U] = ((/* implicit */long long int) (-(((/* implicit */int) (short)0))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0])))))));
                        arr_12 [11LL] [i_2] [(signed char)15] [i_3] [i_3] = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
        } 
    }
    var_17 -= ((/* implicit */long long int) (unsigned short)20434);
}
