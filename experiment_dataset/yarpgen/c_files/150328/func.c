/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150328
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) (+((+(9223372036854775807LL)))));
        arr_3 [i_0] = ((/* implicit */int) ((long long int) (~((~(((/* implicit */int) (signed char)124)))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_2])))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_16 [i_2] [i_3] [i_4] = (~((~(((/* implicit */int) var_4)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) 
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) (~((~(var_0)))));
                                arr_20 [i_1] [i_3] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (~(((int) var_6))));
                                arr_21 [i_3] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                                var_15 = ((/* implicit */long long int) ((signed char) arr_4 [i_5 + 4]));
                            }
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(max((arr_1 [i_1]), (arr_8 [i_3] [i_1]))))))));
                            arr_22 [i_3] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_6)))), (var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (var_11)));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_13))));
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
}
