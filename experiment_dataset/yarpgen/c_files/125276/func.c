/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125276
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
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-4405943869744565641LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10)))))) : (var_4))))));
                        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 13700295406175722141ULL)) ? (((/* implicit */int) (short)30929)) : (2147483647)))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_1] [14LL] [i_1] [i_0] = ((/* implicit */int) (+(var_8)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((var_2) ? (((/* implicit */long long int) var_9)) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            arr_16 [i_0] [i_1] = ((/* implicit */_Bool) var_9);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_8))))) : ((+(((((/* implicit */_Bool) var_13)) ? (var_4) : (var_13))))))))));
                            var_23 = (-(((/* implicit */int) (short)-30925)));
                            var_24 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((((!(((/* implicit */_Bool) var_4)))) ? ((+(((/* implicit */int) var_16)))) : ((+(((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_12)) : (((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2617963352U))))));
                    }
                    var_27 = ((/* implicit */long long int) var_1);
                    var_28 &= ((/* implicit */short) var_10);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((+(((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_0)) : (712960982))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
    var_30 = ((/* implicit */int) ((var_11) ? (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5802252544012849395LL)))))) : (((var_2) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
