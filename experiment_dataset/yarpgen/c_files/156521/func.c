/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156521
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
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) 861831434U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) == (3433135862U))))) : (3433135862U)))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_0] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */signed char) min((((((/* implicit */int) arr_15 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])) << (((arr_2 [i_0]) - (3688592089597552737LL))))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)220)))))))) : (((/* implicit */signed char) min((((((/* implicit */int) arr_15 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])) << (((((arr_2 [i_0]) - (3688592089597552737LL))) + (1423511883750014562LL))))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)220))))))));
                                var_16 = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) var_3)))))) - ((+(((int) 6237822975816416243LL))))));
                                arr_17 [i_0] [(unsigned short)20] [i_0] [i_3] [i_4] = ((/* implicit */int) (unsigned char)166);
                                var_17 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_1 + 1] [i_2 + 3] [i_4])))) != (((/* implicit */int) min((arr_12 [i_0] [i_0 - 2] [i_1 - 2] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned short) (unsigned char)36)))))));
                                arr_18 [(unsigned short)20] [22U] [22U] [22U] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) || (((/* implicit */_Bool) (+((+(var_13))))))));
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) (signed char)-24);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5 + 3] [i_5 + 3] [i_6 + 1] [i_6]))) : (var_2))) | (((/* implicit */unsigned long long int) (+(-6237822975816416244LL))))));
                arr_24 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((var_11) - (((/* implicit */int) var_3)))))))));
                var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (1503318703)))) - (max((((/* implicit */unsigned long long int) var_7)), (var_12))))) + (((/* implicit */unsigned long long int) 1615812296U))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)126))) ? (min((var_10), (((/* implicit */unsigned int) -1503318698)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-4184)) : (((/* implicit */int) arr_0 [i_6 + 1] [2ULL])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((11289004201146749102ULL) == (((/* implicit */unsigned long long int) -2125549772))));
                var_23 = ((/* implicit */short) ((5685756484631565060ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203)))));
            }
        } 
    } 
}
