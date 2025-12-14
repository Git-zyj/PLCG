/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178702
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2672)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))) % (((((/* implicit */unsigned long long int) 1397335205U)) + (0ULL))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (signed char)72)), ((unsigned short)0))), ((unsigned short)0)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1345242608)) ? (((/* implicit */int) (unsigned short)60002)) : (((/* implicit */int) (unsigned short)5534))));
                    arr_7 [i_0] [i_0] [i_2] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_0]), ((short)-13301)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)5534))))) * (((((/* implicit */_Bool) (short)-13301)) ? (0U) : (925751879U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2 + 1]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (-1345242608) : (((/* implicit */int) (unsigned short)60002)))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) -1132103470);
    }
    var_22 = ((/* implicit */_Bool) 171500243);
}
