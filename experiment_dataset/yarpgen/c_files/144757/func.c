/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144757
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
    var_17 = var_15;
    var_18 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-113)), (((((((/* implicit */_Bool) 4511898465812329258LL)) || (((/* implicit */_Bool) 2687128058U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) (signed char)72)))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))))))));
    var_19 *= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (312618952) : (var_0)))), (((((/* implicit */_Bool) (signed char)26)) ? (6362842722649458557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-34)) * (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0 + 4])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1333858223)) ? (-2778575090820184888LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)67)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                var_21 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-86))))))) ^ ((~(((long long int) 1195192168U))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))))), (min((((/* implicit */unsigned long long int) (signed char)-99)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 2147483647)))))))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0 + 4])), (max((arr_1 [i_0]), (((/* implicit */long long int) (signed char)-15))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 612208167)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)63)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102))))))))) : (((((arr_1 [i_0 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 1023170383)) >= (3327837610U))))) : (arr_1 [i_1])))));
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (784656085U))))) ? (12488496102530750540ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1])), (1142061711))))));
            }
        } 
    } 
}
