/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104595
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
    var_10 = ((/* implicit */signed char) min((min((((int) var_2)), (((var_5) & (((/* implicit */int) var_2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-12)), ((unsigned short)7)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_0 [(short)21] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5843)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))) || (((((/* implicit */unsigned long long int) var_7)) >= (arr_0 [i_0 + 1] [i_0 - 1]))))))));
        var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14569)) ? (((/* implicit */int) (short)-18013)) : (((/* implicit */int) (short)27604))))) ? (9223372036854775803LL) : (((/* implicit */long long int) var_3)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) max((var_13), ((short)-18013)));
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_1)))) != ((~(((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_6 [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)3584);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7053234344990980318LL)));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [i_2] [i_2]))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_17 = max((((((/* implicit */_Bool) -7053234344990980319LL)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_3] [i_3])), ((unsigned short)0))))))), ((-(7053234344990980306LL))));
        var_18 = ((/* implicit */unsigned int) 9223372036854775803LL);
    }
}
