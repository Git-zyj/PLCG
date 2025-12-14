/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112530
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))) ? (((arr_7 [i_0]) >> (((arr_3 [i_1]) - (16765145921405946893ULL))))) : (max((arr_7 [i_1]), (arr_7 [i_0]))))))));
                arr_8 [3ULL] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0]))) ^ (min((arr_3 [i_0]), (arr_3 [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_2] [i_5] [i_4])) * ((+(((/* implicit */int) arr_16 [(unsigned char)16] [(unsigned char)16] [i_5] [(unsigned char)16]))))));
                                var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_2])))) >> (((((18446744073709551609ULL) >> (((arr_21 [i_2] [16ULL] [i_4] [i_5]) - (3146384605767212358ULL))))) - (1048565ULL)))));
                            }
                        } 
                    } 
                    arr_25 [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_8);
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_19 [i_2] [i_2] [i_4]))) ^ (((((/* implicit */int) arr_11 [i_3] [i_4])) >> (((((/* implicit */int) arr_11 [i_2] [i_3])) - (150)))))));
                    var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_3] [(unsigned char)15])))));
                }
            } 
        } 
    } 
}
