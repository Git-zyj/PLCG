/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155115
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (short)19767);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_16 [12] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((arr_6 [i_0] [i_1] [i_2]) || (((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)10] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)6639)) <= (-158349629)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)11323))))))));
                                arr_17 [i_0] [i_1] = max(((!(((/* implicit */_Bool) (unsigned short)6650)))), (var_2));
                                arr_18 [i_0] = ((/* implicit */unsigned short) min((((short) (unsigned short)65535)), (((/* implicit */short) (_Bool)1))));
                                var_14 += arr_2 [i_4];
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned short) (unsigned short)10041)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)0))))), ((((!(((/* implicit */_Bool) 998958584)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1]))) : (((/* implicit */int) (signed char)63))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)65533))));
}
