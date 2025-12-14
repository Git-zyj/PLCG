/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107334
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
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) max((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 1] [i_0 + 1])));
        var_19 -= ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * ((-(0U)))))), (arr_0 [5LL] [i_3 + 1])));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-106))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) (_Bool)1);
    }
    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) arr_15 [i_4 + 1] [i_4])))));
        var_22 = ((/* implicit */int) min(((short)(-32767 - 1)), ((short)32767)));
    }
}
