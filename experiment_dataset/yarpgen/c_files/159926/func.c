/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159926
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
                arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_2] [i_1] [i_3] [(_Bool)0] = ((/* implicit */unsigned short) -1619913225);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)15388)) || (((/* implicit */_Bool) 1495324246)))))) ? (((((((/* implicit */_Bool) 1599773823U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_4]))) : (var_0))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) 0U))));
                                var_18 += ((/* implicit */unsigned short) 962323824U);
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_1 [8LL]))))), (max((3473526193754642218LL), (((/* implicit */long long int) -198431485))))))), (min((var_2), (((/* implicit */unsigned long long int) var_9))))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) 5540001581206343367LL))))));
                arr_16 [i_0] = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))))));
    var_22 ^= ((/* implicit */int) (unsigned short)9);
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_2))) ? (max((((long long int) var_13)), (((/* implicit */long long int) (-(2695193472U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
