/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174424
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
    var_16 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)93))))), (var_1))) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-81)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_8)))) ? (min((((/* implicit */unsigned int) var_15)), (229814751U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_3 [i_0 - 1]))) << (((/* implicit */int) var_13))))));
                            var_19 = ((/* implicit */int) max((((/* implicit */long long int) (short)11703)), (-5970025996024351733LL)));
                            arr_11 [i_0] [i_1] [i_0] [8ULL] &= ((/* implicit */signed char) min((min((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 2] [i_1])), (((((/* implicit */_Bool) (unsigned short)20875)) ? (((/* implicit */int) var_15)) : (var_11))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) (unsigned short)6285)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (short)-32766)))))), (((/* implicit */int) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)1] [i_1]))) >= (var_8)))))))));
            }
        } 
    } 
}
