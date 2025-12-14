/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128700
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 3] [i_0]))))) ? (((/* implicit */int) (signed char)-94)) : ((+(((/* implicit */int) arr_3 [i_1] [11] [i_1 - 4])))))) * (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1 + 3]))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1215836611447920112LL), (((/* implicit */long long int) (unsigned char)216))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)960)) : (((/* implicit */int) (unsigned char)18))))) : (arr_5 [i_1 - 1] [i_1 - 2])))) == ((((+(2307037050211043598ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) 1659391786U);
}
