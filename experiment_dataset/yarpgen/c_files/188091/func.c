/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188091
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                                var_10 = ((/* implicit */signed char) (((_Bool)0) ? (15686491817984310387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
                                var_11 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41272)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (10965653252606478553ULL)))) ? (2760252255725241228ULL) : (((((/* implicit */_Bool) var_7)) ? (10965653252606478538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [(signed char)15] [i_2] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_4)))));
                    arr_17 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((long long int) (-(((int) var_9)))));
                    var_12 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((7481090821103073062ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) : (((unsigned long long int) 11781981816121047827ULL)))) == (((unsigned long long int) arr_9 [22ULL]))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2301210422U)))) ? (((/* implicit */int) (unsigned short)44348)) : (min((((/* implicit */int) (_Bool)1)), (var_3)))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_9))));
        arr_21 [i_5] = ((/* implicit */unsigned short) var_5);
        var_16 = arr_11 [i_5] [i_5] [i_5] [i_5];
    }
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 3] [i_6 + 1])) | (((/* implicit */int) arr_11 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 + 3]))))), (((((/* implicit */_Bool) 5533510468647840487ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 3] [i_6 + 2]))) : (2760252255725241229ULL)))));
        arr_25 [i_6 + 3] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= (((int) arr_24 [i_6]))));
    }
}
