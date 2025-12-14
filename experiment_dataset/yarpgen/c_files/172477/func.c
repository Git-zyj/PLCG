/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172477
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_11);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_0 [i_1])));
            var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] = ((((/* implicit */_Bool) (unsigned short)768)) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) -1934500884)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))));
                        arr_10 [i_0] [i_1] = var_2;
                        arr_11 [i_0] [i_3] [i_2] [18U] [i_1] = ((/* implicit */unsigned char) var_9);
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) var_18))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */long long int) max((((/* implicit */int) (short)24966)), (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned short)768)) : (((/* implicit */int) (unsigned char)17))))));
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2182215812384273391LL))))), (((((/* implicit */_Bool) (short)21086)) ? (((/* implicit */unsigned long long int) 794228608436344313LL)) : (1826364468138175665ULL)))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_23 = ((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_5] [i_5] [i_4] [i_5]);
            var_24 = var_12;
            arr_19 [i_5] [i_4] = ((/* implicit */unsigned long long int) 2182215812384273393LL);
            var_25 = ((/* implicit */signed char) min((6302716126399059752ULL), (((/* implicit */unsigned long long int) (unsigned short)15))));
            arr_20 [i_5] [i_4] = ((/* implicit */long long int) arr_0 [i_4]);
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            arr_25 [i_4] [i_4] [10ULL] = ((/* implicit */unsigned char) var_15);
            var_26 -= ((/* implicit */long long int) arr_17 [i_4]);
            var_27 = ((/* implicit */_Bool) max((var_12), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))))));
        }
    }
    var_28 *= ((/* implicit */unsigned long long int) var_18);
}
