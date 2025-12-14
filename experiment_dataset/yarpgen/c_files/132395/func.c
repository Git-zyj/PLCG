/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132395
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((signed char) (unsigned char)251)), (((/* implicit */signed char) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (var_9)));
    var_15 *= 1007493272U;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-16402)) + (2147483647))) << (((((long long int) 184828516U)) - (184828516LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)49)) <= (((/* implicit */int) (unsigned short)35917))))) < (((/* implicit */int) (unsigned char)129))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] [(unsigned char)7] [i_3] [i_2] = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_3] [8])) : ((+(((/* implicit */int) (unsigned short)54398)))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63299))) < (3287474024U)));
                            arr_17 [i_2] = ((/* implicit */short) (unsigned short)16079);
                            arr_18 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2]))));
                        }
                    }
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-65)) <= (((/* implicit */int) (signed char)-39))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (4110138765U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2]))))))));
        arr_20 [i_0] = ((/* implicit */int) (-(((893512775U) >> (((((/* implicit */int) (unsigned char)137)) - (137)))))));
    }
}
