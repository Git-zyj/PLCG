/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143991
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((_Bool) arr_2 [i_1]);
                    arr_8 [i_2] &= ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_1])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_4] = ((/* implicit */long long int) 400360824U);
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((unsigned char) (((((~(((/* implicit */int) arr_17 [i_3] [i_5])))) + (2147483647))) << (((((unsigned int) var_1)) - (2871107801U))))))));
                    var_14 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_13 [i_3] [i_3] [i_3])));
                    arr_18 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) 400360829U);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_1);
}
