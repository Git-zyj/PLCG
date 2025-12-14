/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188528
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_11 -= ((/* implicit */_Bool) (unsigned short)29977);
            arr_6 [i_0] = ((((/* implicit */_Bool) (unsigned short)35554)) ? (((/* implicit */long long int) ((/* implicit */int) ((450067370U) <= (3894437084U))))) : (((((/* implicit */_Bool) 1769728695180040042LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0] [i_0]))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3849639565U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (3894437103U))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8641189141267145340LL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-42)))), (((/* implicit */int) ((168428288959025128LL) >= (((/* implicit */long long int) 3894437101U))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_12 = 18446744073709551615ULL;
                    var_13 *= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3]))))) | (18139516195952124685ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 314225322314854958LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-120))))) + (((((/* implicit */_Bool) 0U)) ? (29ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))))))));
    var_15 ^= ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) var_2))))) > (((/* implicit */int) (!(((/* implicit */_Bool) 3228672494U))))))))));
}
