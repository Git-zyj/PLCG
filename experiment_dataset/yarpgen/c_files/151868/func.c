/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151868
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)-120)) + (123))))) <= (((/* implicit */int) (_Bool)1))))), (((min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_1]))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) : (var_1)))))));
                var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_5))) & (((((/* implicit */_Bool) (unsigned char)255)) ? (var_9) : (((/* implicit */unsigned long long int) 524287))))))));
                var_21 = ((/* implicit */int) ((((((((/* implicit */_Bool) (short)32767)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) var_17)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((arr_2 [i_1] [6U] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))) ? (min((var_0), (((/* implicit */long long int) (signed char)3)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (arr_3 [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_1 + 2] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) arr_10 [i_0]);
                                var_23 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) min((((/* implicit */int) (signed char)19)), (var_17))))), (((((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_4] [i_2])) : (var_4))) >> (((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_3 - 3] [9] [i_4] [i_0])))) - (25644U)))))));
                                var_24 = ((/* implicit */unsigned short) (_Bool)1);
                                arr_11 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [(signed char)0]) == (var_5))))) < (min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [(unsigned short)2] [i_1])))))), ((signed char)-12)));
                                var_25 = ((/* implicit */_Bool) 1056964608U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_5);
}
