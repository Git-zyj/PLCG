/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179703
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) var_5);
                            var_12 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                            var_13 += ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_7))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                                var_15 = ((/* implicit */unsigned long long int) var_4);
                                var_16 -= ((/* implicit */_Bool) (~(((507078624U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4216)))))));
                                arr_13 [(signed char)2] [i_0] [(signed char)2] = ((/* implicit */int) ((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            }
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61290)))))) << (((((/* implicit */int) var_3)) - (62605)))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned char) var_1);
    var_18 = ((/* implicit */short) var_4);
}
