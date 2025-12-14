/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12835
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) arr_5 [i_0]);
                    var_14 = ((/* implicit */unsigned char) min(((~(((15372506977549253496ULL) & (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_10)))) != (min((((/* implicit */long long int) var_10)), (arr_5 [i_1]))))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) (-(-69966374)));
}
