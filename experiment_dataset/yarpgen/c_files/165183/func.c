/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165183
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_6 [i_0] [i_3] [i_4]));
                                var_17 = ((/* implicit */unsigned int) min((arr_7 [i_4]), (((/* implicit */long long int) ((((((/* implicit */int) ((short) var_12))) + (2147483647))) >> (((arr_6 [i_1] [i_2] [i_4]) - (5742443428740517314LL))))))));
                                var_18 += ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((var_11), (((/* implicit */int) (short)-12305))))), ((~(arr_7 [i_3]))))) & (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)48669)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) var_5)), (arr_3 [i_0])))))) || (((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_0]))))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)12304);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) -1985542060))));
    var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)255)))) >= (((var_11) | (((/* implicit */int) (signed char)53)))))))));
    var_22 = ((/* implicit */unsigned char) var_3);
}
