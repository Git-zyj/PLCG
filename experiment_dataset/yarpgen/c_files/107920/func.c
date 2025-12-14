/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107920
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
    var_15 = ((/* implicit */unsigned short) min((1379348497U), (max((((/* implicit */unsigned int) (_Bool)0)), (1U)))));
    var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned char)122)) - (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))))));
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) max(((~(((/* implicit */int) arr_12 [14])))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_3]))))) * (((((/* implicit */_Bool) 2872801911U)) ? (min((((/* implicit */long long int) (signed char)56)), (6806499443870413545LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))));
                                arr_13 [1U] [i_3] [i_3] [1U] [i_4 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)18044)), (1789948050)));
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_6), (arr_10 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_4 + 1])) : ((-(((/* implicit */int) (unsigned char)195)))))) >> (((((/* implicit */int) ((unsigned short) var_5))) >> (((arr_9 [i_4 + 1] [(unsigned short)10] [i_4] [i_4 + 1] [i_4] [i_4]) - (2699277497686859680LL)))))));
                                var_19 *= ((/* implicit */signed char) (+((+(var_6)))));
                                arr_15 [(_Bool)1] [(signed char)16] [i_2] [i_3] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((arr_9 [i_0] [i_1] [10] [i_0] [i_0] [(signed char)16]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [16U] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [21U] [i_3] [i_3] [21U])) : (((/* implicit */int) var_4)))))))) ? (min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_3] [i_1])) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_3])) + (((/* implicit */int) arr_4 [(_Bool)1] [i_3] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((((/* implicit */int) min((arr_12 [i_1]), (arr_2 [i_1])))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))));
                arr_16 [i_0] [(short)5] = ((/* implicit */short) (unsigned char)16);
                var_21 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) var_3)), (var_0))));
            }
        } 
    } 
}
