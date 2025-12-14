/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156886
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
    var_12 = ((/* implicit */unsigned int) ((unsigned short) var_0));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (-(min(((~(((/* implicit */int) (unsigned char)75)))), ((-(((/* implicit */int) var_9))))))));
                var_14 = ((unsigned short) max((((/* implicit */unsigned long long int) (short)16645)), (arr_2 [i_0] [7U])));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) 2416033869U))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) != (((((/* implicit */unsigned int) -1782130578)) ^ (var_1)))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)8481))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_16 &= ((/* implicit */unsigned short) ((long long int) -1LL));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_17 ^= ((((/* implicit */_Bool) ((unsigned short) 438441808U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (max((((/* implicit */unsigned long long int) (short)-16645)), (((((/* implicit */_Bool) (unsigned short)65523)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0]))))) ? ((~(var_8))) : (min((25ULL), (((/* implicit */unsigned long long int) var_6)))))))));
                }
            }
        } 
    } 
}
