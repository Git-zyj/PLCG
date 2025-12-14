/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117256
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 3529950158U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) -170272532);
                                arr_14 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((1382755292449954453LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_4);
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_17 = ((/* implicit */int) arr_24 [i_0] [i_1] [i_5 + 2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((arr_8 [i_5 + 2] [i_5] [i_5]) / (arr_8 [i_5 + 2] [i_1] [i_5 - 2])));
                }
                var_19 = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_8);
}
