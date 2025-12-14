/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161707
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_19 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 2]))))) ? (1727290598U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)61))))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_5))));
        var_21 = (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned long long int) var_17)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] [i_1 + 1] = ((/* implicit */signed char) arr_4 [i_1]);
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_2 - 2] [(short)16]))));
            var_23 = ((/* implicit */unsigned char) arr_2 [i_1 + 2]);
            arr_8 [i_1] [i_1] = (-(((/* implicit */int) arr_4 [i_2 - 1])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((short) arr_6 [i_1 + 1] [i_3 + 1]));
            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_6))))));
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */signed char) 253710061);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) arr_0 [i_1 - 1]))));
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (((_Bool)1) || (var_8))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 17; i_6 += 1) 
                {
                    {
                        arr_20 [i_1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (+((+(5772557273205884133LL)))));
                        arr_21 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_4])) - (((/* implicit */int) arr_16 [i_4]))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) arr_4 [i_1]);
            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)41530)) >= (((/* implicit */int) (unsigned short)39267)))))));
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1003235419U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))));
            var_30 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
            var_31 = ((/* implicit */unsigned char) arr_10 [i_1] [i_7] [i_7]);
        }
        var_32 -= ((/* implicit */_Bool) var_16);
        var_33 += ((/* implicit */unsigned short) arr_6 [i_1 + 1] [i_1 - 1]);
    }
    var_34 = ((/* implicit */unsigned char) (_Bool)1);
    var_35 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)99)))) <= (((/* implicit */int) (short)-31474)))))));
}
