/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134210
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 + 1] [i_2 - 3])) ? (((/* implicit */long long int) var_8)) : (var_16)));
                        var_20 = (~(var_10));
                        var_21 ^= ((/* implicit */_Bool) (((((_Bool)0) ? (3918844293U) : (((/* implicit */unsigned int) 3)))) - (((((/* implicit */_Bool) (signed char)7)) ? (737029718U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_16)) ? (arr_7 [i_0] [i_2] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [17U] [i_1] [i_2])))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */int) (!(arr_4 [i_0 + 1] [i_1 - 1] [i_1 + 1])));
            var_24 &= ((((/* implicit */_Bool) (short)15682)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) var_14)));
            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_8))))) ? ((+(4074150054535127931LL))) : (((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_4 + 1] [i_0 - 1])) ? (9223372036853727232LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_21 [i_0] [4] [16U] [10] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2545107589371378481LL)))))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) (+(var_12)));
}
