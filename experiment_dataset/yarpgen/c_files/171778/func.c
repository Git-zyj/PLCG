/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171778
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7))) != (max((9223372036854775807LL), (((/* implicit */long long int) var_3)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_15 = arr_5 [i_1];
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)44624)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21600))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((((/* implicit */int) arr_2 [(unsigned short)1])) ^ (((/* implicit */int) min((var_2), (arr_3 [i_2] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned short) min((max((min((((/* implicit */long long int) (unsigned short)12224)), (9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)18629))))))), (((((var_5) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3574))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_8))))) : (-9223372036854775807LL)))));
                                var_17 = ((/* implicit */short) ((unsigned short) min((min((((/* implicit */long long int) (unsigned short)35292)), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_1]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_12 [i_4] [i_3] [i_1])), ((unsigned short)46914)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (short)25953)), (((arr_11 [i_0] [(unsigned short)9] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                }
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)46914), (((unsigned short) (_Bool)1))))) - ((~((-(((/* implicit */int) var_6))))))));
}
