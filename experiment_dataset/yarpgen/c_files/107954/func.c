/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107954
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_1) >= (var_2)))), ((+(13564500079521953490ULL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 5317911298924189721LL))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((3753022935U) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (var_0) : (15911319965647961935ULL))))) : (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))))))));
                    var_15 = ((/* implicit */unsigned int) ((((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) (~(((unsigned int) -9006485684872550779LL)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_13 [i_4] = ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) & (5317911298924189721LL)));
                            var_16 = ((/* implicit */signed char) (-(((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_10))))))) > (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_5)))))));
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -980921852)) - (((((8588913631956991680ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))))) << (((((unsigned long long int) (unsigned char)255)) - (195ULL)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) % (((((/* implicit */_Bool) ((short) -5317911298924189693LL))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_3))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_5 = 4; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-17)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)241)) - (211)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) / (((/* implicit */int) ((signed char) var_11)))));
                                var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)105))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (3753022957U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) 2544880527U)))));
                }
                for (long long int i_8 = 4; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) + (-4601189778467647815LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25321))) : (var_8)))) : (max((18446181123756130304ULL), (((/* implicit */unsigned long long int) -9006485684872550779LL))))))) ? ((~(max((((/* implicit */unsigned long long int) (unsigned char)16)), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                    var_25 += ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) max((((/* implicit */unsigned int) (unsigned char)146)), (var_12)))));
                }
                for (long long int i_9 = 4; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((max((11477411796075848223ULL), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) var_8))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)184)), (var_2))) : (((/* implicit */unsigned long long int) var_9))))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) var_8)))))) * (((((/* implicit */_Bool) var_1)) ? (11477411796075848236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))))))));
                    var_27 += ((/* implicit */short) (-(((((/* implicit */unsigned long long int) 2098337261)) & (var_2)))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((int) max((((/* implicit */unsigned int) var_9)), (var_12)))))));
}
