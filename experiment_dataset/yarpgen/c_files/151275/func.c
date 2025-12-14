/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151275
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((/* implicit */int) ((2362482674U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28185))) == (5809116942830022595ULL))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) var_1);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (unsigned char)247)) ? ((-(arr_0 [i_0]))) : (((/* implicit */long long int) (~(arr_1 [(short)12]))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */int) (unsigned char)152)) << (((6776601961447728353ULL) - (6776601961447728345ULL))))))));
        arr_5 [i_1] = ((/* implicit */short) arr_1 [(unsigned char)1]);
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)223)), (102292818893160940ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_0 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))) : (((((arr_0 [i_1 - 2]) + (9223372036854775807LL))) >> (((-2013638207) + (2013638251)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */short) ((1329755101U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))));
    }
    var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (var_10))), (var_10)));
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_15 [(_Bool)1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) 35958428274786304ULL);
                    arr_16 [i_2] [i_2] [i_3 - 1] [i_2] = ((/* implicit */signed char) (unsigned char)58);
                }
            } 
        } 
    } 
}
