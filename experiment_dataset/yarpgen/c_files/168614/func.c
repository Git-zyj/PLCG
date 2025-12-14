/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168614
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_0])));
        arr_3 [i_0] = ((_Bool) (short)-26853);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (unsigned short)65523);
                    var_15 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_9 [i_4])))));
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3]))));
            var_18 *= ((/* implicit */unsigned long long int) arr_13 [(unsigned char)6] [i_4]);
        }
        var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_13 [i_3] [18U])))));
    }
    var_20 = ((/* implicit */signed char) var_5);
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!((!((_Bool)1))))))));
}
