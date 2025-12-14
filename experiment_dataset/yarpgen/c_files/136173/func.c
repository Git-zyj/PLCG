/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136173
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
    var_14 = ((((((/* implicit */_Bool) ((var_2) >> (((var_10) - (9579746548618959460ULL)))))) ? (min((15016538382652308348ULL), (var_11))) : (((unsigned long long int) var_4)))) | (var_7));
    var_15 = ((unsigned long long int) ((((/* implicit */_Bool) 603172874660553448ULL)) ? (3353772744602079993ULL) : (((var_5) ^ (var_7)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [13ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [10ULL] [i_0]))));
                arr_5 [i_0] [i_1] = var_8;
                arr_6 [i_0] = max((((unsigned long long int) max((15092971329107471623ULL), (var_12)))), (1358023706249664ULL));
                arr_7 [i_1 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15092971329107471623ULL)))) ? (arr_1 [i_0] [i_0]) : (((unsigned long long int) 5846837629746793093ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17843571199048998168ULL)) || (((/* implicit */_Bool) 1833058050822709937ULL)))))) : (((((/* implicit */_Bool) (+(3353772744602079993ULL)))) ? (((unsigned long long int) 0ULL)) : (min((var_12), (5391702789249056000ULL))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    arr_11 [i_1] [i_1] [0ULL] [15ULL] = ((((var_12) >= (var_7))) ? (((603172874660553449ULL) * (0ULL))) : (max((((/* implicit */unsigned long long int) ((var_0) == (1833058050822709953ULL)))), (arr_0 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((arr_14 [i_0] [i_2 + 1] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_3 - 1]))) : (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) max((5535924628007057146ULL), (18445386050003301960ULL)))) ? (11ULL) : (((((/* implicit */_Bool) 603172874660553448ULL)) ? (1068408037094385026ULL) : (1358023706249655ULL))))) : (((((/* implicit */_Bool) ((15092971329107471621ULL) * (5872321053960475517ULL)))) ? (((unsigned long long int) 18446744073709551615ULL)) : (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_4] [i_2] [i_1] [i_0]) : (15092971329107471623ULL))))));
                                var_16 |= ((unsigned long long int) 18446744073709551615ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_4)) ? (var_11) : (max((var_1), ((~(15092971329107471619ULL))))));
    var_18 -= var_10;
}
