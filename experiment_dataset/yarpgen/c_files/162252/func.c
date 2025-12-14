/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162252
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
    var_14 = ((/* implicit */unsigned long long int) (~((((-(((/* implicit */int) var_8)))) / (((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */int) min((((/* implicit */short) var_6)), (var_7)))), ((+(((/* implicit */int) arr_0 [i_0] [i_1])))))) + ((+(((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_1] [i_1] [i_2 + 3] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551613ULL)))) ? (((/* implicit */long long int) ((min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))) ^ (((/* implicit */int) ((_Bool) var_6)))))) : (min((((((/* implicit */_Bool) (short)-9710)) ? (-1014233576301293323LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33022))))), (((/* implicit */long long int) var_10))))));
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((max((arr_10 [i_3 - 1] [i_1] [i_2] [i_1]), (arr_10 [i_3 - 1] [i_3] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [i_1] [i_1])) ? (arr_10 [i_3 - 1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_15 |= ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */int) min((var_3), (var_3)))) | (((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned short) 7053523453691088436ULL))));
                    }
                    for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) var_8);
                        var_17 = ((/* implicit */signed char) ((short) ((unsigned short) ((_Bool) (unsigned short)0))));
                        var_18 *= ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) ((short) arr_15 [i_4 - 1] [i_0] [i_0] [i_0]))), ((~(var_2))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_5] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65024)) + (((/* implicit */int) (_Bool)0))));
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) min(((~(((/* implicit */int) (unsigned short)9724)))), (((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) (unsigned char)255)))))));
                            var_19 ^= ((/* implicit */unsigned long long int) min((((arr_7 [i_4 + 3] [i_4 + 1] [i_4 + 1]) <= (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (unsigned short)0))))))), (((((/* implicit */int) var_4)) < (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_4 [i_1] [i_4] [i_4]))))))));
                        }
                    }
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        var_20 |= ((/* implicit */unsigned short) ((int) max((((/* implicit */int) min(((short)63), (((/* implicit */short) arr_11 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)25231)) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_0])))))));
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_21 [i_6 - 1] [i_0] [i_0] [i_0]), (((/* implicit */int) var_12)))), (((/* implicit */int) arr_11 [i_0] [i_0]))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)4337)), (var_2))) > (((/* implicit */unsigned long long int) arr_5 [i_2 - 3]))))) : (((/* implicit */int) min((arr_15 [i_1] [i_1] [i_0] [i_6 + 1]), (arr_15 [i_1] [i_2] [i_0] [i_6 + 1]))))));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(-588357174581478484LL)));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 - 3] [i_2]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 7; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -454111558)) ? (((/* implicit */int) ((signed char) (unsigned short)40304))) : (max((((((/* implicit */int) (short)16384)) / (((/* implicit */int) (short)-55)))), (((/* implicit */int) (unsigned short)4321))))));
                        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) arr_16 [i_2 - 2] [i_2] [i_2] [i_2 - 3] [i_2] [i_2 - 1] [i_2]))), (min((((/* implicit */short) arr_0 [i_0] [i_2 + 2])), (var_8)))));
                        var_25 = ((/* implicit */unsigned char) ((signed char) var_5));
                        var_26 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) max(((signed char)-49), ((signed char)127)))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) var_13);
    var_28 = ((/* implicit */long long int) var_1);
}
