/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168184
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 += (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [21U] [i_1] [i_2] [i_4]))))))))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [(short)0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                            var_17 = ((/* implicit */long long int) (-(arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [i_4]))));
                        }
                        var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        var_20 = (~((-9223372036854775807LL - 1LL)));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5 + 1] [i_7])))))));
                    var_22 = (+((+(arr_2 [i_5] [i_5]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [i_5] [i_5]))));
    }
    var_24 = ((/* implicit */short) var_4);
}
