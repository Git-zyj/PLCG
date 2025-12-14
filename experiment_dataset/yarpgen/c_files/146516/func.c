/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146516
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 620502712538670103LL))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1930187861)) ? (620502712538670114LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((((_Bool)1) ? (2874135411513869789LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7246))) : (((unsigned int) (signed char)77)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))))))));
                        var_17 = 1591219501;
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((short) -620502712538670115LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)54433)))) : (((unsigned int) 1795401800U)))));
                                arr_17 [i_5] [i_4] = ((/* implicit */_Bool) 54043195528445952ULL);
                                var_19 = ((/* implicit */signed char) ((long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (-1595677584) : (((/* implicit */int) (unsigned short)54433))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
