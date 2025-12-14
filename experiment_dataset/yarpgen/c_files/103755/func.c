/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103755
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
    var_16 = ((/* implicit */long long int) 1724856525);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [(unsigned short)15] [(signed char)1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (-1724856507)));
                                arr_13 [i_2] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_3]);
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 1] [i_1 - 1] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_8 [(signed char)12] [i_1 + 1] [20U] [i_2]) : (arr_8 [i_0] [i_1 - 1] [i_2] [i_1 - 1]))) : (max((((/* implicit */long long int) var_11)), (arr_8 [i_0] [i_1 - 1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_14);
}
