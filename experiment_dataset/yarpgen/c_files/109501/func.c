/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109501
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) (short)32766)) + (((/* implicit */int) (signed char)53))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [(short)8] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) + (2147483647))) << ((((((+(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-54)))))) + (122))) - (25)))));
                    var_17 = ((/* implicit */_Bool) (-(6831374871810982754ULL)));
                    var_18 = ((/* implicit */int) (((+(((/* implicit */int) (signed char)-79)))) != (((/* implicit */int) var_5))));
                    var_19 += ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0 + 2] [i_0 + 1]))) <= (1U)))) : ((~((+(((/* implicit */int) (signed char)-30))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) ((signed char) arr_11 [i_3] [i_3]))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_1))))));
                var_21 = ((arr_12 [i_4] [0ULL] [0ULL]) - (((/* implicit */unsigned long long int) var_12)));
                arr_14 [i_3] = ((/* implicit */unsigned char) (signed char)53);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_10);
}
