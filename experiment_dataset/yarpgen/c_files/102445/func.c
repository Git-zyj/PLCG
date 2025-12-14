/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102445
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((var_2) + (((/* implicit */int) ((_Bool) (short)32766)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */long long int) (signed char)-78)), (var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */int) ((-1669856256544565872LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))));
                        arr_8 [i_0 - 1] [i_1] [i_0] [i_2] [i_3 - 2] = ((/* implicit */unsigned int) ((unsigned char) ((862079176171197487ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        var_14 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0 + 1]);
                        var_15 |= (short)-10258;
                        arr_9 [i_3] |= ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
        } 
        var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (32767)))) : (13U))), (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) 2147483647)))))));
    }
    for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)237)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3496949125U)))))), (15735822590697863525ULL)));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((unsigned char)174), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4 + 2])))))))), (-1105234892)));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((14875472240064836400ULL), (((/* implicit */unsigned long long int) 930857161U)))))));
    }
}
