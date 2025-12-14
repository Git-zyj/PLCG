/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149086
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)29113)))) && (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [i_0])));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)-1))))), (arr_1 [i_0])))) ? (((/* implicit */int) max((arr_1 [i_0]), ((short)0)))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_21 = ((/* implicit */unsigned int) var_19);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                arr_9 [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13966))) + (5525814973756794613ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)51570)))))));
                var_23 = (~(((/* implicit */int) (short)-1)));
                var_24 = ((/* implicit */long long int) (unsigned short)51570);
            }
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 1] [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (arr_7 [i_0 - 1] [i_0 + 1] [i_1] [i_1])));
        }
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (max((12920929099952757006ULL), (((/* implicit */unsigned long long int) min((arr_13 [i_3] [i_4]), (((/* implicit */unsigned short) arr_19 [i_3] [i_4] [i_5 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [i_5 - 1] [i_4] [i_5 - 1] [i_3])))))));
                    arr_20 [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((long long int) arr_12 [i_3] [i_3]))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                    arr_21 [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((4294967289U), (((/* implicit */unsigned int) (signed char)-45))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_5 - 1])) > (((/* implicit */int) arr_15 [i_3] [i_4] [i_5 - 1])))))))));
                    var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_3] [i_5 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5 - 1])))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) < (var_19)));
                }
            } 
        } 
    } 
}
