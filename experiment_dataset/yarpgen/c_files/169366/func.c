/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169366
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
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 |= ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) 110026732945193096LL))))) >= (var_1))), (var_13)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 += ((/* implicit */short) -9223372036854775799LL);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */short) 2796919878503206418LL);
                    var_19 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [20LL] [i_1 - 3])) ? (((/* implicit */int) arr_7 [(unsigned char)18] [i_2])) : (((/* implicit */int) arr_7 [(unsigned char)16] [i_1]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) var_2);
}
