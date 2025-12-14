/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106155
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
    var_19 = ((/* implicit */_Bool) (unsigned char)195);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [3LL] [3LL] [6U] = ((/* implicit */_Bool) min((((arr_4 [i_0]) << (((((arr_1 [i_0]) + (171907368))) - (6))))), (((/* implicit */long long int) arr_2 [6U]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 6; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)3] [i_1] [9] [i_1] [(signed char)2])) ? (arr_10 [i_3 + 3] [i_2 - 4] [6] [i_2] [1LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_3 - 4] [i_0])))))) ? ((+(arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]))) : (((arr_10 [i_1] [i_2 + 2] [i_1] [i_2 + 2] [i_3] [i_0]) / (arr_10 [i_3] [6U] [6U] [6U] [6U] [6U])))));
                            var_21 ^= ((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [i_2] [i_2]);
                            arr_11 [3ULL] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)6461);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            {
                var_22 = max((3923419139U), (10U));
                var_23 = ((/* implicit */int) var_12);
                var_24 ^= ((/* implicit */unsigned int) arr_14 [10LL]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((long long int) var_6));
}
