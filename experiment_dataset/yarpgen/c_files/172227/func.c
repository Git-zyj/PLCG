/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172227
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14203868959804245271ULL))))), (((unsigned short) var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [(signed char)16] [i_0] = ((/* implicit */signed char) var_14);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((var_6) >> (((max((var_19), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (262143U))))) - (4294967147U))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(var_19))))))));
                        arr_9 [3ULL] [i_1] [i_1] [(signed char)21] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) : (2505278545U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2] [(signed char)0] [i_3]))))))));
                    }
                }
            } 
        } 
    } 
}
