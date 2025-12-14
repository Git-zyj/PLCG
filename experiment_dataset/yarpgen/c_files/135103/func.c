/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135103
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((max((-889264736), (((/* implicit */int) (unsigned char)181)))), ((~(((/* implicit */int) var_13))))))) == (((((/* implicit */_Bool) 6080099562544380994ULL)) ? ((~(arr_0 [i_2] [i_2]))) : (min((arr_0 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_1 [(short)6]))))))));
                                var_20 = ((/* implicit */unsigned long long int) min(((((~(-889264739))) > (((/* implicit */int) ((signed char) var_13))))), (max(((!(((/* implicit */_Bool) (short)-22025)))), (((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((_Bool) (~(arr_10 [i_0])))))));
                var_22 += ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_10))))));
}
