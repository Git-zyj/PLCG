/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139192
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 3]))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)35))))) ? (((/* implicit */unsigned long long int) (~(-249008454)))) : (var_11)))));
        var_20 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) 249008454)), (var_2)))));
        var_21 = ((/* implicit */signed char) ((min((-249008454), ((+(249008430))))) < (((/* implicit */int) arr_2 [i_0 + 1]))));
        arr_5 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (249008453) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) max((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0] [i_0 + 2]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (unsigned char)74))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_1]))) ? (((unsigned int) arr_6 [i_1] [i_1])) : (max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3803501702449928366LL))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_24 = ((unsigned char) (((~(249008412))) % (max((var_12), (var_12)))));
                        var_25 = min((((unsigned int) (+(-249008431)))), (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_14 [i_4] [i_1] [3ULL] [i_4]))), (max((-249008446), (-249008430)))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned long long int) var_3);
    var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-40), (((/* implicit */signed char) (_Bool)1)))))) <= (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))), (max((var_15), (((/* implicit */unsigned int) var_14))))))));
    var_28 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-5)), (11859838884525690912ULL)))) ? (((((/* implicit */unsigned long long int) var_17)) * (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
