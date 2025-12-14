/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162055
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [10] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 245760U)) : (((((/* implicit */_Bool) var_2)) ? (17815699314231496158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 ^= (+(263120582));
                        var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))) >= (max((((/* implicit */unsigned int) (unsigned short)5499)), (0U)))))), (max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3])), (((unsigned long long int) (short)0)))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_8 [i_0] [i_0] [i_3]))))))), (max((((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (65535ULL) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? (-872748010) : (((/* implicit */int) (short)-8))))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_1);
}
