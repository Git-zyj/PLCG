/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125551
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((long long int) var_10)))) / (((/* implicit */long long int) var_4))))));
                    arr_8 [i_0] [2ULL] [i_1] [i_0] |= ((/* implicit */signed char) var_2);
                }
                var_14 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (~(-1805790762)))) : (3588681337U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)65535))))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
                var_15 += arr_2 [i_0] [i_0];
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (int i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned int) (short)14092);
                            var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2093))))) || (((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_4]))));
                            var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 2]))) : (min((((/* implicit */unsigned long long int) arr_10 [i_4 + 2] [5LL] [i_3] [i_3])), (arr_5 [i_1] [i_3]))))), (((/* implicit */unsigned long long int) min(((~(arr_9 [i_0] [14ULL] [i_3]))), (((/* implicit */int) ((((/* implicit */int) (short)-14093)) == (((/* implicit */int) (unsigned short)27493))))))))));
                            var_19 ^= ((/* implicit */long long int) (~(arr_12 [(unsigned short)2] [i_1] [i_3] [11LL] [i_4 - 3] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) var_9);
    var_21 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 1640919723U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14092))) : (1640919723U))))) == (((/* implicit */unsigned int) 2147483647))));
}
