/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165913
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */short) ((arr_0 [i_3 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2 - 2]))));
                        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */short) var_8);
            arr_13 [i_1] = ((/* implicit */_Bool) ((short) (_Bool)1));
            arr_14 [i_0] [i_0] [i_0] = ((var_4) ^ (((/* implicit */unsigned long long int) arr_1 [i_1])));
        }
        arr_15 [i_0] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_15 -= ((/* implicit */unsigned int) var_5);
        var_16 = (~(arr_1 [i_4 + 2]));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
    var_18 = ((/* implicit */_Bool) var_10);
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)228))));
    var_20 = ((/* implicit */unsigned long long int) (short)177);
}
