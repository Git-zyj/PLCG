/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136343
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
    var_18 = ((/* implicit */unsigned short) 3894538001U);
    var_19 = min((((/* implicit */int) var_2)), ((-(((/* implicit */int) max((var_1), (((/* implicit */short) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [21U])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_8 [(unsigned char)9] [i_1] [i_3 + 2])) * (((/* implicit */int) arr_10 [(unsigned short)20] [(unsigned short)20])))))));
                        arr_13 [i_1] = ((/* implicit */unsigned int) (-(var_11)));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_1]);
            var_22 = ((/* implicit */unsigned short) (+(arr_1 [i_1 + 1])));
            arr_14 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))));
        }
    }
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) 
    {
        arr_19 [i_4] = var_6;
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) arr_1 [i_4]);
    }
}
