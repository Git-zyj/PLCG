/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156711
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
    var_18 = ((/* implicit */int) ((unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4575255871964551047LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) ^ (((/* implicit */int) (unsigned short)25311))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 536870911U)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_2] [i_0 - 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_11)))))) : (((((/* implicit */int) arr_4 [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)42523))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)27286), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2182252875U)) ? (((/* implicit */int) (unsigned short)40241)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)41)), ((unsigned char)255))))) : (max((((/* implicit */unsigned int) ((int) var_1))), (var_5)))));
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (-349946464)))), (max((0ULL), (var_9)))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)125)) < (((/* implicit */int) var_11))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)127)))), (((/* implicit */int) ((unsigned char) var_3)))))) % ((+(536870898U)))));
                                var_25 = ((/* implicit */_Bool) ((max((max((536870870U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)134))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))))));
                                var_26 &= ((/* implicit */unsigned short) (unsigned char)44);
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((unsigned long long int) var_15)) >> (((max((((/* implicit */unsigned int) var_10)), (var_5))) - (3316866650U))))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (536870870U))))) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)28802)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
