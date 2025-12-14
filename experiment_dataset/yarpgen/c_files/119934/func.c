/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119934
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(5622587)))) ^ (arr_0 [i_0])));
        arr_3 [i_0] = (~(0LL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] = ((/* implicit */_Bool) var_2);
            var_17 = ((/* implicit */_Bool) arr_0 [2U]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 -= (+(24LL));
            var_19 = arr_4 [i_0] [i_0] [i_0];
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2147483647) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_2]) : (arr_4 [i_0] [i_0] [i_0])))))), (var_8))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) ((unsigned char) 25ULL))))));
        var_22 = ((/* implicit */unsigned char) arr_0 [i_3]);
    }
    var_23 = ((/* implicit */int) ((2525712423U) << (((-1024969833) + (1024969845)))));
}
