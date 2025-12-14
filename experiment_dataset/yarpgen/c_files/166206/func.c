/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166206
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3] [i_1 - 4])), (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) var_6)))))) + (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_6 [i_0] [i_0] [(short)15] [i_0]))), (((/* implicit */unsigned int) -1335922082))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7936))) : (2039519271U)));
                                arr_14 [i_4] [i_0] [(unsigned char)11] [(short)10] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~((-2147483647 - 1))))), (((((/* implicit */unsigned int) -1427884490)) | (max((((/* implicit */unsigned int) (short)-15494)), (arr_4 [i_2] [(_Bool)1] [i_0])))))));
                                var_12 -= ((/* implicit */long long int) min((((_Bool) arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(signed char)19] [i_1 + 2])), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                                var_13 -= ((/* implicit */int) (unsigned char)86);
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */short) (~(((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((var_5) >= (((/* implicit */int) max((((/* implicit */unsigned short) (short)5315)), (var_0)))))))));
}
