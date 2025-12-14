/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118073
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_7 [i_2]))))) ? (((long long int) var_1)) : (((/* implicit */long long int) 2327763411U)))) * (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 3]))) / ((+(18446744073709551615ULL)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_4 [16U])) ? (((int) arr_0 [i_0])) : (((/* implicit */int) var_2))))));
                    arr_10 [i_2] |= arr_1 [i_0];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_17))))) & (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_4])) + (var_11))) + (((/* implicit */int) ((unsigned char) arr_12 [i_3])))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_3]), (((/* implicit */unsigned char) var_14)))))) : (((unsigned int) var_10))))) || (((/* implicit */_Bool) var_10))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    arr_20 [i_4] = ((/* implicit */short) arr_13 [4U]);
                    arr_21 [i_3] = ((/* implicit */short) arr_14 [i_3]);
                }
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) - (arr_18 [i_6 - 2] [i_3] [i_3] [i_3]))), (((((arr_17 [i_3] [i_4] [i_6 - 2]) + (((/* implicit */unsigned int) arr_19 [i_3] [i_4])))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (1967203885U))))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [(short)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)26581)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) * (var_10))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    var_23 = ((arr_18 [i_6 - 2] [i_4] [i_3] [i_3]) + (2327763407U));
                    var_24 = ((/* implicit */short) var_11);
                }
                arr_24 [i_3] [i_3] [i_3] &= arr_17 [i_4] [i_3] [i_3];
                arr_25 [i_4] = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((var_5) * (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))))))))));
}
