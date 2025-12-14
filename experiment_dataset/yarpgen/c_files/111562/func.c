/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111562
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
    var_13 = ((/* implicit */short) var_3);
    var_14 = ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((1094805767), (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_4 [(unsigned short)4] [i_1]))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) -1094805754))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_7 [(short)9] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1])))) ? (((arr_4 [i_1] [i_1]) / (arr_4 [i_1] [i_1]))) : (((/* implicit */int) min(((signed char)4), (((/* implicit */signed char) (_Bool)1)))))));
                    arr_8 [i_2] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (arr_6 [i_1 - 1] [i_1 - 3]) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)4)) / (((/* implicit */int) var_9)))))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)419)))))))));
                    var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2]))))))))));
                    var_18 &= ((/* implicit */long long int) (((-((~(((/* implicit */int) (signed char)-124)))))) >= ((~(((/* implicit */int) (signed char)-21))))));
                    var_19 ^= ((/* implicit */unsigned char) (short)63);
                }
            }
        } 
    } 
}
