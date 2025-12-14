/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166533
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
    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (var_15)))) : (var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(signed char)13] [(signed char)13] [i_1] [i_0] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) max((max((-1559331232342749042LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21718)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-2)))))));
                                var_19 -= ((/* implicit */unsigned long long int) ((unsigned int) max((arr_13 [i_0 - 3] [i_1 + 3] [i_3 + 1] [i_4 + 1]), (arr_13 [i_0 - 3] [i_1 - 4] [i_3 + 1] [i_4 + 1]))));
                                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_4]))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [6U] [i_1] [i_1] [i_0 - 3]))))) ? (((((/* implicit */int) arr_13 [i_0 - 1] [3LL] [i_1] [i_1])) | (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_13 [(signed char)2] [i_1 - 1] [i_1 + 3] [i_1 - 1]))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [3LL] [i_1] [i_1 - 2] [i_1]))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-8))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-16384)), (var_9)));
}
