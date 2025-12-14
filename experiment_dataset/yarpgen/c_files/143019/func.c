/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143019
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 496891493076109921ULL);
        var_18 = ((/* implicit */int) ((_Bool) (~(((((/* implicit */_Bool) 496891493076109925ULL)) ? (496891493076109922ULL) : (17949852580633441668ULL))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((17949852580633441711ULL), (17949852580633441680ULL)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 4312736369082388727LL))))))) : ((~(((/* implicit */int) arr_2 [i_1]))))));
        arr_5 [2LL] [i_1] = ((/* implicit */int) arr_0 [i_1] [i_1]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17949852580633441663ULL)) ? (((min((((/* implicit */unsigned long long int) (unsigned short)3584)), (17949852580633441680ULL))) + (17949852580633441690ULL))) : (((/* implicit */unsigned long long int) (~(arr_4 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 810032821385225791ULL))));
            var_22 = (((!(((/* implicit */_Bool) (~(810032821385225795ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (arr_4 [i_1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1])))))) : (((arr_3 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))))))));
            arr_8 [i_2 - 1] [i_1] = ((/* implicit */long long int) var_10);
            var_23 = ((/* implicit */unsigned short) 17949852580633441669ULL);
        }
    }
    var_24 = var_6;
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_25 = var_1;
        arr_12 [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -2147483621)), (17636711252324325803ULL)));
        var_26 = ((/* implicit */unsigned short) min((min((496891493076109935ULL), ((-(var_9))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned short)58668))))), ((-(134086656U))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)49152))));
        arr_16 [i_4] = ((/* implicit */_Bool) var_2);
        arr_17 [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(((((/* implicit */long long int) arr_11 [i_4 - 1])) - (var_0)))))));
    }
}
