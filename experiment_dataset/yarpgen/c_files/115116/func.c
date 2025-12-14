/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115116
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
    var_13 += ((/* implicit */int) var_8);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((var_9) - (748929728)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2]))))) != (((/* implicit */int) (unsigned short)65533)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4 - 1]))))));
                                arr_14 [i_0] [(signed char)22] [i_2] [(short)22] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_4] [20ULL] [(signed char)21] [(unsigned char)12])), (arr_2 [i_0] [0] [i_2])))) && (((/* implicit */_Bool) arr_3 [18] [i_0]))))), (arr_1 [i_0] [i_0])));
                                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3] [i_1])) && (((/* implicit */_Bool) ((((arr_0 [i_4 - 1] [i_0]) << (((((/* implicit */int) (unsigned short)65529)) - (65474))))) >> (((((/* implicit */int) arr_1 [17] [i_1])) - (30642))))))));
                            }
                        } 
                    } 
                } 
                var_17 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)65512)) == (((/* implicit */int) (unsigned short)2))));
                arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10)) * (((/* implicit */int) arr_9 [i_0] [10] [i_0] [(signed char)5]))));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (7094865625871433955ULL)));
                            var_18 += ((/* implicit */signed char) arr_17 [(signed char)22] [(signed char)22] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = var_1;
}
