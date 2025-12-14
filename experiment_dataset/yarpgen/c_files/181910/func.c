/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181910
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
    var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */int) var_7))))), (max((var_8), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                                arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((var_12) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) - (7862))))) <= (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0] [i_0] [i_4] [i_0])), (var_9)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_11))));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_5)), (var_8))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1]))))));
                var_18 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_4)), (arr_7 [i_0] [i_1]))) <= (min((((/* implicit */long long int) var_6)), (arr_7 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-67)) == (((/* implicit */int) (signed char)-48))))) : (max((((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_0] [i_0])), (max((var_9), (((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (var_9))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_10))))))) < ((-(min((((/* implicit */long long int) var_4)), (var_12)))))));
}
