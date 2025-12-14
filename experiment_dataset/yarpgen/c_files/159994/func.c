/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159994
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 488738362511040585LL)) | (max((((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775796LL))), (((var_0) & (var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((_Bool) var_18)))));
                                arr_15 [i_0] [(_Bool)1] [21ULL] [i_0] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)0))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((long long int) arr_0 [i_0])) != (((((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)0] [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) arr_9 [i_3] [i_2])) : (arr_3 [i_4] [i_1] [i_1]))));
                                var_23 = ((/* implicit */unsigned int) ((_Bool) (short)-13));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_1))));
                    var_25 = ((/* implicit */short) ((arr_1 [i_2]) != (arr_1 [i_0])));
                }
            } 
        } 
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (short)28))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(arr_9 [i_5] [(_Bool)1]))) >= (((/* implicit */unsigned int) (+(arr_8 [23ULL] [i_5] [(_Bool)1] [i_5]))))))) << (((18446744073709551589ULL) - (18446744073709551581ULL)))));
        arr_20 [i_5] = ((/* implicit */unsigned char) (short)-11);
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) arr_7 [i_5] [i_5]);
            arr_26 [i_6] = ((((max((((/* implicit */unsigned long long int) arr_11 [i_5] [17LL] [i_5] [i_5] [i_6] [i_6])), (arr_13 [i_5] [i_5] [i_6] [5ULL] [i_5]))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-14)), (arr_18 [i_5] [i_6])))) - (65495))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)28))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (((~(arr_13 [i_5] [i_6 - 2] [i_5] [i_6] [i_6]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)11), ((short)-17165))))))))));
        }
    }
    var_28 = ((/* implicit */_Bool) 841705040);
    var_29 = ((/* implicit */_Bool) (short)11);
}
