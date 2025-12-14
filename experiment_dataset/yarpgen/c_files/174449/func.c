/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174449
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0])))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) != ((~(2269814212194729984ULL)))));
                            arr_13 [i_3] [(unsigned short)2] [i_3] [(unsigned short)2] [i_3] [(unsigned char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3 - 1]))))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3 + 3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)12])))))))))));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)34)), ((short)32767)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33)))))) : (arr_11 [i_0] [i_0] [i_0] [5U] [i_0] [i_1])));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_4)))) << ((((~(var_1))) + (4921123215662620668LL)))))) : (min((((/* implicit */unsigned long long int) ((short) var_5))), (arr_7 [14LL] [i_1 + 1] [14LL])))));
            var_21 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [9LL] [i_1])) : (((/* implicit */int) var_4)))) << (((((((/* implicit */_Bool) arr_4 [(signed char)3] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) - (11664207578572784752ULL)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_22 |= ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
            arr_18 [i_0] [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */short) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (52111)))))) ? (((arr_7 [i_0] [i_0] [i_5]) << (((((/* implicit */int) arr_17 [i_0] [i_5])) - (16790))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [(_Bool)1] [i_5] [i_0])))) ? (max((var_1), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) : (((/* implicit */short) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (52111)))))) ? (((arr_7 [i_0] [i_0] [i_5]) << (((((((/* implicit */int) arr_17 [i_0] [i_5])) - (16790))) - (9320))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [(_Bool)1] [i_5] [i_0])))) ? (max((var_1), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_2 [i_0]))))))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) ((short) (+(((((/* implicit */_Bool) (short)-17227)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20680)))))));
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-16384)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    var_26 *= ((signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-4676)) : (((/* implicit */int) (_Bool)1))))), (((long long int) var_13))));
}
