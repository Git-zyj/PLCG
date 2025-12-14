/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171168
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
    var_18 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48685)))))), (13733190584525471132ULL))), (((/* implicit */unsigned long long int) var_1)));
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))), (((var_5) - (var_12))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) != (max((var_16), (((/* implicit */unsigned long long int) (signed char)127))))))) == (((/* implicit */int) min(((signed char)123), ((signed char)-124))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-127)), (1073741823)))) & (max((max((var_16), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16832))) : (var_2))))))));
                                var_22 -= ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-97)) - (((/* implicit */int) (signed char)127)))), (4194296)));
                /* LoopNest 3 */
                for (long long int i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_6] = ((/* implicit */signed char) arr_14 [1ULL] [i_1] [i_1] [i_6] [(unsigned short)19]);
                                arr_20 [i_1] = ((/* implicit */int) (unsigned short)27997);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned short i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_1] [7ULL] [i_1] [(signed char)10] [i_0]))) >= (var_2))) || (((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))));
                            var_25 = ((/* implicit */_Bool) (-(((int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
