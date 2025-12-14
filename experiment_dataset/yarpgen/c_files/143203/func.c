/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143203
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)33123)) : (((/* implicit */int) var_6))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -185655932)) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))));
                        var_13 = ((((/* implicit */_Bool) (unsigned short)16961)) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) ((max((var_4), (((/* implicit */unsigned int) (short)32767)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_14 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_0] [i_0])) >> (((((/* implicit */int) var_2)) - (7413))))) & (((/* implicit */int) arr_13 [i_1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_1]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13857))) : (var_0))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_15 = ((/* implicit */unsigned int) arr_11 [i_0]);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)229))) || (((/* implicit */_Bool) (short)32767)))));
                        }
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (var_3))))));
                            var_18 = ((/* implicit */unsigned char) min(((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16979))))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_23 [i_0] = ((((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_10)))) & (4294967293U))) >> ((((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_7 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max(((short)-32759), (((/* implicit */short) ((arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_3 + 1]) > (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_3 + 1]))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((116332886U) == (2553672901U))))) == (max((((long long int) var_7)), (((/* implicit */long long int) arr_12 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                var_21 = ((/* implicit */signed char) var_10);
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)171)) - (var_9)))), (4294967255U)))));
                var_23 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (signed char)-27)))));
                arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
            }
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (signed char)0))));
        }
        var_25 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((short) var_10))), (max((2075969979U), (36U))))) <= (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) <= (((/* implicit */int) var_5))))))))));
}
