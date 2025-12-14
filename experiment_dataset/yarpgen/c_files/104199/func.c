/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104199
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18373348569115036118ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (73395504594515500ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_4] [i_4])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_3] [i_4])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4]))))))));
                                var_14 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)88)) | (((((/* implicit */int) var_9)) | (((/* implicit */int) var_10))))))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 17752366602246241815ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)47929)))))))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned long long int) (short)-1035);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65532))));
}
