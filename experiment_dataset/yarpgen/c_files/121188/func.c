/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121188
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (2251892507583265759LL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15837890650982570246ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (9892621074322530050ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned short) (~(var_6)));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
        var_15 = ((/* implicit */unsigned int) (-(-1LL)));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) arr_10 [i_2])))));
        var_17 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483626)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((((/* implicit */_Bool) 8785340877836571361ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)992))) : (9661403195872980265ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30594)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_11))))))), (((unsigned long long int) 0U))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) arr_12 [i_3]);
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (1479657193202350982LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_15 [i_3] = ((arr_0 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2979))) : (((unsigned long long int) var_4)));
    }
    var_19 = ((/* implicit */unsigned short) min((9000906847566685593ULL), (((/* implicit */unsigned long long int) (short)23932))));
}
