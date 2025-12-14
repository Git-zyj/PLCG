/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181678
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max((max((min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) 796179074U)))), (((/* implicit */long long int) ((int) 3086075335153569423ULL))))), (((/* implicit */long long int) arr_0 [(unsigned char)5]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] = ((unsigned char) arr_7 [i_2 + 1] [i_2 - 1] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0])) ^ (((/* implicit */int) arr_5 [i_0]))));
                        arr_14 [2ULL] [i_0] = ((/* implicit */long long int) ((3498788222U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3498788222U))))))));
                        arr_15 [i_0] [i_0] [i_2 + 2] [i_3] [i_3] [(short)2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 796179074U)) ? (arr_7 [i_0] [i_1] [i_3]) : (2088198241)))) & (((unsigned int) -7395816226701436442LL))));
                    }
                }
                /* vectorizable */
                for (short i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
                {
                    arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_0])) : (2147483647)));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_4 + 1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 2]))) - (15360668738555982192ULL)));
                        arr_25 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) 5668514980588104311LL));
                        arr_26 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] = ((((/* implicit */_Bool) arr_5 [i_4 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0])));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = 15360668738555982204ULL;
                    }
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) ((unsigned long long int) -5668514980588104312LL)));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4 + 2] [i_0] [i_1])) + (((/* implicit */int) var_9))));
                    arr_30 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2])) ? (arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2]) : (arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2])));
                }
                for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (short)32));
                    var_19 ^= ((/* implicit */unsigned short) arr_21 [i_6]);
                    var_20 -= ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) ((unsigned long long int) 2413982089978341610ULL))))));
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((3086075335153569424ULL) != (((/* implicit */unsigned long long int) -2008142565)))) ? (((/* implicit */long long int) ((-1818134038) ^ (((/* implicit */int) (unsigned char)75))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_6 - 2] [i_6 - 3]))) + (-6344387532910362764LL)))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32)) & (((var_17) & (((/* implicit */int) ((unsigned short) 15360668738555982192ULL)))))));
    var_23 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_8)))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_17))), (min((15360668738555982193ULL), (((/* implicit */unsigned long long int) -231957065))))))));
}
