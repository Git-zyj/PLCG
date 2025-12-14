/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141453
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-29972)) + (2147483647))) << (((((var_12) + (871798785))) - (14)))))))))));
                var_15 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) arr_3 [(short)8]))))) ? (min((((/* implicit */int) var_4)), (-937045361))) : (((int) var_13)))) / (((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */int) (_Bool)1);
        arr_9 [i_2 + 1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-21)) + (((/* implicit */int) (_Bool)1))))) ? (657806669U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) || (((/* implicit */_Bool) 10036299291560753532ULL)))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(8388607))) : (((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> (((1393995577U) - (1393995566U))))))))));
        var_16 = ((/* implicit */signed char) arr_6 [(short)18]);
    }
    var_17 = ((/* implicit */signed char) ((_Bool) 2772864038U));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) (short)1398))) ? (((unsigned long long int) (signed char)45)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) - (((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) (short)-12204)))))) ? (((/* implicit */unsigned long long int) var_12)) : (14943500928047249136ULL)))));
    var_19 ^= ((/* implicit */int) var_13);
}
