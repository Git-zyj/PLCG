/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141701
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
    var_13 &= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11861))) : (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1070151331)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((max((arr_0 [i_0] [i_0]), (((/* implicit */short) (unsigned char)47)))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)47)) < (((/* implicit */int) (unsigned char)205)))))));
                arr_6 [i_0] = (unsigned char)216;
                var_14 = max(((+(((int) (unsigned char)253)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)14)), ((unsigned short)992)))) ? (((/* implicit */int) (unsigned short)64544)) : (((/* implicit */int) (short)2617)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))))) && (((/* implicit */_Bool) min((min((1781049514841936419ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])))), (((/* implicit */unsigned long long int) min((arr_7 [i_4]), ((short)27433)))))))));
                                var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1070151331), (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [(unsigned char)7]))))) ? (((((/* implicit */_Bool) (unsigned short)992)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26398)))) : (max((1070151338), (((/* implicit */int) arr_14 [i_1] [i_3] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) / (1070151338)))) ? (min((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) 1070151333)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))))))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_4 [i_0] [i_1] [i_4])) ^ (((/* implicit */int) arr_8 [i_0 - 4] [i_1] [i_1])))))))));
                                var_18 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)248))));
                            }
                            var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(max((-1735834777), (var_7)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_9 [i_0] [i_0] [(short)6] [i_0] [i_0] [i_3]))))), (18446744073709551615ULL)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (short)20560);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) max(((short)21245), (var_5)))) + (((/* implicit */int) (unsigned char)241)))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_2)))) : (var_12)))));
    var_22 = var_3;
}
