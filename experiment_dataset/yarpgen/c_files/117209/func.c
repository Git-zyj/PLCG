/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117209
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 240)) : (arr_6 [(_Bool)1] [(short)7] [i_2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [(signed char)8] [i_0])))))))) && (((/* implicit */_Bool) min((arr_3 [i_0 + 1] [i_0]), (arr_3 [i_0 + 1] [i_0]))))));
                            var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (-(260096))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_0] = min(((~(((260096) & (((/* implicit */int) arr_3 [i_0] [i_0])))))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((260097) / (536870912))))) ? (max((((/* implicit */long long int) -536870891)), (((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2490449025029765084LL))))) : (((((/* implicit */long long int) 536870400)) / (arr_17 [i_4])))));
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) arr_22 [i_4] [i_4] [i_6] [11U]);
                                arr_25 [i_4] [i_5] [i_4] [i_7] [i_8 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 3403004085202639121ULL)) || (((/* implicit */_Bool) 33554432U))))))));
                                arr_26 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((-5765525485191928580LL), (((/* implicit */long long int) var_3)))) : (max((arr_18 [i_4] [i_6] [i_4]), (((/* implicit */long long int) 1065353216U))))))) ? ((+(min((-5765525485191928574LL), (5765525485191928570LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [7U])) > (arr_22 [i_4] [i_4] [i_4] [i_7])))))))));
                                var_13 = 4261412857U;
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -2014639297)))) ? (36028797018947584ULL) : (((/* implicit */unsigned long long int) min((((5765525485191928579LL) / (((/* implicit */long long int) 493337327)))), (((/* implicit */long long int) arr_19 [i_5] [i_5] [i_5 - 1])))))));
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    arr_29 [i_4] [i_5 + 1] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                    var_15 = ((/* implicit */long long int) ((max((493337311), (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) arr_19 [i_4] [i_5 - 1] [i_5 - 1])) | (((/* implicit */int) arr_19 [i_4] [i_5 + 1] [i_5 + 1]))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (unsigned char)32);
}
