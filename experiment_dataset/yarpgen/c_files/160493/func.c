/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160493
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) - (((/* implicit */int) var_11))))) - ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_3)))))));
    var_16 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4418))))) ? ((+(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((arr_4 [5U] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [15LL] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [(_Bool)1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [12ULL] [i_0]))))))))))));
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1])))))));
                                arr_15 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [(unsigned char)6] [i_3]))))) | ((~(-5001440832769965783LL)))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned char)2] [i_2] [i_3] [i_4])))) | (((((/* implicit */int) arr_12 [i_0] [i_1] [12ULL] [i_3] [i_4])) ^ (((/* implicit */int) arr_0 [i_0] [(unsigned char)4]))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_4])) ? (((((/* implicit */_Bool) arr_7 [(unsigned char)12] [i_2] [i_3])) ? (arr_11 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
