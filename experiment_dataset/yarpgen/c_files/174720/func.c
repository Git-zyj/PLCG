/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174720
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = 1712245967U;
        arr_2 [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0])))) & (((arr_1 [i_0]) ? (759408978) : (((/* implicit */int) arr_1 [i_0]))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (-759408978) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)17130)))) | (((/* implicit */int) max((arr_0 [i_0] [(unsigned char)10]), (((/* implicit */unsigned char) arr_1 [i_0])))))))) : (((unsigned long long int) -759409001)))))));
        var_15 = ((var_9) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2529137399U)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (max((((/* implicit */long long int) (_Bool)0)), (1062765016677411757LL)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            arr_8 [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((-477910229), (((/* implicit */int) (_Bool)0))))) ? (-1231759058) : (((/* implicit */int) (unsigned short)48797))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_5 [i_3]))));
                        arr_14 [i_1 - 1] [i_2] [i_3] [(short)17] = ((/* implicit */unsigned char) -3781976238131363248LL);
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_11 [i_1] [(unsigned short)5] [16U] [2LL]))));
                    }
                } 
            } 
        }
        var_19 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))) < (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16749))) & (4214282213U))), (((/* implicit */unsigned int) (signed char)-123)))));
        var_20 = ((/* implicit */unsigned short) 3669253407U);
    }
    var_21 = ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((signed char) var_0))))))));
    var_23 = ((/* implicit */unsigned long long int) (unsigned short)48803);
}
