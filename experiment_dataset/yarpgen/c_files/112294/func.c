/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112294
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
    var_20 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_19)) : ((~(var_15)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9600341394604885080ULL)) ? (((/* implicit */long long int) 2261829968U)) : (var_13)))) - ((+(var_3)))))) ? (arr_12 [(unsigned char)12]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (min((arr_0 [i_2] [i_4]), (((/* implicit */unsigned int) var_8)))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned char)20] [i_2] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0 - 3] [i_1] [i_2] [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : ((~(var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_9)), (arr_5 [i_2 + 3] [i_1] [i_2 + 3]))))) : (max(((-(2261829968U))), (((/* implicit */unsigned int) ((unsigned short) arr_5 [i_3] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned char) var_3))) ? (max((((/* implicit */unsigned int) var_14)), (arr_3 [(unsigned short)12] [i_2 + 1]))) : ((~(48277497U))))), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_23 = var_16;
}
