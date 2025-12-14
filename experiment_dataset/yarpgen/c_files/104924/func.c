/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104924
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) var_4);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0 + 4] [i_0 - 1] = ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_1 + 1]);
                    arr_9 [i_0] [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) var_9)))) & (min((((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 - 2] [i_1])), (var_16)))));
                    arr_10 [i_0 + 1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-125))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(2147483627))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((max((((/* implicit */long long int) var_16)), (6260901358691166252LL))), (var_7)))));
                                var_21 = ((/* implicit */int) ((unsigned short) (signed char)8));
                                arr_18 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (-2147483617)));
                            }
                        } 
                    } 
                }
                arr_19 [i_1] |= ((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0 + 4] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_16))));
}
