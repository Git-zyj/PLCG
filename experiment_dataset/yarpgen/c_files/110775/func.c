/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110775
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_16)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (min((((/* implicit */unsigned int) (signed char)40)), (((arr_7 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)4))))))) : (max((arr_7 [4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((arr_7 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25940)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_12))))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) min((((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0])), (var_11)))), (((((/* implicit */_Bool) 14003609098346549970ULL)) ? (-3079692829459608599LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17))))))));
    }
}
