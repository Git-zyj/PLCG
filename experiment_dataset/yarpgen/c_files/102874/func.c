/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102874
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
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((unsigned char) var_5)), (((/* implicit */unsigned char) ((signed char) var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] |= ((/* implicit */unsigned short) -529515942);
                                var_14 = ((/* implicit */long long int) arr_10 [i_4] [i_4] [i_1] [i_4] [i_4] [i_3] [i_4]);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((unsigned long long int) arr_11 [i_4] [i_3] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned char) ((signed char) (signed char)13));
            }
        } 
    } 
}
