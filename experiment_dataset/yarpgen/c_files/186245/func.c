/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186245
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_0 [i_1]);
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_4)) - (222)))))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (arr_1 [i_0 - 1])))), (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((~(arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_1]))))))));
                    var_12 += arr_4 [i_0] [i_0] [i_1] [7U];
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_2)), ((((((+(-6975245452031895139LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)1029)) - (1010)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (min(((-(var_6))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_7), (min((((/* implicit */long long int) 3330074823U)), (6975245452031895139LL)))));
}
