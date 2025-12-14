/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159272
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_2 [i_1]))));
                var_13 -= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17957)) ? (((/* implicit */int) var_1)) : (arr_3 [i_0] [i_0]))))))), (arr_1 [i_1])));
                var_14 = ((/* implicit */long long int) arr_4 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_1] [15LL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3] [(_Bool)1] [i_0] [i_1]))))) : (min((arr_9 [i_3] [i_0] [i_2] [i_0 - 4] [i_0] [i_0 - 4]), (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)14] [i_3]))))));
                            arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [0ULL] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 += ((/* implicit */long long int) ((var_6) & (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */short) ((int) max((((((/* implicit */_Bool) (unsigned char)78)) ? (5948268905891120029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21733))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))))));
}
