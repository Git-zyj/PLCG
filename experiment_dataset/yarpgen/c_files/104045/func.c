/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104045
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) var_2);
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (arr_11 [i_3] [i_3 + 2] [i_3 + 2])));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 3] [i_3 - 1]))))) ? (max((min((var_0), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((unsigned short) var_3))))) : (((/* implicit */unsigned long long int) (+(((-2147483632) % (((/* implicit */int) (short)11826)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_10);
                                var_23 = ((/* implicit */unsigned long long int) (~(max((arr_5 [i_1] [i_1]), (((/* implicit */int) var_10))))));
                                arr_18 [i_1] [i_2] [i_3] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) (+(2147483640)));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((long long int) (-2147483647 - 1)))))))))));
                            }
                        } 
                    } 
                }
                var_25 *= ((/* implicit */signed char) 0U);
                var_26 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 301535779148036672ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (var_2)))))));
            }
        } 
    } 
}
