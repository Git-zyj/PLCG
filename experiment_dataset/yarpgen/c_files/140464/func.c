/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140464
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (signed char)52);
                arr_7 [i_0] [i_1] |= ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_4 [(short)3]))))) / (-8660929411443427214LL))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    arr_12 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_0) && (((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) 576015480))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)22))) && (((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */int) (unsigned char)223)) : (var_9)))))))));
                    arr_13 [i_2] [i_1] [i_1] = (i_2 % 2 == 0) ? (((/* implicit */int) ((((((((/* implicit */_Bool) var_10)) ? (802036964U) : (((/* implicit */unsigned int) -517597483)))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((/* implicit */int) arr_11 [(unsigned char)3] [i_2] [(short)5] [(short)14]))))))) << (((((arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 4]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(short)17] [2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [8LL]))))) : ((+(9223372036854775807LL))))) - (137LL)))))) : (((/* implicit */int) ((((((((/* implicit */_Bool) var_10)) ? (802036964U) : (((/* implicit */unsigned int) -517597483)))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((/* implicit */int) arr_11 [(unsigned char)3] [i_2] [(short)5] [(short)14]))))))) << (((((((arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 4]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(short)17] [2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [8LL]))))) : ((+(9223372036854775807LL))))) - (137LL))) - (9223372036854775662LL))))));
                }
                arr_14 [i_0] [(unsigned char)15] = ((/* implicit */short) arr_9 [i_0] [(unsigned char)4] [i_0] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_9);
}
