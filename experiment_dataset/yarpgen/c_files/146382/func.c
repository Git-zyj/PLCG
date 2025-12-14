/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146382
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
    var_19 |= ((/* implicit */unsigned int) var_1);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((var_12) * (max((((/* implicit */unsigned long long int) var_15)), ((-(var_12))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3])) : (var_1))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_12 [i_0] [4LL] [i_0] [i_0 + 1]))));
                            var_23 = ((/* implicit */unsigned char) arr_2 [i_0]);
                            var_24 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */_Bool) min((((((/* implicit */int) arr_10 [2LL] [i_0 - 1] [i_0 - 1] [2LL])) * (((/* implicit */int) arr_13 [(short)10] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), ((-(((/* implicit */int) arr_10 [(short)10] [i_0 - 1] [i_0 - 1] [(short)10]))))));
                var_26 -= ((/* implicit */unsigned int) var_6);
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_27 -= ((/* implicit */short) ((((/* implicit */int) (signed char)22)) ^ (((/* implicit */int) (unsigned char)120))));
                            arr_20 [i_1] [i_1] [(short)15] [i_1] [(_Bool)1] [i_5] = ((/* implicit */signed char) arr_17 [(short)1] [i_1] [i_4] [i_5] [i_5]);
                            arr_21 [10U] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)105);
                            var_28 ^= ((/* implicit */unsigned long long int) max((min(((unsigned char)9), (((/* implicit */unsigned char) (_Bool)0)))), ((unsigned char)187)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */short) min((var_3), (((((/* implicit */int) (short)-22589)) - (((/* implicit */int) (unsigned char)151))))));
}
