/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177218
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
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) (short)9703)) | (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_5))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) var_9);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_1] [i_1] [i_3] [(unsigned char)11] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (var_7)))))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (max((((/* implicit */long long int) arr_0 [i_4])), (var_8)))))));
                                arr_15 [i_4] [i_4] [i_3] [i_1] [i_1] [(signed char)7] [(signed char)7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (((((arr_1 [i_0] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) (short)-7035))))))) : (((19ULL) >> (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_13 |= ((/* implicit */int) (short)-7047);
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_8)))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_5))))))) : (var_8)));
}
