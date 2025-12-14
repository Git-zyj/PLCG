/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114172
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_11 -= ((/* implicit */unsigned int) (unsigned char)169);
        var_12 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((signed char) 2424671978U)))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_7))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max(((+((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) -4878590154728308945LL);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_12 [16LL] [16LL] [i_3]);
                                var_17 = ((/* implicit */int) ((_Bool) arr_9 [i_3] [i_2] [i_3]));
                                var_18 = (~(arr_13 [(signed char)15] [(signed char)15] [i_5] [(_Bool)1] [i_3] [i_4]));
                                var_19 -= ((/* implicit */unsigned long long int) var_0);
                                var_20 = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) max(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)));
}
