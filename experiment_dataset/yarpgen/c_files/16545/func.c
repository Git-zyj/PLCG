/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16545
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_8 [i_0])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-94))))) ? (((unsigned long long int) 8972368118456943957LL)) : (((/* implicit */unsigned long long int) min((max((arr_0 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [9LL])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-29))))))))));
                            var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_14)))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(max((arr_0 [i_0 - 1]), (((/* implicit */long long int) (short)1254))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) || ((!((!(((/* implicit */_Bool) var_8))))))));
}
