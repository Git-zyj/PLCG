/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137247
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
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */long long int) var_4)) >= (var_5)))), (var_2)))) && (var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */unsigned int) ((arr_2 [i_0] [i_1 + 2]) != (((/* implicit */int) arr_4 [i_0] [i_0]))));
                var_16 = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 1482554177U)) : (18446744073709551607ULL));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) arr_4 [18LL] [i_1]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((int) (short)3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))) : (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (-1766513187033621625LL) : (((/* implicit */long long int) arr_11 [i_0] [i_1] [7U])))))) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
            }
        } 
    } 
    var_20 = ((1766513187033621610LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? ((-(var_4))) : ((+(var_12)))))));
}
