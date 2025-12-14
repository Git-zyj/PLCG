/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144537
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
    var_11 = ((/* implicit */unsigned char) ((min(((-(var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))) - (((/* implicit */long long int) ((((((/* implicit */int) var_6)) - (((/* implicit */int) var_8)))) + (((((/* implicit */int) (unsigned short)63538)) - (((/* implicit */int) (unsigned char)192)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_1)))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    var_12 = ((/* implicit */long long int) min((((arr_3 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2]))))), (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_2))))));
                    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((unsigned long long int) var_10))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_9 [i_0])) & (((/* implicit */int) var_9))))))));
                    arr_12 [i_0] [i_1 + 1] [i_3] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-110))));
                    var_15 ^= ((/* implicit */short) (unsigned short)4088);
                    var_16 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)24693)) << (((((/* implicit */int) var_6)) - (54860)))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_3 + 2] [i_0] [i_1 + 1] [i_3 + 2])) + (((/* implicit */int) arr_8 [i_1 - 2] [i_1]))));
                }
            }
        } 
    } 
}
