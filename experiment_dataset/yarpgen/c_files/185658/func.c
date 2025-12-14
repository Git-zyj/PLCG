/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185658
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) -15LL)) * (5942977494911872152ULL))), (max((var_12), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1690416903)) ? (((/* implicit */unsigned long long int) 18LL)) : (8612319760968382406ULL)));
                        var_17 = max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1996047161963400644LL)) : (var_9))) << (((max((var_9), (((/* implicit */unsigned long long int) 6659212676521864650LL)))) - (6659212676521864638ULL))))), (arr_5 [i_0] [i_2 - 4] [i_2 - 3]));
                        arr_13 [i_1] [i_3] [i_3] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_3 + 2]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) (!(var_3)));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (arr_16 [i_4 - 1]) : (((((/* implicit */_Bool) arr_16 [i_4 - 1])) ? (((arr_16 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-3))))))));
        arr_18 [i_4] = ((/* implicit */unsigned int) max((arr_16 [i_4]), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_15 [i_4])) > (arr_16 [i_4])))), (max((arr_16 [i_4]), (((/* implicit */unsigned long long int) arr_15 [i_4]))))))));
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -329700865)), (0ULL))))));
}
