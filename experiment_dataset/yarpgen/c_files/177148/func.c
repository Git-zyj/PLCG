/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177148
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (min((939049888), (((/* implicit */int) var_9))))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (arr_0 [i_2] [i_2])))) == (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [8ULL] [i_1] [i_0])))))))));
                }
                var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_4))))) : (min((3711364160U), (((/* implicit */unsigned int) arr_7 [(unsigned char)16]))))))) ? (min((((/* implicit */unsigned long long int) 6U)), ((~(97422629929921414ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_7))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_7);
    var_12 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) min(((short)-1), (((/* implicit */short) var_3))))))))));
}
