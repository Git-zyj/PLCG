/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111886
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
    var_13 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-109))))), (3257938011807395199ULL))));
    var_14 ^= ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (arr_0 [i_0])));
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) ^ (((/* implicit */int) (short)-26207))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_0]))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)12)) != (((/* implicit */int) (signed char)0))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_19 += ((/* implicit */unsigned char) (~(min((arr_4 [i_1]), (arr_0 [i_1])))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_0 [i_1]))));
    }
    for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 4; i_3 < 16; i_3 += 2) 
        {
            arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_3 - 4])) ? (((/* implicit */int) ((arr_6 [i_3] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))))) : (((/* implicit */int) ((((/* implicit */_Bool) 137438953471ULL)) && (((/* implicit */_Bool) 2670596149445069306LL))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_7))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned long long int) (!(((var_8) || (((/* implicit */_Bool) arr_13 [i_2] [(_Bool)1]))))));
                            arr_21 [(_Bool)0] [14] [i_3] [i_5] [(_Bool)1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_3])))))));
                        }
                    } 
                } 
            } 
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)47)))), (((/* implicit */int) (unsigned char)124)))))));
        var_24 = ((/* implicit */int) arr_18 [i_2 + 3] [i_2] [i_2 + 3] [8] [i_2] [i_2]);
    }
    var_25 = ((/* implicit */long long int) (unsigned short)65535);
}
