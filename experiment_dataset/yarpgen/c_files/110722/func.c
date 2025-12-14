/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110722
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (unsigned short)206))))), (((((/* implicit */_Bool) (unsigned short)39697)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25838))) : (4294967289U))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39719))) % (var_5))) * (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)206)))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (unsigned char)143)))))))))))));
                        arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_6 [14U] [i_3] [i_1] [i_3])))) + (2147483647))) >> (((min(((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) var_7)) | (var_2))))) + (1187410043)))));
                    }
                } 
            } 
        } 
        var_19 = -1342186834;
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((unsigned long long int) (unsigned short)25839)))))));
    }
}
