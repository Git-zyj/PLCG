/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150754
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_12)), (var_9)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [(short)19] [i_3] [(_Bool)1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((unsigned short) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]))), (var_0))), (((/* implicit */long long int) ((((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) && (((/* implicit */_Bool) -3087546042836709042LL)))))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) ((unsigned int) 3087546042836709042LL))) : ((-(arr_5 [(unsigned short)14] [i_1])))));
                                arr_17 [i_0] [i_2] [i_3] = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_9 [i_3])) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])))))) : (((long long int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) (unsigned char)229);
                                arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (short)13849)) && (((/* implicit */_Bool) var_4))))), ((signed char)-34)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */short) var_3)))))) - (((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4))))))))));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [16LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_17)))) && (((/* implicit */_Bool) var_4)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_14) | (var_7))))))));
    var_21 |= ((/* implicit */int) 92192107U);
}
