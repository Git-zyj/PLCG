/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100291
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) & (((/* implicit */int) var_10)));
                                var_20 = (signed char)24;
                                var_21 = ((/* implicit */short) (((((~(15298067581421740864ULL))) <= (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4 + 1] [i_4] [i_3 - 2])))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_2] [i_3]))))))) : (((((/* implicit */int) var_7)) << (((arr_10 [i_0] [i_1] [i_0] [i_2]) - (1083742953568642670LL)))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_3 [i_3 - 2])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_23 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_2] [i_0]))))) : (((var_12) << (((((/* implicit */int) var_7)) - (22471))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1784027054)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(2662858414059512532ULL)))))) ? (3716202208U) : (((/* implicit */unsigned int) arr_3 [i_5]))));
                                var_25 = ((/* implicit */unsigned int) var_17);
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-1853005004))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && ((!(((/* implicit */_Bool) var_5))))))) : ((+(((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) var_3)))))))));
    var_28 *= var_18;
}
