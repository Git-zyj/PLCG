/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175237
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_0] [i_0] [i_0 + 1])));
                                arr_13 [i_0 - 1] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 1] [i_3])), (var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((3009013848U), (((/* implicit */unsigned int) (signed char)39))))))))));
                                var_14 *= ((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_18 [i_7] [i_7] [22] [i_7] [i_7 - 1]);
                                var_16 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_18 [i_0] [i_1] [i_5] [i_1] [i_7 + 1]) : (1871589156U)))));
                            }
                        } 
                    } 
                } 
                var_17 *= ((/* implicit */short) var_10);
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) (signed char)39);
}
