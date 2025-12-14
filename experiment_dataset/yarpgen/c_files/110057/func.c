/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110057
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1992108944)))) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                    arr_7 [i_1] [i_1] [i_1] [15U] = ((/* implicit */int) ((((unsigned int) var_6)) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_0 [(_Bool)1]);
                }
            } 
        } 
        arr_9 [(short)14] = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 - 1]);
    }
    var_13 = ((/* implicit */unsigned short) var_4);
}
