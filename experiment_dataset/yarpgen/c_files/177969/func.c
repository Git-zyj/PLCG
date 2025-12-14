/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177969
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
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_6))) << (((((/* implicit */int) var_7)) - (134)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3036999918743608869ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) (-(4194303U)));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_15 [i_3] [i_3] [i_2] [6] [i_4] [i_1 - 1] = ((/* implicit */unsigned short) (unsigned char)190);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_0))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)1)))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3] [i_1 + 1] [i_2] [i_3] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [3U]))))))));
                                var_19 = ((/* implicit */short) ((unsigned long long int) (short)16792));
                            }
                            var_20 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned short) var_2))) >= ((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3] [14ULL])))))), (((((/* implicit */_Bool) 1773665535)) || (((/* implicit */_Bool) (unsigned short)21738))))));
                        }
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) min((arr_14 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [(unsigned short)6]), (((/* implicit */short) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) min((((/* implicit */short) (signed char)34)), (var_2)))) << (((((((/* implicit */_Bool) var_4)) ? (4125774649U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (4125774634U))))));
}
