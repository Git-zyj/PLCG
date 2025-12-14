/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164594
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8647))) - (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))) : (3849303612U))))), (max((0U), (((/* implicit */unsigned int) (short)21139))))));
                        var_13 = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) 965115561U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1177))) : (3329851734U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))))));
                    }
                    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned short) (short)-21146)), ((unsigned short)65535))))), (min((-25LL), (((/* implicit */long long int) (signed char)68))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                arr_19 [(short)16] [i_5] [(short)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)10479), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)0)), ((short)31004))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 965115562U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_5])))))))) : (arr_16 [i_4] [i_5])));
                var_15 = ((/* implicit */signed char) 11U);
                var_16 -= ((/* implicit */long long int) max(((+(965115562U))), (((unsigned int) max((((/* implicit */unsigned int) (short)16)), (46770056U))))));
                arr_20 [i_4] = (unsigned short)40496;
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) 8050235502796019143LL);
}
