/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168070
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (9213487693106479655ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-1LL))) + (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 3])) + (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */short) var_0);
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)123))));
                        arr_13 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18LL)) && (((/* implicit */_Bool) 4294967280U)))) ? (((/* implicit */int) (unsigned short)48078)) : (((/* implicit */int) (signed char)-118))));
                        var_16 = ((/* implicit */signed char) (((-(((var_9) / (((/* implicit */long long int) var_7)))))) - (max((var_10), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) -369999745)) : (var_9)))))));
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */unsigned int) ((signed char) (short)5610));
        arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */_Bool) (short)504)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)122))))))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 4]))))));
        var_18 = ((/* implicit */unsigned long long int) arr_10 [i_1 + 3] [i_1]);
    }
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_7) - (3348005978U)))))))))));
    var_20 = ((/* implicit */long long int) (+(var_1)));
}
