/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109949
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(unsigned short)1] = ((/* implicit */unsigned short) (!(var_0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [7] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483644)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) -7259312843420686146LL)) ? (((/* implicit */unsigned int) -2147483632)) : (4294967289U))))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((17575006175232ULL) >> (((-1141092264) + (1141092326))))))));
                                var_17 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 4589204407866134953ULL)) ? (var_12) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) var_9))))) / (((arr_8 [i_0] [i_2] [i_3 + 3] [i_4 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_3 + 4] [i_4 - 2] [i_4 + 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_3))));
    var_19 &= ((/* implicit */unsigned char) var_4);
}
