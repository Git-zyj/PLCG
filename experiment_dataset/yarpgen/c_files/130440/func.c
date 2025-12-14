/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130440
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_14 = (-(((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))));
                            arr_13 [i_0] [i_0] [(unsigned char)2] [i_0] [i_3 - 1] [i_3 + 2] = ((/* implicit */signed char) arr_11 [i_0] [i_0]);
                            var_15 = ((/* implicit */short) (!(((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_0])) == (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_3]))))))));
                        }
                    } 
                } 
                arr_14 [8U] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) var_3))))) ? (((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) var_8))))) : (max((((((/* implicit */_Bool) (signed char)123)) ? (arr_12 [10ULL] [i_1 + 2] [i_0] [10ULL]) : (arr_2 [i_1]))), (arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [(short)6])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_3)))))))));
    var_17 = ((/* implicit */unsigned long long int) var_6);
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_13)) >= ((-((~(((/* implicit */int) var_13))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / ((-(((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) var_2)), (var_9)))))));
}
