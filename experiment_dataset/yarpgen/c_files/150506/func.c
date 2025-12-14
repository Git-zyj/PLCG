/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150506
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
    var_12 += var_7;
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (!(var_7)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(short)2]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [15ULL])))) : (947507759)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_6 [(short)1] [(short)1] [i_2] [i_3]))))))), (((unsigned long long int) ((unsigned long long int) arr_8 [i_2] [i_2] [2ULL] [i_0] [i_0])))));
                        arr_10 [5ULL] [i_1] [17] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
                    }
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1950)))))) ? (max((1610612736ULL), (((/* implicit */unsigned long long int) arr_1 [7ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30104)))))));
                    var_15 -= ((/* implicit */unsigned long long int) (!(var_7)));
                }
            } 
        } 
    }
    var_16 |= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_14 [i_4] = (unsigned short)10007;
        arr_15 [1ULL] = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_5))))) : (((((/* implicit */_Bool) var_2)) ? (7317949573318817047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_13 [i_4]))))))));
        var_17 *= ((/* implicit */unsigned long long int) (!(((_Bool) arr_12 [i_4] [i_4]))));
        var_18 = ((unsigned short) (!(((/* implicit */_Bool) 2328880949714610708ULL))));
    }
}
