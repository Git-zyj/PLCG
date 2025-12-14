/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116260
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) (+(18446744073709551615ULL)));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((max((var_11), (((/* implicit */unsigned int) (_Bool)0)))) / (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_11 [i_0] [i_3] [(_Bool)1] [i_0]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_2 [i_3]), (var_3)))))))));
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-116)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)67), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)223)) >= (((/* implicit */int) (signed char)-125)))))))) ? (((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */int) var_12)))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) (_Bool)1))));
}
