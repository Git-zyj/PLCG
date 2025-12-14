/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139219
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (unsigned short)26012);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max(((unsigned short)39509), (((/* implicit */unsigned short) arr_3 [(_Bool)1] [i_1]))))) : (((/* implicit */int) (unsigned short)56240)))))));
            var_15 = ((/* implicit */int) var_11);
        }
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0] [(unsigned char)8] [i_0])), (min((4338456075329722377LL), (arr_8 [i_0]))))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_16 *= ((/* implicit */int) min((((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_3 + 1])) : (arr_15 [i_3 - 1] [i_3 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)251)))))));
                            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (((+(var_5))) != (((/* implicit */int) (signed char)-79)))))));
                            arr_17 [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)23189))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))) <= (arr_15 [i_6] [i_6]))))))));
        var_19 = ((/* implicit */signed char) var_8);
    }
}
