/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174563
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        var_13 ^= ((/* implicit */signed char) ((((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) << ((((+(((/* implicit */int) arr_9 [i_0] [i_1] [(short)3] [i_2] [i_3])))) - (20883)))));
                        var_14 |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 4097377370U)))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3 + 1])) * (((/* implicit */int) arr_6 [i_3 - 4]))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9262)) ? (3601645702U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9261)))));
                                arr_14 [i_2] [(short)10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((arr_12 [i_0] [16ULL] [i_2] [i_4] [i_5]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4] [(unsigned char)20])) : ((~(var_1)))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_4] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1])) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)11] [i_2 - 1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_4] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2 - 1] [i_4] [(short)15]))) : (arr_10 [i_0] [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_2] [(signed char)1]))) : (var_9))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) -463688200)) || (((/* implicit */_Bool) ((long long int) (short)-9289)))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */_Bool) (short)3045);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            {
                arr_22 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) arr_19 [i_7]);
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)27336)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65514)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6])))))) ? ((~(18LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 + 1]))))))));
            }
        } 
    } 
    var_20 += ((_Bool) min((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_8))))));
    var_21 |= (-(((var_1) & (((/* implicit */int) ((signed char) var_9))))));
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        for (short i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) arr_21 [i_9 + 3] [i_9 + 3] [i_9 + 1]);
                var_23 += ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) var_10))), ((+(((unsigned int) -9LL))))));
            }
        } 
    } 
}
