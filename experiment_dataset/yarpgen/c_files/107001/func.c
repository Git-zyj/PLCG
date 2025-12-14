/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107001
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 7137009844856904130LL));
                var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))), ((~(((/* implicit */int) (signed char)-93)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_21 += var_8;
                    arr_12 [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-34))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))) : (max((3ULL), (arr_2 [i_2]))))));
                    arr_13 [i_3] [i_3] [i_4] = ((/* implicit */signed char) arr_10 [i_2] [i_2] [i_3] [i_3]);
                    arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)27441)) ? (((((/* implicit */_Bool) 15661797421824073097ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3] [i_4]))))))) : ((+(((/* implicit */int) var_18))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)4)))))))), ((+(4543681593983454913LL)))));
                }
                arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((3072261861U), (((/* implicit */unsigned int) -2147483638))))), (var_13)))) ? (((((/* implicit */_Bool) (signed char)-47)) ? (arr_9 [i_2 - 4] [i_3]) : ((((_Bool)1) ? (arr_6 [i_2] [i_3]) : (((/* implicit */int) (unsigned short)27452)))))) : (((/* implicit */int) (!((!((_Bool)1))))))));
                arr_17 [i_3] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) > (min((((/* implicit */long long int) -2147483646)), (4496977785402150004LL)))))));
            }
        } 
    } 
}
