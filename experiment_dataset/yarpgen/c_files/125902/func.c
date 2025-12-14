/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125902
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */short) 1072693248);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [(unsigned short)9]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [(unsigned char)11] = ((/* implicit */unsigned long long int) -7485282386224367961LL);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [9ULL] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [8LL])) ? (((/* implicit */int) var_12)) : (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (short)-6187)), (var_13)))))) : ((~(arr_9 [i_0] [i_1] [i_1])))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22421))) : (max((((/* implicit */unsigned long long int) var_9)), (var_5))))));
    var_17 -= ((/* implicit */signed char) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_12))));
}
