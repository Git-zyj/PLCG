/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120747
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
    var_20 |= (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
    var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned char) var_8)))));
                    arr_7 [i_0 + 2] [i_0] [i_0] [(unsigned short)4] = arr_2 [i_0 - 1];
                    arr_8 [i_0 + 1] [i_0 - 1] [11ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)5] [i_1] [i_2])) ? (arr_3 [i_0 + 1] [i_0 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))));
                }
            } 
        } 
    }
}
