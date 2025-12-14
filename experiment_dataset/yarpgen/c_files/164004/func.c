/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164004
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((max((2097151LL), (((/* implicit */long long int) ((_Bool) 1380849472))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)16)), (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) -1892752768);
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_17 += ((/* implicit */_Bool) arr_6 [i_2 + 2]);
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) 8852310160284087112LL))));
    }
}
