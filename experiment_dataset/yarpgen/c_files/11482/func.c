/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11482
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (1195930800) : (((/* implicit */int) var_2))))))), (var_12)));
        arr_2 [i_0 - 2] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 3])))) ? ((+(((/* implicit */int) arr_1 [i_0 - 2] [i_0])))) : ((+((+(((/* implicit */int) arr_0 [i_0]))))))));
        var_18 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_2])))), (((var_12) << (((arr_4 [i_1] [i_2]) - (696692709U)))))));
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_3] [i_5])) / (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2]))) == (arr_5 [i_1] [i_2] [i_5]))))))), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) var_11))))));
                                var_21 = ((/* implicit */long long int) max((arr_15 [i_1]), (((/* implicit */unsigned long long int) var_9))));
                                arr_17 [i_1] [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_4] [i_5])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_4] [i_4]))))) ? (((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (min((((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])), ((-(((/* implicit */int) (unsigned char)101))))))));
                                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1] [i_2] [i_4])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_6))))) : (arr_4 [i_3] [i_4])))));
                            }
                        } 
                    } 
                } 
                var_23 = ((long long int) (-(((/* implicit */int) (short)17403))));
                var_24 = ((((/* implicit */_Bool) ((((var_15) + (2147483647))) >> (((arr_11 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]) + (426569550)))))) ? (max((((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_1] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)7)), ((+(((/* implicit */int) var_3))))));
}
