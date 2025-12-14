/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125051
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
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((unsigned char) (short)7605)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)65535)), (2410190253U)));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) max((max((18446744073709551614ULL), (max((8372224ULL), (((/* implicit */unsigned long long int) 4294967281U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5)))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_1)), (max((var_11), (((/* implicit */unsigned long long int) var_7)))))))));
                }
            } 
        } 
    }
    for (int i_3 = 3; i_3 < 16; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) var_1)), (13179039537970315972ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_3))));
        arr_16 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (var_14)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_5))))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((min((5267704535739235634ULL), (((/* implicit */unsigned long long int) var_15)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-15385)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_9)), (((short) var_6)))))))))));
}
