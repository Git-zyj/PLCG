/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178406
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (1481342517) : (1481342517)))) || (((/* implicit */_Bool) ((4120598427U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), (((((-1481342518) + (2147483647))) << (((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1))))))) > (((((/* implicit */_Bool) ((1739582679455598063ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((4294967295U), (((/* implicit */unsigned int) (short)-7)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -321399311)) || (((/* implicit */_Bool) 536805376U))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((3758161919U) | (((((/* implicit */_Bool) ((1481342517) - (((/* implicit */int) (signed char)0))))) ? (((174368868U) / (3758161919U))) : (((/* implicit */unsigned int) 212220096)))))))));
                                var_19 = ((/* implicit */unsigned long long int) (short)-8);
                            }
                            arr_16 [i_3] [i_3 + 1] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (371930323119483960LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) | (2014881198U))), (((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-111)))))))) : (((((((/* implicit */_Bool) (short)0)) ? (11528401728516192279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967293U)) : (14949676975222263501ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8669)) ? ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 4120598427U)))) : (((long long int) 2771315790U))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967283U))) % (3835980398U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2075111053))))))));
}
