/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105479
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28969)))))) : (var_16)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) (-(var_14)));
                        arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) % (arr_4 [i_2] [i_1])));
                        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_18)) % (((/* implicit */int) var_0))));
                        var_20 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        var_21 ^= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)249));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            {
                arr_15 [i_4] [i_5] = min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (short)25190)) : (((/* implicit */int) (short)25171))))) - (min((arr_6 [i_5] [i_5] [i_5] [i_4] [i_4]), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))));
                arr_16 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (short)-32751);
                var_22 -= ((/* implicit */unsigned short) (((-((+(((/* implicit */int) (short)25190)))))) != (((/* implicit */int) min((((/* implicit */short) (unsigned char)219)), ((short)-24782))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned int i_7 = 1; i_7 < 7; i_7 += 4) 
                    {
                        {
                            arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_17)));
                            arr_23 [i_7] [i_4] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */long long int) 283726776524341248ULL);
                            arr_24 [i_4] [i_7] [i_4] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_20 [i_4 - 1] [i_4] [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4 - 1] [i_4] [i_5] [i_5] [i_6]))) : (((((/* implicit */_Bool) (unsigned char)153)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4 - 1] [i_6] [i_7] [i_7] [i_7])))))));
                            var_23 += ((/* implicit */short) (~((+(3ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
}
