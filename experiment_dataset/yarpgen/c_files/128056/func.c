/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128056
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
    var_11 = ((/* implicit */unsigned char) ((max((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_9))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-9756)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-9750)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (short)9756)) : (((/* implicit */int) (_Bool)1))))) : (((7409796146778575549ULL) >> (((1611957153U) - (1611957129U))))))))));
                    arr_11 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((unsigned int) (-(var_3)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) var_2)))) : (max((906537487), (((/* implicit */int) var_2)))))))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                    var_14 = ((/* implicit */int) var_9);
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_3))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26445)))))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))) : (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10)))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 114688U)) ? (((/* implicit */int) (signed char)-59)) : ((-2147483647 - 1)))))))));
}
