/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156003
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_17))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [4LL] [4LL])) && (((/* implicit */_Bool) (signed char)100)))) ? (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (-5002400088914528178LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)1)))))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)124))))), (min((5002400088914528178LL), (((/* implicit */long long int) (signed char)-99))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))) < ((~(15U)))));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)244)))) : (((((/* implicit */int) (unsigned short)25885)) ^ (17830665)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) min((arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1]), (((/* implicit */short) (unsigned char)229))))), (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) -268426036)) : (var_13))))))))));
                                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1081076450)))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_15))) : (((/* implicit */long long int) var_8))));
                                arr_18 [i_4] [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0])) : (var_10)))) ? (((/* implicit */unsigned long long int) ((int) arr_12 [i_0]))) : ((+(var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
