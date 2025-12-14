/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145324
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
    var_11 = (-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))));
    var_12 = ((/* implicit */unsigned short) (-(max(((+(((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) (signed char)-8))))))));
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (unsigned short)4088);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) arr_6 [i_0 - 1] [11LL] [i_1]);
            var_15 |= (unsigned short)0;
        }
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned short)61445))));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)7)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) arr_8 [i_2 - 2] [i_0 + 3] [i_0]))));
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 8191)) ? (((arr_9 [i_0] [i_0] [(_Bool)1]) % (((/* implicit */long long int) arr_2 [i_2 - 1] [i_0])))) : (66571993088LL)));
            arr_11 [i_2] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-8)) / (arr_0 [i_2])))));
        }
        arr_12 [i_0 + 2] = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])) : (17591917608960ULL)))))));
    }
}
