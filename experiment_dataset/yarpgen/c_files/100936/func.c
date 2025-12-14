/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100936
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
    var_14 = ((/* implicit */unsigned short) var_2);
    var_15 ^= ((/* implicit */signed char) (~(((unsigned int) ((var_4) == (var_2))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) arr_1 [i_0]))), (var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) && (var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -722772600)) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned short)6])) : (var_3)))))))));
        var_17 -= ((/* implicit */signed char) ((int) (~(((/* implicit */int) (unsigned char)255)))));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */int) var_3);
        arr_6 [i_1 + 1] = ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))));
        var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1])))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3355361051U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) | (var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 722772618)), (21ULL))) <= (((/* implicit */unsigned long long int) (~(2961325600963843006LL)))))))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
            arr_11 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((_Bool) (signed char)99)) ? (0U) : (((3332843478U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_16 [i_1] &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) max((((/* implicit */signed char) arr_9 [i_1] [i_1])), (arr_15 [i_1 + 1])))))) | (((/* implicit */int) var_1))));
            arr_17 [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_11))) ? (((int) (-(((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned char) var_6)))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max(((-(((/* implicit */int) (_Bool)1)))), (((arr_13 [i_1 - 2]) + (((/* implicit */int) arr_9 [i_1 + 1] [i_3])))))))));
        }
        for (int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            var_21 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (1607947576132834242LL))))), (((/* implicit */long long int) ((unsigned char) ((long long int) var_6))))));
            arr_21 [i_1] = ((/* implicit */_Bool) 10909015180872206599ULL);
            arr_22 [i_1] [i_4 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 7537728892837345005ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_23 [12] [i_4 + 1] = ((/* implicit */long long int) max((((int) var_13)), (var_11)));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) 8059327230857709508LL);
        arr_27 [i_5] = ((/* implicit */int) var_13);
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            {
                var_23 &= ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 5U))))), (((signed char) (unsigned short)12710)))))));
                arr_33 [i_6] [i_6] = ((((/* implicit */_Bool) arr_28 [i_6] [i_6])) ? (var_4) : (((/* implicit */int) arr_31 [i_6])));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27214)) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_10))));
}
