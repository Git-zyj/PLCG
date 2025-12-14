/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180734
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
    var_11 += ((/* implicit */unsigned char) var_6);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (((((/* implicit */_Bool) 1150496951026259029ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2233076522U)))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-84))))) ? (max((((((/* implicit */_Bool) 2061890773U)) ? (-1447621741427734476LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5964)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1 - 1])) + (((/* implicit */int) ((unsigned short) (unsigned short)57018))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((arr_5 [i_1 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5935)))))))));
                                var_16 = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (unsigned short)5964);
            }
        } 
    } 
}
