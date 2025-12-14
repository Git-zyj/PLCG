/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170119
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = 65535U;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((7362794325975127007LL) - (7362794325975126987LL)))));
                arr_9 [9ULL] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)9)) << (((((/* implicit */int) ((short) var_3))) + (31429))))) > (((/* implicit */int) var_12))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_21 [i_2] [(unsigned short)5] [5LL] = ((/* implicit */short) arr_14 [i_0] [i_1] [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 3]);
                                var_19 = ((/* implicit */long long int) var_12);
                                arr_22 [i_4] [5LL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_15 [i_0] [i_0] [i_2] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24955))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] = max((((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2346976341U))) : (4294967281U))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
}
