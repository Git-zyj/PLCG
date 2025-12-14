/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155075
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((unsigned short) (unsigned char)115));
                    arr_9 [8] [8] [i_1] [i_2] = ((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) - (23873)))));
                    arr_10 [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [i_0] [i_2 - 2])), (arr_2 [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [(short)13] [i_1 + 1] [i_2] [i_2 + 1]))))) : (arr_2 [4] [i_1 - 1]));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)104)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_11 [i_3 + 1])))) : (((/* implicit */int) (signed char)6))));
        var_19 = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_5 [14U] [i_4])))));
        arr_16 [i_4] [4ULL] = ((/* implicit */long long int) ((unsigned char) arr_0 [(unsigned char)1]));
    }
}
