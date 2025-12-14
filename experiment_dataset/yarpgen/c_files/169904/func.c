/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169904
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
    var_18 = var_0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_20 = ((/* implicit */int) (!(arr_5 [i_0])));
            var_21 -= ((/* implicit */int) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (signed char)-8);
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((arr_4 [i_0] [i_2]) < (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1621617614U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8296))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60776))) ^ (1621617598U)))));
            arr_12 [i_0] [i_3] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
            var_24 -= ((/* implicit */short) (+(((/* implicit */int) arr_1 [(short)14]))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_0 [i_0]))))));
            var_27 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 309566596))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (((((/* implicit */_Bool) arr_14 [i_4])) ? (10887750968437492763ULL) : (((/* implicit */unsigned long long int) var_1))))));
        }
        arr_16 [i_0] = ((((/* implicit */int) arr_10 [i_0])) * (((/* implicit */int) arr_10 [i_0])));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] [i_6] [i_7] = max((min(((-(((/* implicit */int) (signed char)14)))), (var_10))), (((/* implicit */int) ((unsigned char) arr_19 [i_5]))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? ((-(((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [i_7])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) (signed char)3)))))))));
                }
            } 
        } 
        arr_26 [i_5] [i_5] = ((/* implicit */long long int) ((min((arr_18 [i_5]), (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5]))))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-24414))))))));
        arr_27 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (short)18478)))));
    }
}
