/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110265
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1979839040))))));
    var_21 |= ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((arr_1 [i_1]) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))))))) << ((((~(arr_4 [i_0] [i_1] [i_1]))) + (620416060))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_23 += ((/* implicit */int) ((((int) arr_12 [i_0] [i_1])) > (((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_2])) != (arr_7 [i_0] [13] [(signed char)19]))))));
                            arr_14 [i_4] [i_2] [i_2] [i_2] [i_0] = ((unsigned char) arr_10 [i_0] [3ULL] [i_1] [3ULL] [17ULL] [i_1]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                        }
                        var_24 -= ((/* implicit */long long int) arr_12 [i_1] [i_0]);
                    }
                    var_25 += ((/* implicit */unsigned char) arr_8 [(unsigned char)14] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
