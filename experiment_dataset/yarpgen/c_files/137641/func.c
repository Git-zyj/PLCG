/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137641
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
    var_15 = ((/* implicit */int) max((var_15), (((int) var_8))));
    var_16 = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_13))))), (var_9))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (var_0) : (((/* implicit */long long int) 1701462103))))) != (var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] = max((-3LL), (((/* implicit */long long int) (short)22169)));
                    var_17 = ((/* implicit */int) var_1);
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15)))));
                    arr_10 [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */int) var_6);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_14 [i_0 - 3] [i_0 - 3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((var_8), (((/* implicit */unsigned long long int) arr_4 [i_0 - 3] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_11 [4] [i_0] [i_1] [21LL]) : (-3LL))))))) && (((/* implicit */_Bool) max((4187723858055535300ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))))));
                    arr_15 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 20LL))));
                }
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((9679133965541047549ULL) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31834)) ? (((/* implicit */unsigned long long int) -985520469)) : (6771733141131790362ULL)))) ? (var_1) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) -1)) : (8040460394897911908LL)))))));
    var_20 = ((/* implicit */long long int) ((unsigned long long int) var_4));
}
