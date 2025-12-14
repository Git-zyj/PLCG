/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126833
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
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) || (((((/* implicit */int) var_6)) >= (((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (~((~(arr_0 [i_0] [i_1]))))))));
            var_21 = ((/* implicit */long long int) (~((+(-1715776736)))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3797378930658869232LL)) ? (2209216984775258985LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) var_16);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) var_17)))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15872)) ? (arr_4 [i_0] [i_0] [i_0]) : (var_10)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? ((~(arr_1 [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_27 &= (~(((unsigned int) (unsigned short)47664)));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_28 = ((/* implicit */_Bool) arr_8 [i_4] [i_4]);
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (max((((/* implicit */long long int) arr_1 [i_4] [i_4])), (arr_5 [i_4] [i_4]))) : (min((((/* implicit */long long int) var_7)), (arr_0 [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_14))))) ? ((-(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_9))))));
    var_31 = ((/* implicit */int) var_10);
}
