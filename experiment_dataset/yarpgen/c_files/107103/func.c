/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107103
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((unsigned long long int) 2525904892U))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551592ULL))))))))));
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((((((/* implicit */_Bool) (signed char)-95)) ? (18320460337590056414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))))) & (((/* implicit */unsigned long long int) -268432926)))) - (18320460337326850473ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_1] = min((min((min((var_6), (((/* implicit */unsigned char) var_9)))), (((/* implicit */unsigned char) ((3378625197635737777ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94)))))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1]))))));
                    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3465679309725569866LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))))))) : (arr_2 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((arr_0 [i_1] [1ULL]) + (2147483647))) >> (((-1276898602) + (1276898603))))) < (min((((/* implicit */int) arr_6 [(_Bool)1] [i_2])), (arr_4 [i_0] [i_1])))))))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
                    var_15 = (((!(((/* implicit */_Bool) arr_1 [(unsigned char)13])))) ? (arr_1 [i_1]) : (((1276898602) | (((/* implicit */int) (_Bool)0)))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_1] [(short)8] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((9223372036854775807LL) % (((/* implicit */long long int) arr_0 [i_1] [i_1]))))) : (11930992652305664897ULL))), (((/* implicit */unsigned long long int) min((1624611430), (((/* implicit */int) (unsigned char)242)))))));
                    var_16 = ((/* implicit */unsigned int) arr_6 [(unsigned short)2] [i_3]);
                    arr_11 [i_0 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((arr_4 [i_0 + 2] [i_1]), (-992794994)));
                }
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (min((max((1742987270U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0])))), (((/* implicit */unsigned int) (((_Bool)0) ? (arr_0 [i_0] [i_1]) : (arr_5 [i_0] [i_0 + 2] [(unsigned char)2] [4ULL])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24964))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((5606227993407512535ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (short)10854)))));
}
