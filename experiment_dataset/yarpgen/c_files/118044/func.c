/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118044
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
    var_14 = ((unsigned char) min((-8LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) arr_1 [i_0]);
        var_16 ^= min((((/* implicit */unsigned int) (unsigned char)40)), (max((((/* implicit */unsigned int) arr_0 [(unsigned short)5])), (max((784733174U), (2584723409U))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) 10U);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) 4322818218753788094LL);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) max((67108863U), (((/* implicit */unsigned int) (unsigned short)32125)))));
            var_17 *= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned char) ((1710243887U) > (((unsigned int) 1710243893U))));
        }
    }
    var_19 = ((/* implicit */unsigned short) var_8);
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = max((1114550333489450067LL), (((/* implicit */long long int) 2584723399U)));
}
