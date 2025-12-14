/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188926
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
    var_19 = ((/* implicit */_Bool) min((((long long int) -9152246008244315301LL)), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10437)))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) : (var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1905996540)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) * (11320534882703736982ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2067379383) & (((/* implicit */int) (unsigned short)54506))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 11320534882703736971ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (7126209191005814649ULL))))));
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_17)) > (2067379374))));
                    var_24 = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_16)) << (0ULL))) ^ (var_3))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) == (18446744073709551604ULL))))));
                    var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2])))))));
                }
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_1 [4LL] [i_1]))));
                var_27 += ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned short) max((arr_3 [i_0 - 1] [i_0 - 1]), (max(((signed char)-111), (((/* implicit */signed char) arr_4 [i_1])))))))));
            }
        } 
    } 
}
