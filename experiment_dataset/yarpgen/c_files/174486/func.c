/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174486
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
    var_14 |= ((/* implicit */unsigned char) ((_Bool) ((((unsigned int) var_8)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (1710369783) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) var_4);
                var_15 = ((/* implicit */unsigned int) var_1);
                arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((arr_4 [i_1]) >> (((((/* implicit */int) var_12)) + (3830)))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) var_4);
                arr_9 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned char) arr_1 [(signed char)8] [(signed char)8]);
            }
        } 
    } 
    var_16 -= ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_14 [i_2] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2])))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_1 [i_2] [(unsigned char)9]))) * (((((/* implicit */_Bool) ((arr_2 [7LL] [(signed char)10] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) 2611088824U)), (var_10)))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3])) - (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_3])) <= (var_9))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (short)31744))));
        var_21 = ((unsigned int) arr_16 [i_3] [i_3]);
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_25 [6U] [(unsigned short)15] [(unsigned char)9] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_21 [i_3] [(unsigned char)7] [i_5] [i_5]))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) 644096288U)) && (((/* implicit */_Bool) var_1)))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3])) ? (2699331128U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))) + (((/* implicit */unsigned int) arr_17 [i_5 + 1]))));
                    }
                } 
            } 
        } 
    }
}
