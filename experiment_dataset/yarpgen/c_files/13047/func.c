/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13047
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2 + 2] [(_Bool)1] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_1] [i_3]))) ? (((arr_3 [i_1] [12]) ^ (((/* implicit */unsigned long long int) 252U)))) : ((-(arr_0 [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11))))))));
                                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)224)), (arr_4 [i_0] [i_1])))) ? (((/* implicit */long long int) max((var_16), (((/* implicit */int) arr_8 [i_3] [i_3] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_4] [i_2] [i_0]) : (((/* implicit */long long int) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_11;
    var_22 = ((/* implicit */unsigned long long int) -59105257402458158LL);
}
