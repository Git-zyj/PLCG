/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150423
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
    var_19 = ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */unsigned int) max((-2147483638), (((/* implicit */int) (unsigned char)242))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */long long int) arr_7 [i_0 - 1] [(signed char)18] [i_0] [(short)6] [i_4]);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_3 [i_4] [i_4]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [12] [i_2])) ? (((/* implicit */unsigned int) var_14)) : (arr_8 [i_0 + 1] [i_0] [i_2] [22ULL] [i_0 + 1])))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (unsigned short)3389)) : (((/* implicit */int) (unsigned short)3389))));
}
