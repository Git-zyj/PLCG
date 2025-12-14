/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146033
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
    var_13 |= ((/* implicit */short) var_4);
    var_14 = ((/* implicit */long long int) max((var_1), (var_1)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) var_9);
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */int) ((unsigned char) ((min((1286251615175495568LL), (((/* implicit */long long int) (_Bool)1)))) != (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))));
            arr_5 [i_0] [(unsigned short)6] = ((/* implicit */unsigned char) -1443149463879830163LL);
            var_16 ^= ((/* implicit */int) var_9);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (unsigned char)250)))));
            var_18 += ((/* implicit */unsigned short) ((2308775553U) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2])))))));
        }
    }
}
