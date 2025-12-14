/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12336
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
    var_14 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (9127490770814615595ULL))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)14294)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [i_1]))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((min((((((/* implicit */int) (unsigned short)32567)) % (((/* implicit */int) (short)10972)))), (max((328013466), (-328013484))))), (((/* implicit */int) arr_2 [i_0]))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)7892), (((/* implicit */unsigned short) arr_2 [i_0 - 1]))))) >> (((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 + 1]))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57644)) ? (((/* implicit */long long int) 328013466)) : (-4613067538070040770LL)));
                }
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? ((~(arr_3 [i_0 + 1]))) : (((unsigned int) arr_3 [i_0 + 1])))))));
                /* LoopSeq 1 */
                for (short i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_3] [i_4] = (signed char)127;
                        arr_15 [(short)8] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((-328013444) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        arr_16 [i_0] [i_3] [i_0] [i_3 - 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((5254929996910154939LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_3 + 1])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [2ULL]))) * (max((((/* implicit */long long int) var_3)), (8900330848572014479LL)))))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((min((arr_12 [i_0 + 1] [(_Bool)1]), (arr_12 [i_0 - 1] [4]))), ((+(arr_12 [i_0 - 1] [i_0]))))))));
                        arr_17 [i_3] [i_0] [i_1] [i_3] = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33463))) / (9223372036854775807LL)))));
                    }
                    arr_18 [i_3] = ((/* implicit */signed char) max((3905506017U), (((/* implicit */unsigned int) 328013475))));
                }
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((~(((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
}
