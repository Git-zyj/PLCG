/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137888
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
    var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)70)), ((unsigned char)3)))) : (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)22)))))), (2110188674)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)10637)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0 - 2] [(signed char)6] [16U] [i_2 + 1]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (6237704113960778398ULL)))))));
                    arr_8 [i_1] [2U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-33)) ? (3104663631U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14017)))));
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_3 [i_0] [i_2 - 1]))))))) ? (min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)13064)) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (signed char)57)) * (((/* implicit */int) arr_1 [i_0 - 1])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_0 [i_0] [i_0]))) < (arr_0 [i_1] [i_1])))));
                }
            } 
        } 
    } 
}
