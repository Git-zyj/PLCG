/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133005
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
    var_10 -= ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] [i_2 - 1] = ((/* implicit */long long int) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 = max((((/* implicit */long long int) (signed char)-78)), (-3270154236410222324LL));
                                var_12 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (0ULL)))));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_4 [8] [i_3]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((min((((unsigned int) arr_10 [i_0] [i_0] [i_2])), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                    arr_15 [i_0] [i_0] [i_1] [i_2 + 1] = ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_0]))))) >> (((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_0 [i_2])))) - (5381))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_0])))));
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */unsigned short) var_3);
                                var_16 = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */long long int) ((((min((var_6), (var_7))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_3), ((_Bool)1)))))) ^ (((/* implicit */int) var_7))));
}
