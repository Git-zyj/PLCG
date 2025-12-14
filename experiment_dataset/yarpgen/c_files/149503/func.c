/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149503
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)239)) == (var_11))))))) : (max((var_19), (((/* implicit */long long int) var_9)))))))));
    var_21 -= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) max(((unsigned char)10), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [(unsigned char)0] [i_1])) >= (((/* implicit */int) (unsigned short)5743)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */short) (unsigned char)253)))))))) : (max(((-(((/* implicit */int) (unsigned short)5743)))), (arr_1 [i_0])))));
                var_23 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)245))));
                var_24 ^= ((/* implicit */unsigned short) (((~(arr_1 [i_0]))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)21521), (((/* implicit */short) (signed char)-102))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)247)), (arr_2 [(_Bool)1]))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (1365066537U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)56)), (var_1)))))))));
            }
        } 
    } 
}
