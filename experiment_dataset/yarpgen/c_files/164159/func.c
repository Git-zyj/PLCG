/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164159
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
    var_18 = ((/* implicit */signed char) 18158513697557839872ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)48)) ? (((((((/* implicit */_Bool) arr_6 [i_2] [i_1 - 1] [i_1])) || (((/* implicit */_Bool) (unsigned short)55630)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_3 - 1] [i_4])) / (-856724527))))) : (((/* implicit */int) ((short) var_3)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((unsigned char) ((unsigned int) (signed char)-17)));
                arr_14 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(unsigned short)9] [(_Bool)1]))))))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (int i_6 = 4; i_6 < 14; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]))) : (var_1)))) ? (((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_20 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))))));
                                var_22 = ((/* implicit */unsigned int) ((var_17) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_19 [i_1 - 1] [(short)16] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)-126))))))) && (((/* implicit */_Bool) (unsigned short)33523))));
                arr_28 [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) arr_6 [i_9] [i_8] [i_9])) : (((/* implicit */int) (signed char)-89)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_35 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) arr_34 [i_11 + 1] [i_8] [i_9] [i_8])) : (((/* implicit */int) arr_3 [(signed char)9] [(signed char)9])))), (((/* implicit */int) arr_10 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 2]))));
                            arr_36 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */signed char) (((+(((((/* implicit */int) arr_34 [i_8] [i_8] [i_9] [i_8])) >> (((((/* implicit */int) var_0)) - (50))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58137)) ^ (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_19 [i_9] [15] [(signed char)7] [i_9] [i_8])) >> (((((/* implicit */int) var_16)) - (53334))))) : (((/* implicit */int) ((unsigned short) (short)20)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                            {
                                var_24 = ((/* implicit */long long int) (unsigned char)66);
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_11 - 1] [i_9] [i_11 - 1] [(unsigned short)13] [i_11])) ? (((/* implicit */int) arr_20 [i_11 - 1] [i_11] [i_11 + 2] [i_11] [i_11 + 2] [i_11])) : (((/* implicit */int) arr_20 [i_11 - 1] [i_11] [i_12] [i_12] [(short)2] [i_12]))));
                                arr_39 [i_8] [i_9] [i_9] [i_10] [i_11 + 2] [i_12] = ((/* implicit */unsigned short) (short)4088);
                            }
                            arr_40 [i_9] = ((/* implicit */unsigned long long int) 2625187110U);
                        }
                    } 
                } 
            }
        } 
    } 
}
