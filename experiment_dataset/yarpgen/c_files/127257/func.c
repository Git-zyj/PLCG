/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127257
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : ((+(arr_3 [i_2] [i_2])))));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)9)), ((-(((/* implicit */int) arr_0 [i_0])))))))));
                }
                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)11673)) ? (max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)242)))) : (((/* implicit */unsigned int) 1971313231)))) >> (((((/* implicit */int) (signed char)-96)) + (100)))));
                arr_8 [i_0] [8U] [i_0] |= ((/* implicit */int) ((max((((/* implicit */long long int) arr_1 [4LL])), (7847993766716947908LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)0])) && (((/* implicit */_Bool) arr_1 [2]))))))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_6 [i_0] [i_0]))))));
            }
        } 
    } 
    var_22 += (~(((((/* implicit */int) var_2)) >> (((var_3) + (1898265247))))));
    var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (-564137333))), (((/* implicit */int) var_9)))))));
}
