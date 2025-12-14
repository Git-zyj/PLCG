/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127759
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_7))) * (((/* implicit */unsigned long long int) max((-3530189623712139081LL), (3530189623712139061LL))))))) ? ((~(var_10))) : (((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)40800), (((/* implicit */unsigned short) var_1))))))))));
                                var_15 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */long long int) (+(arr_7 [i_2] [i_1])))) : (max((var_13), (((/* implicit */long long int) arr_9 [i_3] [i_4] [i_4] [i_4 + 1] [i_4]))))));
                                var_16 = ((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) 432345564227567616ULL)) ? (-3530189623712139081LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24731)) || (((/* implicit */_Bool) (+(arr_8 [i_0] [1] [i_0])))))))));
                                var_17 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_11 [8LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((18014398509481983997ULL), (((/* implicit */unsigned long long int) 0U))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [(signed char)9] [i_1]);
                }
            } 
        } 
        var_18 = (+(((/* implicit */int) ((unsigned char) 1065042366))));
        var_19 *= ((/* implicit */signed char) ((unsigned char) (unsigned char)255));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        arr_22 [i_7] [(signed char)0] [i_6] [i_6] [(unsigned char)6] [i_6] = ((/* implicit */unsigned char) (~(((arr_16 [i_7]) - (((/* implicit */unsigned long long int) arr_4 [i_5 - 1] [i_6]))))));
                        var_20 = ((((/* implicit */_Bool) (~(arr_5 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_5))))) : (((((/* implicit */long long int) (-(950213649U)))) | (((long long int) var_14)))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [6ULL])))));
    }
    var_21 -= ((/* implicit */int) max((var_9), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))))))));
}
