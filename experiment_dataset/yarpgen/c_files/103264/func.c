/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103264
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
    var_16 ^= ((/* implicit */unsigned short) (~(max((1817688248U), (1817688248U)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((17419429010371139752ULL) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) min(((unsigned short)32947), ((unsigned short)2249))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (unsigned short)37044)))), (((((/* implicit */_Bool) (unsigned short)37044)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3742012595U)), (1027315063338411863ULL))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [(_Bool)1] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (signed char)-97)), (6054965511564591216ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)511)), (17419429010371139738ULL))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1414704494))))))))));
                        var_17 = ((/* implicit */unsigned int) 17419429010371139752ULL);
                        var_18 = ((/* implicit */unsigned short) (unsigned char)140);
                    }
                    var_19 = ((/* implicit */_Bool) 17419429010371139763ULL);
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (17419429010371139752ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1027315063338411865ULL)))))) >= (min((0U), (((/* implicit */unsigned int) (unsigned char)94)))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) (-(731169825278982741ULL)));
    }
}
