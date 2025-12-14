/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108098
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) max(((short)16193), (((/* implicit */short) (_Bool)1))));
                var_11 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_3)))));
        var_14 = ((arr_1 [i_2]) ? (1625414138) : (((/* implicit */int) arr_1 [i_2])));
    }
    var_15 = ((/* implicit */short) var_6);
}
