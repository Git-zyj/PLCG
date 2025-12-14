/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178852
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (arr_0 [i_0] [i_1])))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(var_15)))));
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) & (16777215U))), (((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_3]);
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) arr_5 [i_2])))))));
                            var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2251799813685247ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_3]))) & (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26126)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */long long int) ((arr_0 [i_1] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) var_18);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            {
                arr_20 [i_4] [i_5] = var_8;
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_5]))));
            }
        } 
    } 
}
