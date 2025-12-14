/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130397
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
    var_20 = ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) var_6);
                            var_22 = ((/* implicit */unsigned short) max(((-(((long long int) arr_11 [i_0] [i_1 + 1] [i_2 + 3] [i_0])))), (max((arr_11 [i_2 + 3] [(_Bool)1] [i_1 - 1] [i_3 - 1]), (((/* implicit */long long int) arr_6 [i_1] [i_3] [i_3]))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (var_4) : (((/* implicit */long long int) 0U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) (signed char)-97)) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))))))));
                        }
                    } 
                } 
                var_24 += (+(max((((((/* implicit */_Bool) var_2)) ? (var_13) : (var_6))), (((/* implicit */long long int) arr_8 [i_0] [0ULL] [i_0] [(unsigned short)4])))));
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)53392))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(((unsigned long long int) ((var_12) & (((/* implicit */long long int) arr_9 [i_0] [(unsigned char)8]))))))))));
                    arr_14 [8U] [i_1 - 1] [i_1] = ((long long int) ((arr_11 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1 + 1]) >> (((var_11) - (8610584108671332398LL)))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((18446744073709551611ULL), (7ULL))))));
                    var_28 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4870568137277287459ULL)) ? (((/* implicit */unsigned int) 341105860)) : (662602817U)))), (var_11))));
                }
                var_29 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1])), (-815428482)))) : (arr_0 [i_1]))), (((/* implicit */unsigned long long int) (unsigned short)53392))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53393))) != (4294967281U)));
    var_31 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1966080)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 662602825U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((18446744073709551612ULL) + (7ULL))) : (((/* implicit */unsigned long long int) var_13))))));
}
