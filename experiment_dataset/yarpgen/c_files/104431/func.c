/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104431
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 2174397917U)) ? (0LL) : (12LL))))), (((unsigned char) ((2025873086) + (((/* implicit */int) (unsigned short)8)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (_Bool)1);
                                var_19 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) arr_8 [i_0 - 2] [i_1] [i_0 - 2])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    arr_17 [(unsigned char)4] [i_0] [i_1 + 1] [i_0] |= ((/* implicit */unsigned long long int) arr_4 [(signed char)22]);
                    var_20 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) (short)15462)) * (((/* implicit */int) (_Bool)1))))));
                }
                var_21 = ((long long int) ((((/* implicit */_Bool) 1049449976)) ? (((/* implicit */int) (_Bool)1)) : (min((0), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
