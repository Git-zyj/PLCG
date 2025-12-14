/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109632
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) arr_2 [i_3])) : (((((/* implicit */int) (unsigned char)46)) + (((/* implicit */int) var_9)))));
                                arr_14 [(unsigned char)5] [i_1] [(unsigned char)13] [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [(_Bool)1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((2639081219U) << ((((~(((/* implicit */int) ((unsigned char) 458382265U))))) + (208)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [i_1] [i_0])), (var_4)))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) ((signed char) (unsigned char)166)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)3] [10] [i_0])) : (((/* implicit */int) var_13))))) ? ((~(3196317215U))) : (arr_9 [i_0 - 1]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [7] [i_5 - 3])))), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_0])) | (((/* implicit */int) var_11)))))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((unsigned char)83), (var_14))), (var_7)))) ? (((/* implicit */int) max((max((arr_3 [i_2] [19U]), ((unsigned char)153))), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)83)) > (((/* implicit */int) arr_15 [i_0] [(unsigned char)11] [12U] [i_0 + 1] [i_0])))))))) : (((((/* implicit */_Bool) (unsigned char)129)) ? (arr_10 [i_0 + 1]) : (arr_10 [i_0 - 1])))));
                        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (arr_11 [i_0 + 1] [i_0 + 1] [i_5 + 1] [i_5 + 1] [i_0])))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)176))))), (((unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (max((arr_16 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_8 [i_0] [6] [i_0] [i_0])))))))));
                    }
                    for (int i_6 = 3; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_6]))))) << (((((((/* implicit */int) var_10)) + (110))) - (63))))))));
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_0] [i_0])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_1] [i_0] [i_0]))))))), ((~((~(((/* implicit */int) (signed char)-14))))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)10]))) : (var_4)));
                    }
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned char) (-(((max((var_5), (((/* implicit */unsigned int) (unsigned char)166)))) / (((/* implicit */unsigned int) arr_25 [i_7 - 1]))))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] [i_7] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_25 [i_7 - 1])) ? (((/* implicit */int) var_9)) : (arr_25 [i_7 + 2]))), (((/* implicit */int) ((signed char) arr_25 [i_7 - 1])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (var_14)));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) : (var_12)))))) ? (max((min((var_1), (414694111))), (((/* implicit */int) (signed char)-14)))) : (((/* implicit */int) var_2)))))));
}
