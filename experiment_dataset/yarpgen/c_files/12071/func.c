/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12071
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_4 [i_0] [i_0] [5U] [i_2])))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_0 [i_1]) / (arr_0 [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_1] [i_1]), (((/* implicit */signed char) (_Bool)1))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)31917)) > (-1716729505)));
                                arr_13 [i_0] [i_3 - 2] [i_4 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((-1517608879) ^ (((/* implicit */int) (short)31899)))), (((/* implicit */int) ((-344429624) != (((/* implicit */int) var_7)))))))) || (((min((arr_7 [i_2 - 1] [i_1] [i_2 - 1] [i_1] [i_4]), (((/* implicit */unsigned long long int) (signed char)44)))) > (max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_10 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1))))) | (min((((/* implicit */unsigned long long int) (short)-12235)), (var_4))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (var_2)))), (max((var_3), (((/* implicit */unsigned long long int) var_1))))))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((((((/* implicit */int) var_6)) < (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))), (((min((((/* implicit */unsigned long long int) var_5)), (var_0))) != (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_7))))))))))));
    var_12 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_5))))), (max((((/* implicit */unsigned long long int) 578266714)), (var_3))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) | (var_2))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))))))))));
}
