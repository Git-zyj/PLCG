/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188562
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
    var_19 = ((/* implicit */unsigned short) 14974685065916562707ULL);
    var_20 = ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) var_0)), (var_2))))) + (9223372036854775807LL))) >> (((var_2) + (2686154051606777738LL)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_10)), (arr_2 [19])))))) ? (((((/* implicit */_Bool) min(((unsigned short)53974), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : ((+(15206537573151972348ULL))))) : (((/* implicit */unsigned long long int) (((~(2335402161U))) & (arr_2 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_0] = var_16;
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10563362683083310616ULL)) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) (unsigned char)9))))));
            arr_6 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) (unsigned char)160))));
        }
        for (short i_2 = 4; i_2 < 24; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) arr_1 [17LL] [17LL])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_7 [i_2 - 3] [i_0] [i_2 - 3])))))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
        }
        var_24 = ((/* implicit */unsigned short) (-(-9115967308002515540LL)));
        var_25 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned short)27196)) : (((/* implicit */int) (_Bool)1)))));
    }
}
