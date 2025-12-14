/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10529
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_3]))))) && (((/* implicit */_Bool) 12762942047400878515ULL))));
                        var_14 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) * (8087839986227088818ULL))));
                        arr_10 [i_3] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) max((((var_4) << (((var_9) - (3810093208712681845ULL))))), (((/* implicit */unsigned long long int) (short)30699)))));
                        var_15 = (-(((long long int) var_1)));
                        var_16 = ((/* implicit */unsigned short) arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                    }
                    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)38))))) * (((long long int) var_3))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)2)), (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)10])))))))));
                                var_19 &= ((/* implicit */unsigned short) 22ULL);
                                var_20 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) var_4);
                                arr_21 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)25065)) ? (1006632960) : (234096223)))));
                                var_22 |= ((/* implicit */int) arr_7 [i_2]);
                                var_23 += ((/* implicit */short) (signed char)35);
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) min((var_4), (((((/* implicit */_Bool) -2975498641236345892LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [(unsigned char)3] [i_0]))) : (var_6))))))));
            }
        } 
    } 
}
