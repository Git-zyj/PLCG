/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185620
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
    var_13 = ((/* implicit */unsigned short) max((max(((+(var_3))), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (signed char)-35))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (unsigned short)14692);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 |= ((/* implicit */short) min((max((((((/* implicit */_Bool) (unsigned short)25818)) ? (-925658623) : (((/* implicit */int) (signed char)-106)))), (((((/* implicit */_Bool) (unsigned short)3)) ? (-925658628) : (((/* implicit */int) (signed char)-119)))))), (((int) (signed char)-7))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) (signed char)34)))))));
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-20))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-60))) >= (-4446879686979253185LL))))) : (arr_3 [i_3] [i_0 + 1])))));
                                var_18 = ((/* implicit */unsigned char) 7066210);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_19 ^= ((/* implicit */long long int) (~(18ULL)));
                    var_20 |= ((/* implicit */unsigned char) (signed char)86);
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)6)), (((unsigned long long int) (short)-18679))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50843))) | (4294967275U)))));
}
