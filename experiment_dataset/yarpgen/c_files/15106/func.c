/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15106
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((int) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (-1675040677))) * (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)0))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) < (((((/* implicit */int) arr_3 [i_0])) >> (((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_2)))) ? (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0] [i_0]))) : (((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_1)))))));
            var_15 = ((/* implicit */int) ((long long int) ((arr_1 [i_1]) || (((/* implicit */_Bool) (unsigned char)49)))));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_16 = ((/* implicit */signed char) 18446744073709551615ULL);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((12913951702587812882ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) - (13951006167890720170ULL)))))) ? (((unsigned int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_0] [i_2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0] [i_0])))));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_2] [i_2] [i_0]))))));
        }
        arr_8 [i_0] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) ((unsigned short) var_11))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) 15165519478409070184ULL);
                        arr_18 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((signed char) var_1));
                        arr_19 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned long long int) 6LL);
                        arr_20 [12ULL] [i_3] [i_5] [i_6] [12ULL] = ((/* implicit */unsigned int) arr_17 [i_6] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((unsigned short) ((signed char) var_9)));
    }
    var_19 = ((/* implicit */unsigned short) ((int) ((long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))));
}
