/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155289
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~((-((~(((/* implicit */int) var_7)))))))))));
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) var_2);
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) / (arr_1 [i_0])))), (((((var_8) + (9223372036854775807LL))) >> (((arr_4 [(signed char)3] [(short)5]) + (4390510443140658359LL))))))))));
                        var_18 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)4096)) / (((/* implicit */int) (short)4123)))));
                        arr_10 [(_Bool)1] [i_3] [i_1 - 4] [i_3] [7LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_3 [i_3] [2ULL])), ((+(var_10)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_2))));
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))));
            var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-4096))));
        }
        var_22 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
        var_23 *= ((((/* implicit */_Bool) arr_1 [(short)10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_4 [i_0] [i_0 - 1]) + (9223372036854775807LL))) << (((var_4) - (6050192824488892258LL))))))))) : (((/* implicit */int) (signed char)-1)));
    }
}
