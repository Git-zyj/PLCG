/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103698
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) min((3484267493U), (arr_4 [i_2] [i_0 + 1] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (arr_2 [0U]));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [(unsigned short)2])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(max((var_9), (((/* implicit */long long int) var_13))))));
}
