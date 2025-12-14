/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176851
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
    var_14 = ((/* implicit */unsigned char) ((2797109751U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)15227)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (arr_2 [i_0] [i_0])))) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)37))) & (arr_1 [i_0] [i_0])))))) + (max((((/* implicit */int) (signed char)76)), ((~(((/* implicit */int) var_13))))))));
        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 = arr_13 [i_0] [i_1] [i_2] [i_3] [i_4];
                                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */int) min((arr_2 [i_0] [i_2 - 1]), (max((arr_2 [i_3] [i_4]), (((/* implicit */unsigned int) var_9))))));
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) var_9)) / (798998696U))), (((3495968605U) * (arr_11 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_9)))), (var_5)))));
                                var_18 = ((/* implicit */short) (+(((arr_6 [i_1] [i_2] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (3495968610U)))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)62)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (unsigned short)51893);
                    arr_16 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((arr_2 [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_17 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_4)) : (0)))) ? (arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)215)))))))));
                }
            } 
        } 
    }
}
