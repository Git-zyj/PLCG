/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186066
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
    var_15 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */signed char) var_1))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(var_10))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) arr_3 [i_0] [i_2 - 3] [i_3 - 1]);
                        arr_11 [i_1] [3] [i_0] [i_1] [i_0 - 1] = arr_10 [i_0] [i_1] [i_0] [23U];
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((unsigned short) arr_13 [i_0 - 1] [i_4 - 1] [i_0 - 1] [i_0 - 1] [i_0]));
                            var_19 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_20 ^= ((/* implicit */long long int) (unsigned short)22541);
                            var_21 = ((/* implicit */_Bool) (~(max((arr_16 [i_0] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))))));
                            arr_18 [i_0] [16U] [16U] [i_2] [i_3] [22ULL] [i_5 + 1] |= ((/* implicit */signed char) min((((/* implicit */int) min((arr_17 [i_0] [i_2 - 2] [i_2 - 2] [(unsigned short)2] [i_5]), (((/* implicit */unsigned short) arr_5 [i_0] [(signed char)18] [i_2 - 1]))))), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 + 1] [(unsigned short)18] [(unsigned short)18] [i_0]))) != (-7599178221145132624LL))))))));
                        }
                        var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)59289)), (7599178221145132610LL)));
                    }
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)72), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) arr_15 [(_Bool)1] [(unsigned short)6] [(unsigned short)6] [i_1] [i_1] [(unsigned short)6] [i_0])))))))) ? (max((max((2525692879251875086LL), (((/* implicit */long long int) var_7)))), (var_4))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) - (arr_10 [i_0] [8] [(unsigned char)20] [i_0 - 1])))));
                }
            } 
        } 
    } 
}
