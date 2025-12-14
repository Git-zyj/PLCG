/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180010
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) (unsigned char)47);
            arr_7 [22U] [22U] |= ((/* implicit */short) ((signed char) ((_Bool) 4294967266U)));
        }
        arr_8 [i_0] = ((/* implicit */signed char) ((arr_3 [i_0 - 1]) ? (1160680529) : (((/* implicit */int) var_9))));
        var_14 = ((0) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])));
        var_15 = ((/* implicit */signed char) ((arr_5 [i_0 + 2] [i_0 + 2]) || (((/* implicit */_Bool) 2828552701U))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((unsigned short) var_2));
                var_17 = ((/* implicit */signed char) arr_11 [i_2] [i_2]);
            }
        } 
    } 
}
