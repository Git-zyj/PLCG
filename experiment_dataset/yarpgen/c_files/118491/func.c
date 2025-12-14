/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118491
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
    var_18 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = ((/* implicit */short) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), ((_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned char) max(((-(var_16))), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_0 [(short)6]))))) / (arr_4 [i_1 - 1])))));
                        arr_12 [i_3] [i_3] = ((/* implicit */int) arr_0 [i_2 - 2]);
                        arr_13 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3 + 3])) ? (var_17) : (((/* implicit */int) (_Bool)1))))) ? ((+(arr_6 [9U] [i_2 + 1] [i_3 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_3] [i_3 - 1]))))))));
                        var_22 = ((/* implicit */long long int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [(unsigned char)3] [i_3]))))));
                        arr_14 [i_3] = ((/* implicit */short) var_17);
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned short) 864691128455135232LL);
    }
    for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        arr_20 [i_4 - 1] = ((/* implicit */short) arr_17 [i_4] [(unsigned short)9]);
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 - 3])) ? (var_17) : (((/* implicit */int) ((arr_10 [i_4 - 3] [(unsigned char)4] [i_4] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)3756)))))))))));
        var_23 -= ((/* implicit */unsigned char) (!((_Bool)1)));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned int) min((max((arr_8 [i_4] [i_4]), (((/* implicit */long long int) arr_11 [i_5 - 1] [i_5 - 1] [i_5] [i_5])))), (((arr_22 [i_4] [i_4 - 1] [i_4 - 1]) | (arr_22 [i_4 - 2] [i_4 - 1] [i_4])))));
                    var_25 *= ((/* implicit */short) ((_Bool) (_Bool)1));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_26 ^= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) ((arr_6 [i_4] [i_6] [i_6]) / (arr_27 [i_4 + 1] [i_4 + 1] [0LL])))), (var_14)))));
                                arr_31 [i_4] [i_5] [(unsigned char)6] [i_7] [i_7] = ((/* implicit */int) arr_27 [i_4] [i_7 - 3] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) var_16);
}
