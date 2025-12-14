/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113932
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
    var_13 += ((/* implicit */unsigned int) 70931694131085312LL);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) min((-49062540), (((/* implicit */int) (unsigned char)121))))) >= (arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)237)) ? (-49062540) : (-49062551)))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) -49062531))))) - (((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) 49062540);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_2] = arr_12 [i_0] [(short)17] [i_2] [i_3] [i_4];
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) ((_Bool) 5802724699375894380ULL))) : (((/* implicit */int) arr_12 [(unsigned char)12] [i_1] [i_2] [i_2] [i_4]))));
                                arr_14 [i_4] [i_2] [i_3] [i_2 + 1] [i_2] [i_0] = ((/* implicit */long long int) (unsigned char)2);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)253), (((/* implicit */unsigned char) (signed char)-49)))))) <= (arr_11 [(unsigned short)16] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) (short)28025)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)235), (var_4))))))) : (((((/* implicit */_Bool) ((int) (short)-6674))) ? (var_10) : ((~(arr_11 [i_0] [10LL] [i_0])))))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) arr_11 [i_5] [i_5] [i_5]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)59575))) ? (((((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (9829260361583023920ULL) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (short)768))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_5]))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned short) ((short) min(((unsigned short)65528), (((/* implicit */unsigned short) (_Bool)0)))))))));
    }
    var_19 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_11))))))), (((/* implicit */int) (signed char)63))));
}
