/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110729
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
    var_16 = ((/* implicit */unsigned long long int) var_15);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((var_3), ((-(((/* implicit */int) var_14)))))))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7)))) ? (802330117) : (((/* implicit */int) ((signed char) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(-802330117)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 1] [i_2] [i_2] [i_0]))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_4])) : (((/* implicit */int) var_14))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_4] [i_2] [i_2] [i_1] [i_0]);
                                var_21 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (max(((~(((/* implicit */int) arr_4 [i_4] [i_3] [i_0])))), (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_8)) - (51))))))) : (((/* implicit */int) arr_0 [i_4])));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [(signed char)17] = ((/* implicit */unsigned char) arr_4 [i_1] [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1])) ? (((((/* implicit */_Bool) -802330128)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))) : (2997892876U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), (arr_7 [i_0] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
}
