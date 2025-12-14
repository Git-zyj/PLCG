/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132838
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
    var_16 = ((/* implicit */unsigned char) (+(var_14)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [(signed char)13] = ((/* implicit */short) ((unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)86)))) : (((/* implicit */int) (_Bool)1))))) || (((846792940) > (846792940)))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((((/* implicit */_Bool) max((10774774240702293475ULL), (((/* implicit */unsigned long long int) (unsigned char)238))))) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)9283)))))))));
        var_19 = var_15;
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)2047))));
                var_20 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                var_21 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (short)-9286)))) ? (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-9286))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57036))))) | ((-(((((/* implicit */long long int) var_1)) * (0LL)))))));
            }
        } 
    } 
}
