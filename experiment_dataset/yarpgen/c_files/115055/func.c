/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115055
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
    var_20 = ((/* implicit */signed char) (!((!(var_0)))));
    var_21 = ((/* implicit */_Bool) min((var_21), (var_11)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_22 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0] [(short)0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19)))));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((_Bool) (signed char)84);
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(arr_10 [i_3] [i_1] [i_2] [i_3])))) / (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
                            var_24 = ((/* implicit */_Bool) (signed char)-85);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [(_Bool)1] [i_5] [i_5] |= ((/* implicit */_Bool) ((arr_16 [3U] [3U] [i_0]) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_0] [i_0])) : (((/* implicit */int) (signed char)-101))));
            var_25 = ((/* implicit */long long int) arr_8 [i_0] [i_5] [(signed char)6] [i_5]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8] [i_5] [i_6] [(signed char)6])))))) : (var_1)));
                            var_28 *= ((/* implicit */signed char) ((unsigned char) arr_13 [i_0] [i_7 - 2] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1]));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_7 [i_0])) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_7 [i_0])))))))));
        arr_25 [i_0] = var_0;
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
    {
        var_30 = (signed char)78;
        arr_28 [i_9 + 1] = ((((int) (unsigned char)77)) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)100))))));
    }
}
