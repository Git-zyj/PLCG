/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143431
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
    var_18 = ((/* implicit */unsigned short) (+(var_11)));
    var_19 = ((/* implicit */int) var_17);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)58)) << (((((/* implicit */int) (unsigned char)228)) - (218))))), (((/* implicit */int) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    var_21 = ((signed char) (!(((/* implicit */_Bool) (~(arr_1 [(short)0] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned int) arr_12 [(_Bool)1] [i_0] [i_0] [i_2 - 4] [i_3] [i_4 - 3])), (var_15))) <= (((/* implicit */unsigned int) ((arr_1 [i_0] [i_2 - 4]) + (((/* implicit */int) var_14)))))))) < (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)34))))) ? (((((/* implicit */_Bool) (short)25387)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)47)))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_6 [i_1 + 1] [i_1 - 1])))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_14 [i_0] [i_1 - 2] [i_2 + 2] [i_1])))), (((/* implicit */int) (!((_Bool)1))))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */int) (_Bool)0)), (-1802024486))) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [i_3])) : (((/* implicit */int) (signed char)40))))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_4 [i_2 - 3])))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_1]);
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_5] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_5] [15LL] [3ULL])) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((long long int) arr_1 [2U] [2U])));
                }
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max(((+(((((/* implicit */int) var_10)) & (arr_3 [i_1]))))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0]))));
                var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((var_15) << (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))))) ? (((/* implicit */int) ((signed char) arr_15 [i_0]))) : ((-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)12538)) : (((/* implicit */int) arr_11 [i_0]))))))));
                arr_19 [i_1] [i_0] [i_1] = ((/* implicit */long long int) max((arr_9 [i_1]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1 + 1] [i_1]))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))) ? (((/* implicit */int) ((signed char) (unsigned char)221))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned char)221)) - (218))))))))));
}
