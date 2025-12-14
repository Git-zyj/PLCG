/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121931
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
    var_12 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))), ((!((!(((/* implicit */_Bool) var_2))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_10 [i_0 + 3] [i_1] [i_2] [i_0 + 3] = max((min((((long long int) (short)0)), (((long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) max(((short)14), ((short)-2435)))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])) ? (((/* implicit */int) (short)26531)) : (((/* implicit */int) (unsigned char)230))))))));
                        var_14 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)-64)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187)))))))), (var_1)));
                        var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_6 [(short)18]))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-2147483647 - 1)))));
                    }
                    arr_11 [i_0] [i_0] = ((_Bool) (~(((/* implicit */int) arr_2 [i_0]))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 3ULL))) ? (((((/* implicit */_Bool) max((arr_3 [0LL]), (((/* implicit */unsigned long long int) (unsigned char)200))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (var_0))))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                    var_18 = ((/* implicit */long long int) ((unsigned short) var_4));
                    var_19 = ((/* implicit */long long int) ((((int) arr_0 [i_0 + 1])) + ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_12 [i_0] |= ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_0 + 2] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((2197854624U), (((/* implicit */unsigned int) (signed char)-86))))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_14 [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) 29278568973758908ULL))) || ((!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) max(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) 805306368U))))))))))));
            var_22 *= ((/* implicit */long long int) ((min((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)230))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_18 [i_4 + 2] [i_4 + 1] [i_4 - 2])))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))));
            var_24 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (+(arr_15 [i_4 + 1] [i_5])))), (((((/* implicit */_Bool) (unsigned char)186)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))))))));
        }
        arr_20 [i_4] &= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) 18446744073709551610ULL))), (max((((/* implicit */int) arr_4 [i_4 - 2] [i_4 + 2])), (var_4)))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (18417465504735792707ULL) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26670)) ? (((/* implicit */int) (short)-28588)) : (((/* implicit */int) (short)-10719))))) : ((~(9223372036854775801LL)))));
        var_26 ^= ((/* implicit */_Bool) arr_15 [i_4] [i_4]);
    }
    var_27 = ((/* implicit */_Bool) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (var_1))))))));
}
