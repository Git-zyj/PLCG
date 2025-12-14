/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138996
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
    var_10 = ((/* implicit */signed char) ((unsigned int) ((_Bool) (~(2199023247360LL)))));
    var_11 |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_1))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (2199023247360LL)));
        var_13 = var_5;
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))) ? ((-(max((((/* implicit */unsigned long long int) var_8)), (15239888665127410028ULL))))) : (((/* implicit */unsigned long long int) var_8))));
                        arr_11 [i_0] [i_1 - 2] [(unsigned char)14] [i_0] = ((/* implicit */short) (((((+(((/* implicit */int) (unsigned char)180)))) < (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (max((((/* implicit */unsigned long long int) ((long long int) var_7))), (var_1)))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min(((+(2199023247372LL))), (((/* implicit */long long int) ((arr_4 [i_1 - 3] [(short)12]) == (arr_10 [(_Bool)1] [i_3 - 1] [i_3 - 1] [i_1 - 2] [i_1 - 1] [(_Bool)1])))))))));
                        var_16 = ((/* implicit */long long int) var_4);
                    }
                    var_17 = max(((+(18446744073709551615ULL))), (((18446744073709551593ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) (unsigned char)22);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) 2199023247330LL);
        var_20 &= ((/* implicit */int) var_7);
        var_21 = ((/* implicit */long long int) min((var_21), ((~(var_6)))));
        var_22 ^= ((/* implicit */unsigned int) 2199023247330LL);
    }
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
    {
        arr_16 [i_5 - 2] [i_5 + 1] = 2199023247360LL;
        var_23 = min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)876)))))) : ((((_Bool)1) ? (((/* implicit */long long int) var_4)) : (var_2))))), (((/* implicit */long long int) ((signed char) min(((short)18537), (((/* implicit */short) (_Bool)1)))))));
    }
}
