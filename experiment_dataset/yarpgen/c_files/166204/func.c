/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166204
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 1]));
        var_21 -= ((/* implicit */short) ((arr_0 [i_0] [i_0 + 1]) + (var_3)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (short)-31080));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */_Bool) var_18);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_2 - 3] [i_2] [i_2] = ((/* implicit */unsigned short) ((1157505641U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))));
                            var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_1 - 1] [i_2 - 2]));
                            arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_0] [i_2]) && (((/* implicit */_Bool) (unsigned char)229))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)229)) << (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 - 1] [i_2 - 1])))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((arr_3 [i_1 - 2]) ^ (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)127))))))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((arr_7 [i_2] [i_2 - 2] [i_3] [i_3] [i_5]) || (((/* implicit */_Bool) (signed char)127))));
                            arr_18 [i_0 - 3] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_5 - 2] [(_Bool)1] [i_5 + 2] [(signed char)0] [i_5])) % (((/* implicit */int) arr_7 [i_5 - 2] [i_1] [i_5] [i_5] [i_1]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((((/* implicit */_Bool) (signed char)114)) ? (2894323101U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
}
