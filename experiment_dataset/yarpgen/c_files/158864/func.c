/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158864
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
    var_17 = ((/* implicit */signed char) ((unsigned char) var_0));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */signed char) var_13);
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)47349)) & (((/* implicit */int) (signed char)44)))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)64480)))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_12)));
                                var_23 ^= ((/* implicit */int) ((unsigned int) 9897690444635342002ULL));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
