/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105222
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
    var_12 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)85));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) (short)8212);
                    arr_9 [i_0] = ((/* implicit */_Bool) (unsigned char)85);
                    arr_10 [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((_Bool) min(((unsigned char)170), (((/* implicit */unsigned char) (signed char)120))))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) (unsigned short)49863)) % (((/* implicit */int) (unsigned char)170))))));
                    arr_11 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((788663565U) >> (((((/* implicit */int) var_2)) + (53)))))), (14186056046153552049ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) var_10);
                                arr_18 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_10);
    var_16 &= ((/* implicit */signed char) 1132538490);
}
