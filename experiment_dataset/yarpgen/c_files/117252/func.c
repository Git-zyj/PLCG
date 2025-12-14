/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117252
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_16 |= ((/* implicit */long long int) 667188309);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3])) ? (((/* implicit */long long int) -667188333)) : (arr_5 [i_0] [i_0] [i_3]))));
                                var_18 *= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -667188323))))) << (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned short)20])) : (((/* implicit */int) (signed char)99))))))), (((((/* implicit */long long int) arr_11 [i_1] [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 2])) % (arr_4 [i_0] [i_0] [i_2])))));
                                var_19 *= ((/* implicit */unsigned int) (unsigned short)65535);
                                arr_13 [i_0] [3LL] [i_2] [i_0] [i_4] [i_1] = ((/* implicit */_Bool) ((signed char) (unsigned short)47089));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) arr_18 [i_0]);
                                var_21 = ((/* implicit */unsigned short) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) <= (arr_5 [i_0] [i_0] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)82)), (max((1982004138), (((/* implicit */int) (signed char)82))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6] [i_0] [i_0] [i_6 + 1] [i_6])) ? (arr_14 [i_6 + 1] [i_6] [(_Bool)1] [i_6] [i_6 - 1] [i_6 + 1]) : (((/* implicit */long long int) arr_11 [i_6] [i_6] [i_6] [i_6 + 1] [i_5]))))) | (((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (arr_16 [i_2] [i_0]) : (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_6])))))));
                                var_23 = ((/* implicit */int) ((((unsigned long long int) (unsigned short)65535)) == (((7631128640510530971ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0])) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((var_9) <= (var_9)))), (max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)104))))))));
    var_25 = ((/* implicit */short) var_14);
    var_26 = ((/* implicit */long long int) var_12);
}
