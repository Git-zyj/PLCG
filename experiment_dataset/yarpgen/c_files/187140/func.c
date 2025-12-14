/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187140
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_2]))))) ? ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0])))) : (max((((/* implicit */int) var_8)), (arr_5 [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)4394)) >> (((((/* implicit */int) var_5)) - (3580)))))))) : (((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_7))) >> (((var_6) + (392996421)))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_2] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2 + 2]))) : (var_7))))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_2))));
                    var_14 -= ((/* implicit */short) (-(((int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                }
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164)))))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) var_1))))) : ((-(((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) arr_2 [i_0] [(short)11])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 24; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [14] [i_4])))));
                var_17 = ((/* implicit */long long int) (~((((_Bool)0) ? (((/* implicit */int) arr_13 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_4 + 1]))))));
            }
        } 
    } 
}
