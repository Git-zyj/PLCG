/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147461
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
    var_12 = ((/* implicit */short) (~(2147483647)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (arr_0 [i_0 + 1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && ((!(((/* implicit */_Bool) var_8))))))) : (((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || ((_Bool)1)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((_Bool) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3456))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (var_8)));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [(signed char)11]))))) / (((arr_10 [i_0] [i_1 - 1] [i_2] [i_3 + 1] [i_4]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_3])))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_9 [i_3] [i_1 + 1] [(signed char)5] [i_1]))))))))))));
                                arr_15 [i_0] = ((/* implicit */_Bool) arr_8 [i_1 - 4] [i_1 - 4] [i_3] [i_4]);
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (min((var_9), (((/* implicit */unsigned int) var_11))))))) ? (((unsigned int) (+(((/* implicit */int) arr_5 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (arr_8 [(_Bool)0] [i_0 + 2] [i_2 + 3] [i_0 + 2]) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_6)) + (15956)))))))))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_7))));
                            }
                            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_3 [i_0] [13]))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) arr_19 [i_3] [i_1 - 2]))))))), (((((((/* implicit */int) arr_7 [i_0] [i_2] [i_5])) / (((/* implicit */int) var_1)))) << (((((/* implicit */int) arr_1 [i_0 + 1])) - (30490))))))))));
                                var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (-4794122231638699852LL) : (((/* implicit */long long int) var_9)))) / (((/* implicit */long long int) min((arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_2 + 4]), (arr_19 [6U] [(unsigned char)10]))))))) ? (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_6))))) : (arr_8 [i_3] [i_3] [i_3 - 2] [i_3]))) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_2)))))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [13] [(short)7])) | (arr_11 [i_0] [(_Bool)1] [i_2] [i_3] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) | (((/* implicit */int) var_5)))))))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) var_4)))))));
                            }
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) arr_5 [13])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (arr_0 [i_0 - 1] [i_1 - 1])))) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_1 - 4]))))));
            }
        } 
    } 
    var_24 = var_5;
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
}
