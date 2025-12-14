/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14128
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
    var_13 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) var_0);
                arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_2 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                var_15 *= ((/* implicit */short) (-(arr_9 [i_2] [i_3])));
                arr_11 [i_2 - 3] = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), ((-(((arr_15 [i_2] [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2] [i_2]) ? (((((/* implicit */_Bool) 288230376151707648ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)229)), (arr_18 [i_2] [i_3] [i_4] [i_5]))))))))));
                            arr_19 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) var_5);
                            arr_20 [i_5] [i_4] [i_2 - 2] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [(_Bool)0] [i_5] [i_5] [(unsigned char)2] [i_3] [i_2])), (var_8))))));
                            arr_21 [0U] |= ((/* implicit */unsigned char) max((1970324836974592LL), (((/* implicit */long long int) (-(((unsigned int) arr_13 [(unsigned short)12] [i_3] [i_5] [i_5])))))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_3))))) ? (((long long int) var_7)) : (((1970324836974591LL) / (max((((/* implicit */long long int) var_10)), (var_8))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((short) max((288230376151707648ULL), (((/* implicit */unsigned long long int) arr_16 [i_2 - 2] [i_2 - 2] [6] [(_Bool)1]))))))));
                            }
                            for (unsigned char i_7 = 4; i_7 < 17; i_7 += 2) 
                            {
                                var_18 *= ((/* implicit */short) min((((unsigned long long int) ((arr_15 [i_2] [i_3] [i_4] [i_5] [i_7] [(_Bool)1]) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2 - 2])) * (((((/* implicit */_Bool) arr_10 [8] [12U] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_7] [i_3])) : (var_11)))))));
                                arr_27 [i_2] [i_3] [i_5] [i_2] [(unsigned char)3] [i_2] [(signed char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_12))))))))));
                            }
                            for (short i_8 = 3; i_8 < 19; i_8 += 1) 
                            {
                                arr_32 [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [i_2 - 4] [i_2 - 1] [i_2 - 4] [i_2 - 1])) ? ((+(((/* implicit */int) (short)16424)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_5))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_7)))));
    var_21 = ((((/* implicit */_Bool) 4292870144U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) max(((unsigned char)26), (var_5)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-25921)))))));
}
