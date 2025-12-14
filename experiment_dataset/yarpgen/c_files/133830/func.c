/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133830
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                    arr_8 [i_2] = max((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) ((signed char) var_2))));
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (0ULL)))))));
                    var_12 = max(((~(288230101273804800ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_6)))));
                }
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (signed char)37))));
                    var_14 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (signed char)62)), (var_7))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                for (short i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 3; i_6 < 6; i_6 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (max((((((/* implicit */_Bool) var_10)) ? (var_10) : (var_6))), (var_6)))))));
                        arr_20 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || ((!(((/* implicit */_Bool) (signed char)-1))))))));
                    }
                    for (signed char i_7 = 3; i_7 < 6; i_7 += 3) /* same iter space */
                    {
                        arr_23 [(signed char)0] = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) var_4)), (max((var_5), (((/* implicit */unsigned long long int) (signed char)0)))))));
                        arr_24 [i_0] [i_1] [i_5 - 3] [i_5 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) (short)30720)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_1), ((short)64))))))) : (11320303652628790399ULL)));
                        var_16 = ((/* implicit */short) var_8);
                        arr_25 [i_0] [i_0] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (6835812312108464530ULL) : (var_7)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)54)))) : (((/* implicit */int) var_2))))));
                    }
                    arr_26 [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)85)), (var_10)))) ? (((((/* implicit */_Bool) (-(var_3)))) ? (max((var_10), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) : ((-(((((/* implicit */_Bool) 17592118935552ULL)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-15)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)112))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))))) ? (var_10) : (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-22776)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (52)))))) ? ((~(10570771560662606876ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27276))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
}
