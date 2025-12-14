/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118780
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */int) var_9);
                    var_11 &= ((/* implicit */signed char) ((((((var_1) ^ ((+(((/* implicit */int) (_Bool)0)))))) + (2147483647))) >> (((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (arr_3 [i_1] [i_1] [(_Bool)1])))) ? (((arr_3 [(signed char)1] [i_1] [(signed char)4]) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))) - (141)))));
                    arr_9 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = (~(((arr_12 [i_3]) ? (((/* implicit */int) var_3)) : (var_1))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_3])) * (arr_10 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_4]) ? (var_4) : (((/* implicit */int) (unsigned char)8))))) ? (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) arr_12 [i_4]))));
        var_13 *= ((/* implicit */_Bool) (+(((arr_15 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : (((/* implicit */int) (unsigned char)133))))));
    }
    var_14 = (_Bool)1;
}
