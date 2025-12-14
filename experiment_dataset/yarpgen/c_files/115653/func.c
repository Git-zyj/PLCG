/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115653
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (~(70368677068800LL))))) ? (min((var_10), (var_8))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned short)0)), (-2415338738244094091LL)))))));
    var_14 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_1 - 4] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_2]);
                        var_16 = (~(arr_9 [i_0] [i_1] [i_2] [i_0]));
                    }
                } 
            } 
            var_17 = ((/* implicit */_Bool) ((unsigned char) -1858305577));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                arr_16 [i_0] [i_0] [i_1 - 4] [i_1 - 4] = ((/* implicit */long long int) var_7);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_4] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (arr_18 [i_0] [i_1 - 2] [i_4] [i_1 - 2])))) ? ((-(var_5))) : (((/* implicit */int) (unsigned short)0))));
                    var_19 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((-70368677068800LL) == (((/* implicit */long long int) var_5)))))));
                }
            }
            var_20 *= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_1 + 2])) + (var_6)));
        }
        var_21 = ((/* implicit */unsigned char) -398991002397867868LL);
    }
}
