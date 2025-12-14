/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141502
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
    var_13 = (!(((/* implicit */_Bool) (unsigned short)0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (short)9663);
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-9663)) != (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 2]))))) : ((+(min((((/* implicit */int) (short)-9652)), (var_1))))))))));
                                arr_14 [i_0] [i_0] [16LL] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_4 - 1] [i_4 - 3] [i_0])) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_4 - 1] [i_4 - 3] [i_2])) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_26 [i_1] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-209);
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31744)) ? (((/* implicit */int) (short)-9663)) : (((/* implicit */int) (short)-9652))));
                                arr_27 [i_7] [i_7] [i_6] [i_6] [i_1] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) min((((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9664))))), (arr_6 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */unsigned long long int) 6U);
                    arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) ((((/* implicit */_Bool) (short)-9675)) && (((/* implicit */_Bool) (signed char)78))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_7))))))));
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        for (short i_10 = 2; i_10 < 19; i_10 += 3) 
                        {
                            {
                                arr_36 [i_0] [i_0] [11LL] [i_1] [(unsigned short)15] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_10 - 1] [i_9] [i_9] [i_9] [i_1])) : (((/* implicit */int) arr_23 [(signed char)15] [i_0] [i_10 - 1] [i_8] [i_1] [i_1] [i_1]))))) <= (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_10 - 1] [i_1] [i_10 - 1])) ? (8740824650039742134LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_10 - 1] [i_9] [i_0] [i_0] [i_1])))))));
                                arr_37 [i_1] [i_8] [i_1] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 9222809086901354496LL)))));
                                arr_38 [i_0] [(unsigned char)6] [i_8] [i_1] [i_10] [i_9] = ((int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_10 [i_0] [i_1] [11LL] [i_9] [i_10 + 1] [i_1]))));
                                var_17 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_8))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_12))));
                            }
                        } 
                    } 
                    arr_39 [(unsigned short)19] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_33 [i_1] [i_1])) >> (((arr_12 [i_1] [i_0] [i_1] [i_1] [i_8]) - (448265304))))) : ((~(((/* implicit */int) (unsigned short)26240)))))))) : (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_33 [i_1] [i_1])) >> (((((arr_12 [i_1] [i_0] [i_1] [i_1] [i_8]) - (448265304))) - (887021381))))) : ((~(((/* implicit */int) (unsigned short)26240))))))));
                }
            }
        } 
    } 
}
