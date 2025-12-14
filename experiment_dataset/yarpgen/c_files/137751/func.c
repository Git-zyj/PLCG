/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137751
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
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) * (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) max((arr_5 [i_0] [i_1]), (((((/* implicit */_Bool) arr_5 [i_0] [2LL])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1])))));
                var_21 = ((/* implicit */unsigned long long int) (unsigned char)82);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(9223372036854775787LL))) + ((+(954209968066985089LL)))))) ? (((long long int) arr_3 [i_1] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */int) (unsigned short)15369)) : (((/* implicit */int) arr_7 [i_1] [i_2] [10LL] [i_1]))))));
                                arr_14 [i_0] [i_4] [i_3] [i_0] [i_4] [i_3] [i_2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                            }
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((arr_5 [i_0] [i_1]) | (arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)77)) << (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_3 [i_1] [i_1]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((arr_13 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 - 2] [i_6 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 1] [i_6 - 1])))))));
                            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)242))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (unsigned char)104);
}
