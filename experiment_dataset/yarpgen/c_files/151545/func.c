/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151545
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
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((arr_1 [i_0 - 3] [i_0 - 3]) <= (((/* implicit */int) (unsigned short)15644))))), ((+(arr_1 [i_0 - 3] [i_0 + 1])))));
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((var_10), ((unsigned char)178))))) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) max((max(((unsigned short)21850), (((/* implicit */unsigned short) (unsigned char)204)))), (((/* implicit */unsigned short) (unsigned char)64)))))));
                                var_18 = ((/* implicit */short) ((var_12) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 3] [i_0 - 2]))) + (13245394925162877480ULL))) - (13245394925162877499ULL)))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_0 - 3] = ((/* implicit */unsigned short) max(((signed char)14), ((signed char)-63)));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)11))));
    }
    var_20 = ((var_5) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)77)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)221)) % (((/* implicit */int) var_16))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)77)) & (((/* implicit */int) (unsigned char)178))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) min((max(((unsigned short)21850), (((/* implicit */unsigned short) (unsigned char)35)))), (((/* implicit */unsigned short) var_11))))) : ((~(max((2147483647), (((/* implicit */int) (unsigned char)215))))))));
}
