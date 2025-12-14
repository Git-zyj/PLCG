/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170262
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_9))));
    var_12 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 - 3] [(signed char)20] [i_2] &= ((/* implicit */unsigned long long int) -3314678508493415596LL);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_11 [(_Bool)1] [i_1] [i_4] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) -3314678508493415596LL);
                                var_13 ^= ((/* implicit */long long int) (_Bool)1);
                                arr_12 [i_1] = arr_4 [18U];
                                var_14 ^= var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 4; i_5 < 20; i_5 += 2) 
        {
            for (short i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_22 [i_0] [i_5] = (signed char)-1;
                        arr_23 [i_0] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_3))))) + (min((((/* implicit */long long int) (unsigned short)16161)), (17592186044415LL)))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49375))) : (3314678508493415607LL)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))));
        arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (var_10) : (arr_4 [i_0 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [(short)11] [i_8] [(short)11]))) - (3314678508493415622LL)))) ? (((/* implicit */int) (signed char)16)) : (((((/* implicit */_Bool) -3314678508493415607LL)) ? (((/* implicit */int) (unsigned short)49375)) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8]))))));
        var_17 |= ((/* implicit */short) var_7);
    }
    var_18 = ((/* implicit */short) ((((((/* implicit */int) var_4)) + (2147483647))) << (((min((((((/* implicit */_Bool) (unsigned short)49376)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) : (3067498423U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (var_5)))))) - (1U)))));
}
