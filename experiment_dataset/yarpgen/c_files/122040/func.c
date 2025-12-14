/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122040
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 += ((/* implicit */short) max(((-(((/* implicit */int) (short)16)))), (((((/* implicit */_Bool) (unsigned char)69)) ? (1833639506) : (-1833639507)))));
                                var_12 |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)32752)) != (((/* implicit */int) (short)-10)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) -618309349);
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (1833639506))))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            for (unsigned char i_7 = 4; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7084))) : (584521900457648211ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-29598)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1833639507))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_9] [i_7 - 1] [i_6 + 1])) ? ((~((~(((/* implicit */int) arr_26 [i_8] [i_8])))))) : (arr_24 [i_5] [i_6] [i_6] [i_6] [i_9])));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_6 + 1] [i_7 - 1])) ? (((/* implicit */int) (unsigned char)173)) : ((~(((/* implicit */int) (short)11527)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), ((((((!(((/* implicit */_Bool) (short)17749)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17749))))) : (16ULL))) >> (((((/* implicit */int) max(((short)-11239), ((short)-9666)))) + (9681)))))));
}
