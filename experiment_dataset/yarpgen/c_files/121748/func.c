/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121748
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_2)) >= (((min((((/* implicit */long long int) var_1)), (-1LL))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [6ULL]), (arr_2 [(signed char)5])))))))));
                arr_5 [(unsigned char)6] [2LL] [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [4LL])) < (((/* implicit */int) arr_2 [(unsigned short)7]))))) <= (((((/* implicit */_Bool) arr_0 [1LL] [6LL])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551606ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (max(((+(8971276433955794435LL))), (((/* implicit */long long int) arr_4 [(unsigned short)6]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */signed char) var_12);
                            arr_11 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1048524134U) << (((((/* implicit */int) (unsigned short)29355)) - (29333))))))));
                            var_16 |= ((/* implicit */unsigned int) 1804294693);
                            var_17 &= ((/* implicit */unsigned char) 9223372036854775786LL);
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (15149109920230411516ULL)))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : ((~((+(((/* implicit */int) arr_4 [i_1])))))));
                arr_12 [i_1] = ((/* implicit */long long int) arr_9 [i_1] [(signed char)8] [i_0]);
            }
        } 
    } 
}
