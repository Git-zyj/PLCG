/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121727
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) ((short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) (short)-7271)))) || (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_3 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                arr_15 [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) arr_7 [i_4] [i_2] [i_2] [i_1]))) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_4] [i_0])) ? (((/* implicit */long long int) arr_4 [i_4] [i_1] [i_1] [i_0])) : (arr_13 [i_0] [i_1 + 2] [i_2] [i_0] [i_4]))))) > (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                                arr_16 [i_4] = ((/* implicit */short) (+(((arr_4 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */unsigned int) -1062786994))))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-6)), ((short)7270)))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : ((+(arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])))));
                            }
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_9 [i_1 + 2]), (arr_9 [i_1 - 1]))), ((-(arr_9 [i_1 + 1])))));
                            var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 2])) ? (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)44419)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)195))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = 4095;
}
