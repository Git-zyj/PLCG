/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120641
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
    var_20 = ((((/* implicit */_Bool) ((((7606213099617650081ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42530))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_15))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((0ULL) / (((/* implicit */unsigned long long int) ((long long int) (unsigned char)255))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(var_13)));
                    var_21 -= ((/* implicit */unsigned short) arr_4 [i_2 + 2] [i_2 - 3] [i_2 - 2]);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((18446744073709551606ULL) - (18446744073709551594ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_4 [i_2 - 3] [i_2 - 3] [i_1]))))) >= (14783683226648166849ULL)));
                                var_23 &= ((((/* implicit */_Bool) -8601024920426923942LL)) ? (((/* implicit */int) (unsigned short)53383)) : (((/* implicit */int) (unsigned short)53367)));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7606213099617650069ULL))));
                            }
                        } 
                    } 
                }
                arr_15 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
