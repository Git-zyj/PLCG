/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108088
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (676861280664583992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19518)))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((_Bool) 1057937525150855835LL)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                    var_13 = ((/* implicit */unsigned int) arr_2 [i_0]);
                }
            } 
        } 
        var_14 = ((/* implicit */short) arr_2 [i_0]);
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_12 [i_0] [(unsigned short)12] [i_0] [i_0]))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        arr_17 [i_3] = ((/* implicit */signed char) ((short) ((((unsigned long long int) var_6)) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)30)), (arr_5 [(short)4] [i_3] [(short)20])))))));
        arr_18 [i_3] [i_3] = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_15 = -1250619159;
                                var_16 = ((((/* implicit */_Bool) var_7)) ? ((((~(var_7))) / (((/* implicit */int) (unsigned short)4896)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [(unsigned char)10])) || (((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_5] [i_7]))))), (var_2)))));
                                var_17 = ((/* implicit */unsigned char) (short)2048);
                                var_18 = ((((/* implicit */int) ((_Bool) 2147483647))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [(unsigned short)11] [(unsigned short)11]) : (((/* implicit */unsigned int) -886660375))))) ? (var_5) : (((/* implicit */int) var_3)))));
                                var_19 = min((11846942947297092989ULL), ((((!(((/* implicit */_Bool) arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) arr_10 [i_6] [i_5])) * (0ULL))))));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) ((_Bool) arr_25 [i_3] [i_3 + 1] [i_5] [9] [i_3 + 1]));
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_3] [i_3])))) ? (((6599801126412458626ULL) / (((/* implicit */unsigned long long int) -5225814546971888793LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) var_2);
}
