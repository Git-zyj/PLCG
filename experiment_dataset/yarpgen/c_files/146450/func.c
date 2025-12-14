/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146450
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
    var_13 &= ((/* implicit */signed char) var_4);
    var_14 &= ((unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) && (var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [4ULL] [i_1] = (~(var_9));
                    arr_10 [(unsigned char)5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)29668)) != (((/* implicit */int) (unsigned short)26687)))))) + (-9132808479691669043LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9828)) : (((/* implicit */int) (unsigned short)28471)))))));
                    var_15 &= ((/* implicit */int) (unsigned short)55707);
                }
            } 
        } 
    } 
    var_16 = max(((+(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_4)))))));
}
