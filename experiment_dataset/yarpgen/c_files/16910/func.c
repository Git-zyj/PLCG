/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16910
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
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), (var_2)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) min(((unsigned char)234), (((/* implicit */unsigned char) (signed char)-111))))) << ((((~(arr_4 [i_0 - 1]))) + (2120786160)))));
                    arr_9 [i_0] [i_0] [0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) || (((/* implicit */_Bool) var_9))))), ((~(((/* implicit */int) (unsigned short)65535))))));
                    var_13 = ((/* implicit */int) var_3);
                    arr_10 [i_0] [0ULL] [0ULL] [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [(short)12] [(short)12]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            {
                arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_3]);
                arr_18 [i_3] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
}
