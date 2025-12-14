/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119727
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
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 1] [i_0 + 4])))), ((((!(((/* implicit */_Bool) (short)23852)))) ? (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (short)-23853))))) : (4067449184807817427ULL))));
        var_13 = ((/* implicit */signed char) var_0);
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)26)))) | (((/* implicit */int) var_8)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */short) min(((+((+(((/* implicit */int) (signed char)78)))))), ((~(((((/* implicit */int) var_11)) & (((/* implicit */int) arr_6 [i_1 - 1]))))))));
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_13 [i_5] [i_3]);
                            var_16 = ((/* implicit */unsigned long long int) arr_10 [i_1 + 1]);
                        }
                        var_17 = (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_8))))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */signed char) arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
    }
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    arr_31 [i_8] [i_7] = ((/* implicit */int) var_7);
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-23853)))), ((~(((/* implicit */int) (signed char)-57))))));
                    var_20 |= ((/* implicit */unsigned short) min((var_1), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((short)23853), (((/* implicit */short) (signed char)116))))), (((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_6] [i_6]))))))));
                }
            } 
        } 
    } 
}
