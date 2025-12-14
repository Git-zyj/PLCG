/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104682
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
    var_17 |= ((/* implicit */long long int) (-(((int) var_5))));
    var_18 ^= ((unsigned short) ((((/* implicit */_Bool) min(((short)22996), (((/* implicit */short) (signed char)96))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22978)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23000))) : (0U)))) : (min((var_5), (((/* implicit */unsigned long long int) var_7))))));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) ((((/* implicit */int) (short)-22995)) * (((/* implicit */int) var_11)))))), ((~(((/* implicit */int) ((unsigned char) 2147483647)))))));
    var_20 = ((/* implicit */signed char) min(((short)32767), (((/* implicit */short) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_6 [i_0] = ((/* implicit */short) var_4);
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22996))))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))))))));
                }
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_4 [10U] [i_1] [i_0]) % (arr_1 [i_1])))))) : (min((((/* implicit */long long int) ((unsigned int) var_4))), (((((/* implicit */_Bool) (signed char)-111)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2399566916U))))))));
                var_23 = ((/* implicit */unsigned int) var_10);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2])) != (((/* implicit */int) (short)96))))) : (min((((/* implicit */int) (!(var_15)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0]));
            }
        } 
    } 
}
