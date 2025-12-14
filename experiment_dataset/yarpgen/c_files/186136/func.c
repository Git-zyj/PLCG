/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186136
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
    var_10 = ((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) + (0U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
        var_12 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_0]));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) var_1);
                        arr_10 [(_Bool)1] [i_1] [17LL] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -2120797924)) : (arr_5 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_15 |= ((/* implicit */unsigned char) (+(var_9)));
        arr_14 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4]))));
    }
}
