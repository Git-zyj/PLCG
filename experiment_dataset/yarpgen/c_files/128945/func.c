/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128945
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        var_13 -= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (+(-7134761972247663569LL)));
                        var_14 = ((/* implicit */signed char) arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0] [6U]);
                        var_15 = arr_3 [i_0] [i_3 + 1];
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_0] [i_1 + 1] [i_0] [(signed char)3] [i_4] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) max((var_1), (arr_2 [i_0] [i_0 - 4]))))))));
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                        arr_15 [i_0] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)4320)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)113))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 2])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)4303))))))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_18 [i_1 + 3] [i_0 + 2] [i_0 + 2] [i_0 - 1]);
                        arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)61216)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 2]))) / (arr_6 [1LL] [1LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 2] [i_0 - 1])))))) ? (max(((-(arr_12 [i_1] [i_1] [i_1 - 2] [i_1] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))));
                        arr_20 [i_1] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0 - 3] [(signed char)0] [11U] [i_2] [i_5] [11U])) | (((/* implicit */int) arr_7 [i_5] [i_1 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4303))) : (7134761972247663577LL))))));
                    }
                    arr_21 [i_1] = (+(-7134761972247663576LL));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)61237))));
                    var_20 = arr_30 [i_6] [i_7] [i_6];
                    var_21 |= ((/* implicit */long long int) arr_3 [i_6 - 1] [i_6 - 1]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(var_9))))));
}
