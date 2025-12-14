/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155871
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_17)), ((-((-(var_7)))))));
    var_20 += ((/* implicit */unsigned long long int) var_17);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (signed char)-14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (max((((/* implicit */unsigned long long int) -3830522286590550727LL)), (((((/* implicit */unsigned long long int) var_5)) + (var_11))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_2 [i_1]), (max((arr_2 [i_0]), (((/* implicit */long long int) var_15))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((unsigned int) arr_6 [i_3 - 1])))));
                        var_23 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_9 [i_0] [i_0] [i_0])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) (~(arr_5 [i_1] [i_4])));
                        arr_15 [i_4] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                    }
                    for (long long int i_5 = 1; i_5 < 6; i_5 += 4) 
                    {
                        arr_18 [i_5] [i_2] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
                        arr_19 [i_5] [i_5 + 4] [i_2] = ((/* implicit */short) min((arr_8 [i_0] [i_2] [i_2] [i_5]), (((/* implicit */long long int) (-(arr_14 [i_2]))))));
                        var_25 |= min((arr_13 [i_5 + 4] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]), (((/* implicit */long long int) ((unsigned char) -2047805378))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0]);
                            arr_27 [i_2] [i_2] = arr_17 [i_2] [i_2] [i_7];
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7])), (arr_5 [i_1] [i_1]))))));
                            var_27 *= ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((short) (signed char)-1)), (((/* implicit */short) (signed char)-30)))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((arr_9 [i_6] [i_2] [i_0]), (((/* implicit */long long int) (signed char)(-127 - 1))))) : (min((arr_8 [i_0] [i_1] [i_2] [i_6]), (((/* implicit */long long int) 576400284U))))));
                        var_30 += ((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_2] [i_6])) >= (((/* implicit */int) arr_25 [i_1] [i_1] [i_2] [i_1] [i_6]))))));
                        var_31 = ((/* implicit */short) max((arr_23 [i_2] [i_0] [i_2] [i_6] [i_0] [i_6]), (min((arr_23 [i_6] [i_6] [i_2] [i_2] [i_1] [i_0]), (576400284U)))));
                    }
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_7 [i_1] [i_2])), (3709110662690623725LL)));
                    var_33 = ((((/* implicit */_Bool) min((min((-1311223981954422519LL), (6170779613556245766LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1)), (arr_23 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]))))))) && ((!(((/* implicit */_Bool) var_0)))));
                }
                var_34 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_1]))), (min((arr_11 [i_0] [i_0] [i_1]), (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) var_3);
}
