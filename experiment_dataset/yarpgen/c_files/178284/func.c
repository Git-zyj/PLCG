/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178284
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 134217727))))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */unsigned short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) ((_Bool) var_17))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_17)) - (((/* implicit */int) var_19)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) ((_Bool) arr_7 [i_3 + 4] [i_3 + 2] [i_3 + 2])))));
                        var_21 = max((((/* implicit */long long int) max((((int) 9223372036854775797LL)), (((/* implicit */int) var_10))))), (arr_7 [i_3 + 1] [i_2] [i_1]));
                    }
                    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)7132)) : (((/* implicit */int) arr_9 [i_4 + 2] [i_2] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (557866731U)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26098))) : (-4755955035750043015LL)))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_2] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) 4755955035750043019LL)))))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_2] = max((((signed char) 31)), (((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */int) arr_5 [i_0] [i_2]);
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_6)))))) || (((/* implicit */_Bool) max(((unsigned short)51262), (min((((/* implicit */unsigned short) (short)-26102)), (var_5))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((short) 18446744073709551607ULL));
                        arr_17 [i_5] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned short)58662))))));
                    }
                    var_25 = ((/* implicit */short) ((min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), (arr_1 [i_2])))))) != (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1233745171U)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned short)127)))) >> (((((/* implicit */int) arr_1 [i_2])) - (22651))))))));
                    var_26 = ((/* implicit */unsigned short) arr_0 [i_2] [i_0]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) var_17);
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) arr_4 [i_6] [i_6]))))) / (618308652U));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4755955035750043008LL)) ? (((/* implicit */int) min(((short)32737), (((/* implicit */short) (unsigned char)167))))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) >> (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) 1956996621)) ? (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (4755955035750043025LL))) : (min((-8121333140002500416LL), (((/* implicit */long long int) 2132812152U)))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((short) 0U))))))));
        arr_21 [i_6] |= ((/* implicit */long long int) (+(-469611327)));
    }
    var_30 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    var_31 = ((/* implicit */unsigned short) var_18);
}
