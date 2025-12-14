/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107881
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
    var_18 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (15278532321001915010ULL))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_10 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 - 4] [i_4 - 4] [i_3]))));
                                arr_12 [i_0] [i_0] [9LL] [10] [(short)8] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_4 - 3] [i_2] [i_0] [i_4])) ? (((/* implicit */int) (unsigned short)7329)) : (((/* implicit */int) arr_10 [i_0] [i_4 + 2] [i_2] [i_4 + 2] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = (~(((/* implicit */int) arr_6 [i_0] [16ULL] [16ULL] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1)))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))) : (2446203443U)))) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) var_4)))))));
        arr_15 [i_5] = ((/* implicit */long long int) (-((-(1048575ULL)))));
        var_23 = ((arr_4 [i_5] [i_5] [i_5]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
    }
}
