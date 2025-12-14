/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15619
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */int) var_6);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 1]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1407146457)) ? (((/* implicit */int) (short)25824)) : (((/* implicit */int) (unsigned char)108))));
                        var_22 = ((/* implicit */int) min((var_22), ((~(((arr_4 [i_0] [i_3]) / (arr_6 [i_3])))))));
                    }
                    for (long long int i_4 = 4; i_4 < 19; i_4 += 4) 
                    {
                        arr_16 [i_1 + 4] [i_0] [i_1 + 4] [i_0] = ((/* implicit */unsigned long long int) ((arr_9 [i_0 - 3] [i_1 + 3] [i_2] [i_4 - 3]) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 1]))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)147)) | (28672)));
                    }
                }
            } 
        } 
        arr_17 [i_0] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 2689633297142641948ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) var_12)));
    }
    var_24 -= ((/* implicit */signed char) (-((+(((unsigned int) (_Bool)1))))));
}
