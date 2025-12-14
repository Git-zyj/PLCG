/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165640
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24046))) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) var_5)) : (((((((/* implicit */int) var_5)) - (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)104)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) + (((/* implicit */int) arr_1 [i_0 + 3]))));
            var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25047)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-25069))))))) | (((unsigned long long int) max((arr_3 [i_1]), (((/* implicit */short) (unsigned char)152)))))));
        }
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((~(((/* implicit */int) (_Bool)1))))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) var_5)), (0ULL)))))) ? (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)10)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (5478573062653217450ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((unsigned short) ((_Bool) (_Bool)1))))));
}
