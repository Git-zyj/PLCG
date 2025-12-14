/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170313
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (min((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1ULL))), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */short) (-((~(((/* implicit */int) arr_6 [i_0] [(short)1] [i_0] [(short)1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(min((var_9), (((/* implicit */int) arr_6 [i_4 + 2] [i_3] [i_2] [i_0 - 4])))))))));
                                arr_15 [i_1] [1] [22LL] [i_0] [i_4 - 1] [i_1] = ((/* implicit */unsigned long long int) (short)-10033);
                                var_16 = max((((((/* implicit */int) arr_0 [i_0 - 3] [i_4 - 1])) % (((/* implicit */int) arr_0 [i_0 - 3] [i_4 - 1])))), ((-(((/* implicit */int) var_10)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [(unsigned short)12] &= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_8 [i_4 + 2] [i_0 - 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 - 1])))))));
                                var_17 = ((/* implicit */long long int) ((signed char) (_Bool)1));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_1] [i_0 + 1] [i_2] [i_0] [i_2] [i_2] [i_0 + 1])))) ? (((/* implicit */int) arr_2 [i_2])) : (-1545345427)))) ? ((-(((/* implicit */int) (unsigned char)211)))) : (((/* implicit */int) arr_7 [i_2] [i_2] [(signed char)6] [i_2]))));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) >> ((((-(arr_9 [i_0 - 3] [i_0 - 1] [3LL] [i_0 - 1]))) - (5676347556281513799ULL)))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */_Bool) (~(var_7)));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_6))));
}
