/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173205
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1 - 1] = ((/* implicit */int) (-(var_12)));
                    arr_7 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) (short)-32763)), (2147483639))))) ? (((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_0] [i_2] [i_0]))) ? (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)32762)))))) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-22966)), (arr_0 [i_0]))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) var_15);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                arr_14 [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32760))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_9 [i_4]))))) : ((-9223372036854775807LL - 1LL))));
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 504536020)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) var_12)) : (17713711528822600443ULL)))) ? (((/* implicit */int) arr_10 [i_4])) : ((+(((/* implicit */int) arr_10 [i_3])))))))));
                arr_16 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4]))))) ? (((/* implicit */int) arr_9 [i_3])) : (((((/* implicit */_Bool) (signed char)95)) ? (1879048192) : (((/* implicit */int) (short)22718))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32762)) >= (((/* implicit */int) (short)-32766))))) : (504536003)));
                var_16 = ((/* implicit */unsigned int) (-((~((~(9223372036854775807LL)))))));
            }
        } 
    } 
}
