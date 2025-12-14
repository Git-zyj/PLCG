/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16103
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
    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) & (3125028476U))), (((/* implicit */unsigned int) (signed char)60))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)59))))) / (1152886320234758144LL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-2147483647 - 1)))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (1152886320234758143LL) : (((/* implicit */long long int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)57950)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32758))))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)0)))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20574)) + (((/* implicit */int) (unsigned short)0))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_24 ^= ((/* implicit */unsigned long long int) (-(-3)));
            var_25 = ((/* implicit */signed char) (unsigned short)65535);
        }
        var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2103))) : (0ULL)));
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((-1152886320234758144LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2108))))) / (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1152886320234758144LL) : (((/* implicit */long long int) -1208756158))))));
        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1] [i_1]));
    }
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
    {
        var_27 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -6918087)), (8842944367455540211ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (3746772025588599870ULL))));
        arr_16 [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)63433)), (0)))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_4] [i_4])), ((unsigned short)0))))))) : (((-5372204791727905064LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45650)))))));
    }
    var_28 = ((/* implicit */unsigned short) max((max((((/* implicit */int) (unsigned short)7168)), (((-494769923) - (((/* implicit */int) (unsigned char)152)))))), (2147483647)));
}
