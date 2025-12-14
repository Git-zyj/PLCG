/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125228
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) % ((-((-(var_11)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)59))));
        arr_2 [i_0] [i_0] = ((unsigned char) ((arr_0 [i_0]) != (arr_0 [i_0])));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_17 |= ((/* implicit */int) var_12);
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)0)))) && (arr_14 [i_1] [i_2] [i_4])))) ^ (((int) 4294967295U))));
                                arr_15 [i_1] [i_1] [8U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(17U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4294967295U))))) : (min((arr_3 [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((16777215), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_3] [i_3])) : ((+(var_3)))))));
                    arr_16 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)0)))));
                    var_20 = ((/* implicit */unsigned long long int) var_1);
                    arr_17 [i_1] |= var_11;
                }
            } 
        } 
        var_21 *= (+((~(arr_3 [i_1] [i_1]))));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1] [i_1]))), (min((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_1] [8] [i_1])))));
        arr_18 [11U] = ((((/* implicit */int) (short)3)) - (arr_12 [i_1] [i_1] [i_1] [(short)7]));
    }
    var_23 |= ((/* implicit */int) var_8);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)164)) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) 2956545454U))));
}
