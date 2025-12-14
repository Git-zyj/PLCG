/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129827
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
    var_12 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_13 ^= ((/* implicit */long long int) max((arr_0 [(signed char)8]), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9655948651593956266ULL)) ? (1509936081U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23675))))), (((/* implicit */unsigned int) (unsigned short)23675)))))));
        var_14 = ((/* implicit */unsigned short) arr_0 [(unsigned short)18]);
        var_15 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)23673)) ? (max((2346824450624363804LL), (((/* implicit */long long int) -2147483635)))) : (((/* implicit */long long int) ((((-2147483645) + (2147483647))) >> (((((/* implicit */int) arr_2 [8LL])) + (18898))))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3714262939U) - (((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 3])) / (arr_1 [i_1 - 1])))) : (max((1509936081U), (1509936082U)))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23673))) : (((1509936083U) & (1614978297U)))));
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 1509936102U)) / (-1474406667511584815LL)))) ? (((((/* implicit */_Bool) 2147483635)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (1229983493U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 3]))));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((max((4294967279U), (1509936082U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-3835)) == (arr_1 [i_1 - 2])))))));
            var_21 = (~(min((((/* implicit */long long int) -2147483640)), (arr_3 [i_1 - 2]))));
            var_22 = ((/* implicit */unsigned char) arr_7 [i_1 + 2] [i_1 + 3] [i_1 - 2]);
            var_23 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(signed char)6] [i_5] [i_6] [i_7])) & (((/* implicit */int) arr_12 [i_1] [i_1]))))) ? (arr_1 [i_1 + 2]) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_4])) : (var_2)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1509936082U)) ? (((/* implicit */long long int) -2147483635)) : (1474406667511584792LL)))) / (16346587443848498924ULL))) : (((/* implicit */unsigned long long int) max((min((arr_10 [i_4] [(short)1] [i_4]), (arr_14 [i_5] [i_6] [i_5] [i_4]))), (((/* implicit */long long int) var_0)))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)0)), (var_4)))) ? (((12980820462381329668ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_4] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30720)) ? (4186112) : (((/* implicit */int) (unsigned short)63315)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1640))));
                                var_26 = ((/* implicit */int) max((((arr_19 [(unsigned char)16] [14LL] [i_1 - 1] [(unsigned char)16] [(unsigned char)16] [i_6]) / (arr_19 [i_1] [i_4] [i_1 + 1] [i_4] [i_1 + 1] [i_5]))), (((/* implicit */long long int) min((((/* implicit */int) ((5465923611328221964ULL) > (arr_0 [i_4])))), (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_6] [i_4])) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) arr_18 [i_7] [i_5] [(short)3] [i_1])))))))));
                                var_27 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (short)-1652))) / (arr_3 [i_1]))), (arr_4 [i_5])));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)26291)) ? (arr_4 [i_1]) : (arr_14 [i_1] [i_1] [12LL] [i_5]))), (((((/* implicit */long long int) arr_1 [i_1])) & (arr_3 [i_1])))))) == (min((((15236493546244769740ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))), (((/* implicit */unsigned long long int) ((arr_10 [i_4] [i_4] [i_5]) == (((/* implicit */long long int) arr_8 [(unsigned char)17])))))))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4]))));
                    var_30 = ((/* implicit */int) ((2785031214U) >> (((2147483644) - (2147483629)))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_31 = min((((/* implicit */unsigned long long int) 3552828473U)), ((~(max((((/* implicit */unsigned long long int) 1025028425)), (arr_0 [i_4]))))));
                                var_32 = ((/* implicit */short) max((1509936081U), (2785031214U)));
                                var_33 = ((/* implicit */unsigned short) arr_21 [i_1] [i_4] [i_9] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            {
                var_34 = ((/* implicit */unsigned char) max((11), (965201124)));
                var_35 = ((/* implicit */short) 1025028426);
                var_36 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -926182114)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_10]) && (((/* implicit */_Bool) -1288552769905258515LL)))))) : ((((_Bool)1) ? (((/* implicit */long long int) 206186775)) : (-2640666702475082494LL))))), (((/* implicit */long long int) arr_27 [i_10]))));
            }
        } 
    } 
    var_37 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (var_3) : (7934208367667824527LL))), (((/* implicit */long long int) max(((unsigned char)59), (((/* implicit */unsigned char) var_5))))))))));
}
