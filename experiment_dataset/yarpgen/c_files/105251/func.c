/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105251
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_14 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1771288179584446859LL)) ? (3176716661308054448LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5075))))) < (((/* implicit */long long int) arr_3 [i_0]))));
            arr_4 [6U] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_3 [i_0]))), (var_6)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]);
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) (-(arr_5 [i_2 + 2] [i_2] [i_2] [i_2 - 2])));
                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1] [i_0])) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 2]))))));
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)37415);
            }
            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0] [i_1]))))))), (var_4)));
        }
        var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)5)), (var_9))))) > (max((((/* implicit */unsigned long long int) -8895263593670282187LL)), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_19 = ((/* implicit */long long int) var_5);
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44100))) : (13886917402350118084ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) var_8)))))));
        arr_13 [i_3] = ((/* implicit */short) 4526820038966665093LL);
        var_20 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (signed char)0)))) + (2147483647))) << (((((unsigned int) arr_10 [i_3] [i_3])) - (4294967267U)))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2377342595U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [1U] [i_3]))))))));
    }
    var_21 = ((/* implicit */unsigned short) 67108863ULL);
}
