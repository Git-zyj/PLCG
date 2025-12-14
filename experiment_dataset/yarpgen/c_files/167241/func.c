/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167241
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0 + 1]) : (2403402587U))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) + (3003864234U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) ((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]) && (((/* implicit */_Bool) (short)15098))));
                            var_17 += ((/* implicit */unsigned int) arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]);
                            var_18 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)31285)) : (((/* implicit */int) (_Bool)1))));
                            var_19 *= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2154411013U));
                            var_20 = ((((/* implicit */_Bool) arr_8 [i_5] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_0 - 1])));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned int) var_8);
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_0 + 1])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_17 [i_0 - 1] [i_0 + 1])), ((unsigned short)26046))))));
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) == (arr_23 [i_6])))))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
            var_24 = (_Bool)1;
            arr_27 [(unsigned short)6] &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) min((arr_23 [i_7]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_6] [i_7]))))));
            var_25 = ((/* implicit */short) arr_23 [i_6]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) arr_30 [i_8]);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((2254215932U), (arr_25 [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_6] [i_8] [i_6])) + (((/* implicit */int) arr_31 [i_8] [i_6] [i_6]))))) : (((unsigned int) (!(((/* implicit */_Bool) var_0)))))));
        }
        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_9 + 2])))))));
            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_33 [i_9 + 2] [i_9 + 2] [i_9]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1] [i_9])))))));
        }
        var_29 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)97), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_30 = ((/* implicit */unsigned int) (_Bool)1);
        var_31 *= ((/* implicit */unsigned char) var_7);
    }
    var_32 += ((/* implicit */unsigned int) var_14);
}
