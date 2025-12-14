/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114108
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
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_11 += ((/* implicit */unsigned short) min((8532907832619229804ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)0))))))))));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (66977792U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_13 += (+(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3])));
            var_14 |= ((/* implicit */unsigned char) ((arr_3 [i_0]) * (((/* implicit */long long int) ((arr_5 [i_0]) / (var_8))))));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_10 [i_0] = ((/* implicit */signed char) (((!(arr_4 [i_0 - 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) >> (((((/* implicit */int) var_9)) - (95)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) var_1)))))))) : ((-((~(var_2)))))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)-1)))))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_0 [i_0 - 4]))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_7))));
                        }
                        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_18 [i_0] [i_0]))))) ? (((/* implicit */long long int) arr_21 [i_0 - 3] [i_0 - 3] [i_0] [i_4 - 1] [i_3])) : (arr_9 [i_4 - 2]))), (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) var_7)) : (arr_21 [i_0] [i_3] [i_4] [i_5] [i_3]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)-3030))))))))))));
                            arr_22 [i_7] [i_4] [i_4] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_4 [i_0]))))))) ? (arr_8 [i_0 - 3]) : (min((((/* implicit */long long int) ((var_5) - (((/* implicit */int) arr_12 [i_4] [i_4] [i_3] [i_4]))))), (arr_9 [i_5 - 3])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_5] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_3]))))) : (((arr_20 [i_0] [i_3] [i_4] [i_5 - 3] [i_0]) >> (((((/* implicit */int) var_9)) - (95)))))))) || (((/* implicit */_Bool) var_7))));
                        }
                        var_20 = (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) (signed char)-99)))) == (((/* implicit */int) (short)0))))));
                    }
                } 
            } 
        }
        arr_23 [i_0 - 2] [i_0 - 2] = (~((+((+(((/* implicit */int) (unsigned char)138)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 4]))))))));
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0 + 1] [(unsigned char)12] [i_0 - 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 4])) ^ (((/* implicit */int) arr_12 [i_0 + 1] [2U] [i_0 - 1] [i_0]))))) : (max((var_4), (((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19)) ? (var_5) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))))))));
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)0)), (var_5)));
    var_24 = ((/* implicit */unsigned long long int) var_1);
}
