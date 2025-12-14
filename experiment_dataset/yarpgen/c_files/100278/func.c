/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100278
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
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) : (((long long int) max((6594668317310600330LL), (((/* implicit */long long int) arr_0 [i_0] [i_1 + 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 - 2])) : (-6594668317310600332LL)));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (var_11))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])))))));
                }
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((int) ((((((/* implicit */_Bool) -8136066532671891754LL)) || (((/* implicit */_Bool) (unsigned char)64)))) ? (((((/* implicit */_Bool) -9223372036854775782LL)) ? (var_15) : (((/* implicit */long long int) -2147483627)))) : (arr_4 [i_0 - 1]))));
                    arr_12 [i_0] = ((/* implicit */long long int) var_14);
                    arr_13 [i_0] [i_0] [i_3 - 1] [i_0] = max((arr_5 [i_0 - 3] [i_0] [i_1 + 3] [i_3 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -6594668317310600332LL))))));
                }
            }
        } 
    } 
}
