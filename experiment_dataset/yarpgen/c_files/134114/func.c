/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134114
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [6U] [i_0])))))));
        var_13 -= ((/* implicit */short) arr_1 [17ULL] [i_0]);
        arr_3 [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) (-((+(max((((/* implicit */unsigned int) var_5)), (arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */int) (short)21947)) / (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) var_10);
        var_14 = ((/* implicit */unsigned char) ((arr_1 [i_1 - 1] [i_1 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 2])))));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3])) < (((/* implicit */int) arr_5 [i_1] [15]))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_21 [(unsigned char)5] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (short)21947)) << (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (2105386755U))) - (658250645U)))));
                        var_15 = ((/* implicit */unsigned int) (short)28322);
                        arr_22 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (short)21947))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        arr_27 [i_5] [i_5] = ((/* implicit */short) (~(arr_1 [i_5 + 2] [i_5 + 1])));
        var_17 = ((/* implicit */short) arr_26 [i_5 - 1]);
    }
}
