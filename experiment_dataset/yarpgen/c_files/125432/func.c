/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125432
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((unsigned short) (short)2875))), ((~(((/* implicit */int) (short)-12675)))))) >> (((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])))))))) - (7106204850180618306ULL)))));
                    arr_9 [i_0] [i_0] [i_2 - 1] |= ((/* implicit */unsigned int) var_3);
                }
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) != (var_2))))));
                var_16 = ((/* implicit */unsigned int) var_11);
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1606482221U)))) ? ((~(max((-1317310250), (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_6)) ? (max((var_5), (var_3))) : (((/* implicit */int) arr_7 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) var_15)) + (var_2))))), (((/* implicit */unsigned long long int) var_14))));
}
