/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10351
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_10)))))))), (((((/* implicit */_Bool) (short)16350)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26749)))))));
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (-((-(max((-4965424028605335656LL), (((/* implicit */long long int) (short)0)))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0])), ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (~(arr_2 [i_1])))), ((-(arr_4 [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                            var_16 = ((/* implicit */unsigned short) (+((((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) -4965424028605335656LL)))))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(131071U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82))))) : (((/* implicit */int) arr_12 [i_2] [11LL] [i_2]))));
                            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1])))) + (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_10 [(signed char)9] [i_1 - 1] [i_1 - 1] [(unsigned short)15] [i_1]))))));
                        }
                    } 
                } 
                var_19 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12952)))))))), (min((((/* implicit */long long int) (unsigned short)27326)), (4965424028605335637LL))));
            }
        } 
    } 
}
