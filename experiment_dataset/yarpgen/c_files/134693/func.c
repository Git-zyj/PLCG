/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134693
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14982)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) + (var_8))))))) ? (9597496209958938951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) (unsigned short)11367)) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (2097150LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
        var_22 += ((/* implicit */signed char) arr_0 [i_0]);
        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) (~(441624960U)))) ? (((((/* implicit */_Bool) 12405469133860640546ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) : (max((((/* implicit */unsigned int) var_17)), (arr_0 [i_0]))))), (((/* implicit */unsigned int) (_Bool)0))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 2]);
            arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) (!((_Bool)0)))), ((~(((/* implicit */int) var_19))))))) ^ (((4294967295U) << (((((/* implicit */int) (unsigned char)148)) / (arr_9 [14LL] [i_0])))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */int) var_13)) % (arr_4 [(_Bool)1]))) : (608670780)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0]))))));
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) ((arr_13 [i_0] [i_0]) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0])), (max(((short)3413), (((/* implicit */short) arr_1 [i_4]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) arr_18 [i_6 + 2] [i_3] [i_4] [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)3579)) : (((/* implicit */int) (short)120)))), (((/* implicit */int) (unsigned char)132))))));
                                var_29 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) (short)32767)) ? (9698205507301686960ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_26 [i_7] = ((/* implicit */short) 18446744073709551594ULL);
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) (~(arr_7 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [(unsigned char)10] [(unsigned short)2] [i_4]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_9 = 2; i_9 < 15; i_9 += 1) 
    {
        arr_29 [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)37174)) ? (((/* implicit */int) (short)5046)) : (((/* implicit */int) (short)32746))))));
        arr_30 [i_9 + 1] [14] = ((/* implicit */unsigned int) min((((int) arr_18 [i_9] [(_Bool)1] [i_9] [i_9 - 1] [i_9 - 2])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 2])))))));
    }
}
