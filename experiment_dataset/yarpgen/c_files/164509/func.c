/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164509
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (var_11)));
    var_21 = ((/* implicit */unsigned short) var_6);
    var_22 ^= ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) >= (max(((+(var_16))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */signed char) var_17)))))))));
                var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) arr_3 [i_1 + 1] [i_1] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [20ULL])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (((/* implicit */int) (unsigned short)26064)) : (((/* implicit */int) (unsigned char)130)))) : (arr_3 [i_0] [i_1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_8 [i_1] [i_0] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_1 - 2] [i_3])))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_0] [i_1] [i_2] [i_3]))))) | (8588436793326435567LL)));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1 - 1] [i_1 - 1]));
                arr_10 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_18);
}
