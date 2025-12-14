/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112034
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
    var_20 = ((/* implicit */long long int) ((var_18) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (((long long int) (short)18226))));
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (~((~(((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_22 = (_Bool)1;
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                        arr_17 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
        }
        arr_18 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) (short)-19108)) - (((/* implicit */int) var_9)))))))));
    }
    for (signed char i_6 = 2; i_6 < 24; i_6 += 3) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_20 [i_6 - 2]))))));
        var_23 -= ((/* implicit */unsigned int) var_5);
        var_24 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) - (25989)))))) & (var_3)))));
        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)10173)) ? (((/* implicit */int) arr_20 [i_6 + 1])) : (((/* implicit */int) var_1))))));
    }
    var_26 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_0))))))));
}
