/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108417
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
    var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_6 [i_1] [i_1 + 3] [i_1 - 2] [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-29270)) || (((/* implicit */_Bool) (unsigned short)49648)))) || (var_4))))) : ((+(((unsigned int) arr_4 [i_0])))))))));
                        arr_10 [i_1] &= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((2677073553U) / (((((/* implicit */_Bool) 1617893743U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2677073553U)))));
                        var_23 = ((/* implicit */unsigned char) (short)-29246);
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2] [(_Bool)1] [i_4 + 1]))));
                    }
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-462))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_16)) ? (14619880464646825621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 2] [i_1 - 2]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_27 [i_7] [(unsigned short)14] = ((/* implicit */unsigned char) var_16);
                                var_26 = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                                var_27 = ((/* implicit */_Bool) arr_15 [i_5] [i_6]);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_28 [i_5 - 3] [i_7] [i_5 - 1] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) <= (((/* implicit */int) (short)-1))))) : (((/* implicit */int) ((9U) >= (861296786U))))));
                }
            } 
        } 
    } 
}
