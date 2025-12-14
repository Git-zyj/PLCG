/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119936
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 += ((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (signed char)7)), (arr_1 [i_0])))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((/* implicit */unsigned int) ((arr_0 [i_0]) <= (arr_1 [i_0])))))) : (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_12))))) ? ((~(var_10))) : ((-(arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)-20175))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (signed char i_4 = 4; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) arr_7 [i_4 - 3]);
                        var_15 = ((/* implicit */signed char) var_8);
                        var_16 = ((/* implicit */unsigned int) (((~(arr_1 [i_4 - 3]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_4 - 3])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (short)20191)) & (((/* implicit */int) arr_6 [i_1] [i_1])))), (((var_12) | (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) 0U)) ? ((~(2U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_5]) : (arr_1 [i_5]));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) || (((/* implicit */_Bool) arr_14 [i_5] [i_5]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_6 - 1] [i_6 + 3] [i_8])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_6] [i_7] [i_8])))))));
                        arr_22 [i_5] [i_5] [i_6] = ((/* implicit */short) (+((+(4294967295U)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) == (arr_1 [i_5]))))))));
        var_21 = ((/* implicit */int) arr_1 [i_5]);
    }
    var_22 = ((/* implicit */unsigned int) var_8);
}
