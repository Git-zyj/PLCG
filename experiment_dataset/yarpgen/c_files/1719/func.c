/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1719
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
    var_15 &= ((/* implicit */long long int) ((unsigned short) var_0));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)11))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (unsigned char)154))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1])))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 18446744073709551604ULL))))));
            arr_13 [5LL] [i_2] [i_2] = 4568310355934803133ULL;
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((short) min((arr_7 [i_1]), (((/* implicit */unsigned int) arr_8 [i_2])))))), (((unsigned short) arr_11 [i_2] [i_1] [(_Bool)1])))))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_1])) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_1])))))));
            var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) - (7151353692586553513ULL)))));
        }
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            var_19 -= ((/* implicit */unsigned short) (+((+(arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1])))));
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-64))));
        }
        var_21 = max((max((((((/* implicit */_Bool) -1773160038554291485LL)) ? (var_14) : (((/* implicit */unsigned long long int) arr_7 [i_1])))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-2)))))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (short)8225)))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */short) arr_8 [i_5]);
        var_22 = ((/* implicit */unsigned long long int) ((long long int) (signed char)-84));
    }
}
