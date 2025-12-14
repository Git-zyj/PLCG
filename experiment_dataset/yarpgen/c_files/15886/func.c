/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15886
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
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_2 - 1])))) : ((-(var_11)))))) ? (((/* implicit */int) arr_2 [i_0])) : (max((((((/* implicit */int) var_5)) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0 - 3] [i_1] [i_3])))), (((((/* implicit */int) (unsigned char)253)) << (((/* implicit */int) var_9))))))));
                            var_18 *= ((/* implicit */signed char) arr_0 [i_1]);
                        }
                    } 
                } 
                var_19 |= ((/* implicit */short) arr_3 [i_1]);
                var_20 -= ((/* implicit */unsigned long long int) ((var_15) == (((((/* implicit */_Bool) (short)-12751)) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9)))) : (arr_9 [i_0 - 3] [i_1] [i_0] [i_0] [i_1] [i_0 - 3])))));
                var_21 = ((unsigned char) (unsigned char)2);
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */long long int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)2)), (var_14))))))), (var_1))))));
    var_23 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) -712883185)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (var_2))))), (((/* implicit */unsigned int) var_5))));
}
