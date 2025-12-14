/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185964
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
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) -632457502))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((unsigned long long int) arr_0 [i_0 + 3]))));
        var_14 = ((/* implicit */unsigned char) 844990240);
    }
    var_15 ^= ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) ((((((/* implicit */int) (short)-31233)) + (((/* implicit */int) (unsigned short)52515)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 14098050876612990062ULL)) && (((/* implicit */_Bool) (unsigned short)63473))))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            {
                arr_7 [i_2] = ((/* implicit */int) var_6);
                arr_8 [i_2 - 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((9223372036854775791LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63473)))))) % (((var_3) % (((/* implicit */unsigned long long int) arr_0 [i_1])))))))));
                arr_9 [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)0)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_4 [7U]))))))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned short) var_2);
}
