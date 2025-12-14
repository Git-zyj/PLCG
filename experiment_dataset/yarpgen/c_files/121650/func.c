/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121650
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
    var_13 = ((/* implicit */_Bool) (-(6371322763324281100ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        var_14 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_4)) : (arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1])));
                        var_15 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)142))));
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((unsigned char)142), ((unsigned char)213)))), (max((((arr_11 [i_0] [i_1] [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (var_2)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (arr_11 [i_0] [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21763))))), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_9 [i_2]))));
                        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) min((-15), (2021529716)))) ? (((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) (short)-14)))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_4] [i_0] [i_0])) + (((/* implicit */int) (unsigned char)146)))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) > ((~(((/* implicit */int) (short)31)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 6; i_5 += 4) 
                    {
                        arr_21 [i_1] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0]);
                        arr_22 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_10);
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = arr_15 [i_0] [i_1] [i_1] [i_1];
                    }
                    var_19 = ((/* implicit */_Bool) (signed char)111);
                    arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_11), (((/* implicit */signed char) var_7)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_17 [i_0] [i_0])), ((unsigned char)114)))) ? (min((((/* implicit */unsigned long long int) 3886488819U)), (12786951792438388123ULL))) : (((((/* implicit */_Bool) 298538992U)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])) : (var_6))))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_1] [i_1] [i_1 - 2] [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_3);
}
