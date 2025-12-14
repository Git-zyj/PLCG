/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124578
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
    var_18 = (-(((/* implicit */int) var_14)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) (-(((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_10 [i_2] [i_1] [(signed char)6] &= ((/* implicit */int) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2007))) * (var_12))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_4)))))))));
                }
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) -1003750859))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)2343))))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) -1003750859);
                    var_22 ^= ((/* implicit */unsigned long long int) 1003750852);
                    var_23 = ((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0] [i_3]);
                }
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_24 = max((((((/* implicit */_Bool) var_8)) ? (((var_15) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1003750859) == (1003750839))))))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_4]))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -1003750871))) ? (var_15) : (arr_15 [i_0 - 1] [i_0 + 3] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1003750846))))) : (((/* implicit */int) ((_Bool) (~(arr_6 [i_0] [i_1] [i_1])))))));
                    var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)114))));
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1003750842);
                }
            }
        } 
    } 
}
