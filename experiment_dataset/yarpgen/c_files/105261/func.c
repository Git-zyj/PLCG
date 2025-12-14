/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105261
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned short) arr_2 [i_2 - 1] [i_4 + 1] [i_4 - 3])))));
                                var_21 = max((((/* implicit */unsigned long long int) min((3259648759U), (((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 8852687700932228309ULL)))))))), (var_4));
                            }
                        } 
                    } 
                } 
                arr_10 [i_0] [i_0] = ((((/* implicit */long long int) (+(max((0U), (((/* implicit */unsigned int) (short)96))))))) | (min((((/* implicit */long long int) var_11)), (arr_0 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_16 [i_0] = ((/* implicit */int) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) (short)512)) ? (arr_3 [i_5] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_6])))) > (((((/* implicit */_Bool) var_1)) ? (5761913277904645050LL) : (((/* implicit */long long int) 1035318536U))))))));
                            arr_17 [i_6 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)56932)), (5761913277904645041LL))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_18 [(_Bool)1] [i_1] |= ((/* implicit */signed char) (-(max((9223372036854775807LL), (5761913277904645019LL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_7] [i_1] = ((/* implicit */short) ((var_16) << (((/* implicit */int) arr_12 [i_0] [i_0] [i_7]))));
                    var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-16658)) : (((/* implicit */int) (unsigned char)186))));
                }
                for (short i_8 = 4; i_8 < 22; i_8 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(3259648741U)));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_0] [(short)7] [i_9] [i_8] = ((/* implicit */unsigned char) ((max((max((var_18), (((/* implicit */unsigned long long int) -5761913277904645051LL)))), (((/* implicit */unsigned long long int) (_Bool)1)))) << ((((~((~(var_5))))) - (1861535515)))));
                                arr_34 [i_0] [i_9] [i_8] [i_1] [23ULL] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16657)) ? (var_12) : (2146435072)))) + (((long long int) (unsigned char)164))))), (var_15)));
                                var_23 |= ((/* implicit */long long int) min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (short)26126))));
                                arr_35 [i_0] [i_0] = ((/* implicit */long long int) ((arr_19 [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_9] [(short)17]))))))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [(short)15] [i_0] = ((/* implicit */long long int) arr_29 [i_8] [i_0] [i_1] [i_0] [i_0]);
                }
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) -875875161))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)14225)), (-875875161)))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (~(((min((((/* implicit */long long int) (unsigned char)209)), (var_1))) % (-8496802015244334912LL)))));
    var_26 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (unsigned short)43650)), (var_18)))));
}
