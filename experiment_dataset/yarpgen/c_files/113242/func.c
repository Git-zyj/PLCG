/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113242
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
    var_16 = ((/* implicit */unsigned short) ((((_Bool) (!(((/* implicit */_Bool) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-293349359)))))))) : (((((/* implicit */_Bool) (~(293349362)))) ? (((/* implicit */unsigned long long int) (+(574301868)))) : (3515156710012541625ULL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) var_11);
        var_17 += ((/* implicit */unsigned short) 1711156116);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_5);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_7 [(unsigned char)4] = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_2)));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_18 = (~((~(1711156101))));
                    arr_14 [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 30448895259359390ULL)) ? (18252057677011518651ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_4)));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_13)))))), ((~((-(293349338)))))));
}
