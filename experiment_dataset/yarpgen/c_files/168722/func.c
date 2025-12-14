/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168722
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
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))))) : ((~(min((4611681620380876800ULL), (((/* implicit */unsigned long long int) var_15)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15138569648112292513ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-8)), (max(((unsigned short)7029), (((/* implicit */unsigned short) (unsigned char)40))))))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
                                var_18 = ((/* implicit */long long int) ((unsigned char) var_9));
                                var_19 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(short)2] [i_2 + 2] [i_3 - 1] [i_4] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) min(((unsigned short)56777), (((/* implicit */unsigned short) arr_0 [i_2 + 1] [i_3 + 1])))))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) & (var_1)))));
                                arr_12 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */long long int) var_3)), (-5240918838752403367LL))));
                            }
                        } 
                    } 
                    var_20 = (signed char)-23;
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_9 [i_0]);
                                var_22 = ((/* implicit */unsigned int) max((max((-9139650394120984651LL), (((/* implicit */long long int) (unsigned char)17)))), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (4294967295U))) >> (((var_1) - (16705017866328925416ULL))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_7 [i_1]))))) & (((/* implicit */int) (unsigned char)247))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) & (arr_9 [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [16LL])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_3);
}
