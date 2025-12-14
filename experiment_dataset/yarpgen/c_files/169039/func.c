/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169039
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_11 [i_4] [i_0] [i_2 - 2] [i_2] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 - 2] [i_2 - 2])) ? (((-1649989251) / (((/* implicit */int) (unsigned char)57)))) : ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_3])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_2)))))))));
                                var_21 -= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_0 + 3] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */short) var_8);
                        arr_16 [i_2] [i_1] = var_2;
                    }
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (arr_15 [i_2 + 1] [i_2 - 1] [i_2 - 3] [i_2 + 1]) : (arr_15 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_20 [i_0 + 3] [i_2] [i_2] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [9LL] [i_0 + 3] [i_0 - 2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) : (arr_15 [i_0] [i_0 + 1] [i_0 - 3] [i_2 - 3])));
                        var_23 = ((/* implicit */_Bool) var_18);
                    }
                    arr_21 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1649989251)) ? (arr_15 [i_0 - 3] [i_0 + 1] [i_0] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))))), (((/* implicit */long long int) (-(-1649989251))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_7);
}
