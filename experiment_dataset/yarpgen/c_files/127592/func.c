/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127592
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
    var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)113))))))) % (((/* implicit */int) (signed char)-113))));
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */int) ((long long int) var_13));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_4 [7U]);
                    arr_10 [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((signed char) var_15)), (((/* implicit */signed char) arr_5 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_4] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) (short)16289);
                        arr_23 [i_6] [i_4] [i_3] = ((/* implicit */long long int) arr_13 [(_Bool)1]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) max(((+(arr_14 [i_5 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [10ULL] [i_5] [i_4] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30751))) : (((((/* implicit */_Bool) 466310085U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51295))) : (70368744046592LL))))))));
                        arr_27 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 + 1] [i_7] [(short)8]))) - (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-16289)) > (((/* implicit */int) arr_19 [i_5 + 1] [(short)6] [i_7])))))) : (((((/* implicit */_Bool) (signed char)127)) ? (466310085U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4728)))))));
                        arr_28 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5 + 1] [i_4] [i_4] [i_4] [i_7] [i_7]))) % (-70368744046593LL))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_31 [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_21 [i_3] [i_4] [6] [i_8] [i_4] [i_5 + 1])), (((((/* implicit */_Bool) arr_21 [i_5] [i_8] [i_5] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_3] [i_3] [13] [i_8] [i_5] [i_5 + 1]))))));
                        arr_32 [i_3] [i_4] [2ULL] [i_4] [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))));
                    }
                    arr_33 [i_4] = var_2;
                    arr_34 [i_4] [i_4] [6LL] = ((/* implicit */signed char) (-(var_8)));
                }
            } 
        } 
    } 
}
