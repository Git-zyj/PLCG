/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16924
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_2 - 2] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned char) var_0)))))) >= (((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) 987978012U)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 4] [i_2 - 4] [i_2 + 1] [i_3 + 1] [i_3 - 2])))));
                        arr_10 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) 34359736320ULL);
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_3] = ((unsigned int) arr_5 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 - 2]);
                    }
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((18446744039349815319ULL) != (((var_1) | (18446744039349815295ULL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) (unsigned char)244))))) ? (((arr_9 [i_0] [i_2] [i_0] [i_4 - 1]) * (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
                        var_20 = ((/* implicit */unsigned char) ((((var_4) <= (3398797613862369218ULL))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) 4294967295U)))))))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_3 [i_0] [i_0] [i_0])));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_13) : (var_13)))) ? (((var_0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) var_8))));
}
