/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10186
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
    var_20 ^= ((unsigned int) ((((/* implicit */int) (short)15558)) + (((/* implicit */int) (short)-1))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((~(12995946247882859140ULL))) : (4771435466192736770ULL)));
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-2)) && (((/* implicit */_Bool) (short)-1)))))));
    var_23 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */long long int) (unsigned short)51191)))), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_0] [i_1 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15558))) >= (((((/* implicit */_Bool) (short)-15558)) ? (1390983854174484589ULL) : (5450797825826692472ULL)))));
                            var_24 = ((/* implicit */unsigned int) max((arr_5 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15558)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) : (224502450U))))));
                            var_25 = (i_3 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((arr_11 [i_3] [i_1]) + (9223372036854775807LL))) >> (((var_19) - (3162514293U)))))), (max((((4399225172557187121ULL) >> (((2147483647) - (2147483621))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)207)), (var_18))))))))) : (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((arr_11 [i_3] [i_1]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_19) - (3162514293U)))))), (max((((4399225172557187121ULL) >> (((2147483647) - (2147483621))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)207)), (var_18)))))))));
                        }
                    } 
                } 
                var_26 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) >= (min((arr_7 [i_0] [i_0] [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) var_5)))));
                arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(arr_0 [i_0]))) : ((-(var_2)))))) ? (((/* implicit */unsigned long long int) var_18)) : (((((unsigned long long int) var_7)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_14))))))));
                var_27 -= ((/* implicit */signed char) var_14);
            }
        } 
    } 
}
