/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136766
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14))))), (var_13)))));
        var_16 = ((/* implicit */unsigned short) (short)14);
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) min((arr_1 [i_1 - 2] [i_3]), (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)13))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_2] [10U])))) % (arr_5 [i_1])))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_1 - 2] [i_2] [i_2])) : ((~(((/* implicit */int) (short)14))))))) ? (((/* implicit */int) (_Bool)1)) : ((-((~(arr_10 [i_1 - 2] [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_5] [i_1] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26))) & (arr_9 [i_1] [i_2] [i_5]))))), (((((/* implicit */_Bool) 5U)) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                                arr_21 [(unsigned short)10] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) arr_10 [i_3] [i_5]);
                                arr_22 [i_1] [i_2] [i_3] [i_4 + 3] [i_5] = arr_11 [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (unsigned short i_7 = 4; i_7 < 21; i_7 += 1) 
        {
            {
                arr_27 [i_7] [i_6] = ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-26))))))) ? ((~(arr_25 [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7 - 4])) ? (2087273210) : (((/* implicit */int) arr_24 [i_7 + 1]))))));
                var_20 &= ((/* implicit */long long int) (unsigned char)231);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)14)) ^ (arr_1 [i_6] [i_7 + 1])))) >= (4294967290U)));
                var_22 = ((/* implicit */unsigned short) (((~(((5U) % (var_13))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_6])) || ((_Bool)0))) || (((/* implicit */_Bool) arr_24 [i_6]))))))));
                var_23 = ((/* implicit */unsigned char) (!(((-7165885945250087258LL) == (((/* implicit */long long int) (+(((/* implicit */int) (short)-14)))))))));
            }
        } 
    } 
}
