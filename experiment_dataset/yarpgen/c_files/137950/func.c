/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137950
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16223)) ? (((/* implicit */int) (unsigned short)62656)) : (((/* implicit */int) (short)16210))))) < ((((~(arr_8 [i_3] [i_3]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                            var_19 |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_9))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_5)))) ? ((+(((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0]))) ? (arr_7 [i_0] [i_1] [i_0] [i_3] [i_3]) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16223)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (25502))) - (15)))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                var_22 += ((/* implicit */unsigned char) ((signed char) (short)-18448));
                arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) arr_0 [i_4]))))) ? (((/* implicit */long long int) (~(arr_7 [i_4] [i_4] [i_5] [i_5] [i_5])))) : (((arr_4 [i_4] [i_4] [i_4]) ? (-6669820111310568276LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~((~(((/* implicit */int) (short)-16230)))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 12851629321307774896ULL)) ? (((/* implicit */unsigned long long int) 1804918798)) : (8067292087141227470ULL)));
}
