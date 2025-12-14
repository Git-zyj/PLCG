/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13199
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [17LL] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((short) var_15)), (((/* implicit */short) arr_0 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (983040))))) & (var_14)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((signed char) var_8)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)245))), (((/* implicit */unsigned char) (signed char)94)))), (((/* implicit */unsigned char) (signed char)-92))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_6)))) | (((/* implicit */int) ((519532897U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            arr_11 [i_1] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_2])))))), (((((/* implicit */int) ((var_10) > (((/* implicit */int) var_6))))) & (((/* implicit */int) var_2))))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 4; i_4 < 19; i_4 += 1) 
            {
                for (short i_5 = 4; i_5 < 19; i_5 += 2) 
                {
                    {
                        arr_19 [i_1] [(_Bool)1] [i_4] [i_1] = var_15;
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_24 [i_5] [i_6 + 3] [i_4] [i_4] [i_6 + 3] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)-2)), (519532897U)));
                            arr_25 [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        }
                        var_21 = ((/* implicit */long long int) max(((-((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_22 [1LL] [(unsigned char)3] [i_4])))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (var_8)))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)85)) - (65)))))));
        }
        var_23 = ((unsigned short) ((unsigned long long int) ((unsigned char) var_13)));
    }
}
