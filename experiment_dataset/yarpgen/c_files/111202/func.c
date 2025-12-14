/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111202
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
    var_11 += ((/* implicit */unsigned short) var_0);
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((arr_1 [i_0]) % (arr_1 [i_0]));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((arr_0 [i_0 + 2]) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        var_15 = ((/* implicit */short) arr_0 [i_0 - 1]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))));
        var_16 = ((/* implicit */unsigned int) (+(arr_1 [i_1])));
        arr_5 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))) != (((/* implicit */unsigned long long int) var_0))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((short) arr_6 [i_2 - 1] [i_2] [i_2]));
                        var_18 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)20983))));
                    }
                } 
            } 
            var_19 &= ((/* implicit */short) ((signed char) ((unsigned int) (unsigned short)20987)));
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) arr_0 [15LL]);
        var_21 *= (!(((/* implicit */_Bool) arr_2 [i_5])));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((4895320595727670LL) != (((/* implicit */long long int) ((/* implicit */int) (short)25298))))))));
    }
    var_23 = ((/* implicit */unsigned int) var_2);
}
