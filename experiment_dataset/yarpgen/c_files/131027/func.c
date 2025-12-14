/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131027
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-69)), (arr_3 [i_0] [i_1] [i_2]))))) | ((~(arr_2 [9LL] [i_2])))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))) ? (arr_2 [i_0] [i_0]) : (min((((/* implicit */unsigned long long int) 3465317470915675236LL)), (arr_2 [i_0] [i_1])))));
                    var_11 = ((/* implicit */_Bool) min((var_11), (arr_0 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-69))));
                                arr_14 [i_0] [(short)9] [i_0] [i_3] [i_4 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_9);
}
