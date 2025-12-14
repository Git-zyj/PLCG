/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135671
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [13ULL])) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) >= (13U))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 181158273U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1])) && (((/* implicit */_Bool) arr_4 [i_0] [(signed char)10] [i_0])))))) : (((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned long long int) 68501187U)) : (17793686859812294514ULL))))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) (short)-5431))) / (((((/* implicit */_Bool) ((signed char) 4294967276U))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (16569141627151832792ULL) : (arr_2 [i_0])))))));
                    var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (arr_7 [i_0] [i_1] [(signed char)3]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [0ULL] [i_2 - 1])) ? (3057318187U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5422)))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned long long int) 4249308022U)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 266897638U))))))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_15 [i_4 + 2] [i_3 - 1] [i_2 - 2] [i_0])))))) > ((((!(((/* implicit */_Bool) (signed char)76)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4113809022U)))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 2] [i_2] [i_3]))) : (18446744073709551598ULL)))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(762066589U)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)20] [i_0])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_6 [i_1] [i_3] [i_4]))))), (((((/* implicit */_Bool) 4249308022U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_4])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [16U]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (short)11564);
}
