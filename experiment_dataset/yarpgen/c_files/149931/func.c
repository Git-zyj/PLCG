/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149931
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)13479)) & (((/* implicit */int) (unsigned char)240))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) (unsigned short)9649);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1]))) | (((((/* implicit */int) (unsigned short)896)) & (-1925872067)))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (unsigned char)255))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)896)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned short) arr_1 [i_1] [(unsigned char)19])))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)906)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)55)))), (((/* implicit */int) arr_3 [i_1]))))) : (min((min((((/* implicit */unsigned int) arr_4 [i_1])), (1428662646U))), (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) (_Bool)0))))))) || (((/* implicit */_Bool) ((unsigned char) ((arr_3 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)-23353))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = min((min((var_8), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) != (var_6)))));
        var_20 = ((/* implicit */short) ((_Bool) 2866304649U));
        var_21 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14397))))) >= (((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [(unsigned short)5]))) + (var_7))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) >= (((/* implicit */int) arr_6 [i_2])))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_2)) >= (((var_1) << (((/* implicit */int) ((((/* implicit */int) arr_4 [(_Bool)1])) > (((/* implicit */int) (unsigned char)149)))))))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_0 [i_3]);
                                arr_23 [i_7] [i_4] [i_4] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))));
                                arr_24 [i_4] [i_3] [i_4] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) (signed char)-55);
                                arr_25 [i_3] [i_4] [i_5] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned short)889))) ? (((((/* implicit */int) ((signed char) (unsigned short)10009))) << (((((/* implicit */int) (signed char)55)) - (38))))) : (((/* implicit */int) max((var_9), ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10009)) ? (arr_19 [i_5] [i_5] [i_4] [i_4] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((-2006701187) > (((/* implicit */int) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_3] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_8] [i_4]), (var_9))))) : (((long long int) arr_1 [i_3] [i_4]))));
                        var_26 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        arr_29 [i_4] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((((/* implicit */int) ((unsigned short) (unsigned short)9993))) - (9976)))));
                    }
                    arr_30 [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_22 [i_4] [i_4]) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (short)-18498))))), (((arr_22 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [7LL]))) : (var_1)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_12);
}
