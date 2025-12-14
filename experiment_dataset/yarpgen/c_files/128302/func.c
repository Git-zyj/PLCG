/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128302
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
    var_17 = ((/* implicit */long long int) (short)6);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -748145581)), (4014435054U)))) ? (((/* implicit */long long int) var_6)) : (var_8)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (var_6))) / (var_4)))) : (var_0)));
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [2U] = ((/* implicit */short) ((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        arr_11 [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))) ? (((((/* implicit */_Bool) 243504901U)) ? (var_16) : (((/* implicit */long long int) 748145580)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */long long int) 329636260))))))));
                        var_20 = ((/* implicit */unsigned int) (unsigned char)0);
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535U)) ? (var_14) : (((/* implicit */unsigned int) var_3))))) ? (min((6192936067882726367ULL), (((/* implicit */unsigned long long int) 7006895812015183291LL)))) : ((+(var_15)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (var_15))) ^ (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2970694000U) < (((/* implicit */unsigned int) -1149769319))))))));
                        arr_15 [i_2] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 677235524U)) : (var_1))) != (((/* implicit */long long int) ((int) (unsigned char)4)))));
                        arr_16 [(short)9] [i_4] [3LL] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_14)))), (min((var_1), (((/* implicit */long long int) var_0))))));
                        var_23 ^= ((/* implicit */int) (_Bool)0);
                    }
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-(((var_1) / (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) var_0)))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) -7770753088718380249LL))) ? (((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 0U)) ? (((var_15) | (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
        arr_17 [i_0] = ((((/* implicit */_Bool) ((long long int) var_4))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (336998101U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26)))))) - (var_16))) : (((((/* implicit */_Bool) var_13)) ? (var_1) : (((((/* implicit */_Bool) 8859199481191282610LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) ((var_9) / (((/* implicit */long long int) -778067462)))))) : (((/* implicit */int) var_11))));
}
