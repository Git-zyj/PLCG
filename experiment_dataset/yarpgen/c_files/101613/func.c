/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101613
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((long long int) -8067379754630688662LL))) : (var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */unsigned int) ((arr_1 [i_0 + 1] [i_0 - 1]) > (((/* implicit */int) var_6))))), (var_0))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((7472149445112113450LL) % (((/* implicit */long long int) (-2147483647 - 1)))))) ? (max((((/* implicit */int) max(((unsigned short)61047), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */int) (unsigned char)165)) & (((/* implicit */int) (unsigned short)1)))))) : (((/* implicit */int) (signed char)113)))))));
                        arr_11 [(signed char)16] [i_2] [i_2] [i_0] = ((/* implicit */int) var_1);
                    }
                    var_14 = ((/* implicit */long long int) min((((/* implicit */short) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0] [i_2])))) && (((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1] [(unsigned char)16]))))), (var_5)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4))))))) : (((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((var_0), (1228195824U))))))))));
}
