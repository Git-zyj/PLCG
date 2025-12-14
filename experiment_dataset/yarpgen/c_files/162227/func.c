/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162227
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
    var_10 = ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (1811808184032149560LL) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_6)) + (45))))))))) / ((+(((/* implicit */int) var_9))))));
    var_13 = ((/* implicit */long long int) (!((!(var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (~((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (-7816642518604641200LL))))))))));
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 7816642518604641190LL)) ? (-7816642518604641217LL) : (7816642518604641199LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7816642518604641217LL)) && (((/* implicit */_Bool) -2639646653275109564LL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_8)), (arr_0 [i_1])))) - (min((((/* implicit */int) var_0)), (arr_8 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0])))))) + (((var_8) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (18446744073709551615ULL)))));
                            arr_10 [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 2]))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), (var_4)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10643)))))))));
                            var_16 = ((/* implicit */unsigned short) (!((_Bool)0)));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_2] [i_2] [i_0] [i_0])) : (18446744073709551588ULL)))) ? (arr_2 [i_0 + 3] [i_0 - 2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)38165))))), (min((((/* implicit */long long int) 1453454334)), (arr_2 [i_0] [i_0]))))) : (min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)122)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((((7816642518604641216LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) var_2))));
                            arr_16 [i_5] [(signed char)0] [(signed char)0] = arr_11 [i_5] [i_4 - 1];
                            arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_8))))) || (((/* implicit */_Bool) (signed char)69))));
                        }
                    } 
                } 
            }
        } 
    } 
}
