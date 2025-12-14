/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109904
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((unsigned char) var_10)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) var_7);
                            var_13 -= ((/* implicit */unsigned char) (unsigned short)252);
                            arr_10 [i_0] [(short)23] [i_2] [i_3] [i_2] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)9348)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)54925)))) : ((+(((/* implicit */int) (short)13307)))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0])), ((unsigned short)0))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_4] = ((long long int) (short)-22825);
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_10))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
                            {
                                var_15 |= ((/* implicit */short) (unsigned short)0);
                                var_16 = ((/* implicit */short) min((max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3] [i_5])), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_5])) ? (((/* implicit */int) arr_8 [(unsigned short)10])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)54312))))));
                                arr_17 [i_0] [i_1] [i_0] [(unsigned short)0] [i_5 + 2] = ((/* implicit */long long int) (unsigned char)3);
                                arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_5 - 2] [i_3] [i_1] [i_0] [i_2] [i_1] [i_0]), (var_0))))))))));
                            }
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] = ((/* implicit */unsigned short) 1937697059U);
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -7359665237846892692LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)26572))))) == (min((-2457249175469454430LL), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
    var_17 = var_7;
}
