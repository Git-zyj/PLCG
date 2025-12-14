/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187372
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (+(2806532375317173364ULL)))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (signed char)64))))) ? (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) (+(max((((/* implicit */int) (_Bool)0)), (1667710112)))))) : (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53463))) % (15829381227579973146ULL)));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_10)), (18446744073709551600ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) != (((/* implicit */int) arr_8 [i_3]))))) : ((+(((((/* implicit */int) (signed char)50)) & (-1671828466)))))));
        arr_10 [i_3] [i_3] = ((/* implicit */_Bool) var_9);
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_8))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_4] [i_4])) / (((/* implicit */int) arr_14 [i_4] [i_4]))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */long long int) (+(-396262811)))) : (arr_13 [i_4])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned int) ((15631926998264841546ULL) >> (((max((((/* implicit */long long int) ((unsigned char) var_5))), (max((arr_1 [i_5]), (((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5] [i_5])))))) - (1353509761256178391LL)))));
        arr_22 [i_5] [1LL] = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))), (((int) -4878613832043238574LL))))) ? (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned char)8))))))) : ((-(((15829381227579973146ULL) + (((/* implicit */unsigned long long int) 288337093)))))));
    }
}
