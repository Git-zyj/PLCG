/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124416
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_10))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((18446744073709551615ULL), (13ULL))))));
                    }
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) ((unsigned short) (+(max((13090168165477519440ULL), (18446744073709551615ULL))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */signed char) var_7);
}
