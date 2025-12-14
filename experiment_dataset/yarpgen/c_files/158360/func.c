/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158360
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [i_1 - 2])))) % (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32751))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (~(220164376257198774LL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */_Bool) (~(2097152)));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(4294967281U))) >> (((/* implicit */int) arr_4 [i_0] [i_1 + 2]))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(arr_7 [i_2 - 2] [i_2] [(signed char)7])));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_14 [i_3] [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) ((signed char) arr_7 [i_0] [i_0] [i_0]));
                    arr_15 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */_Bool) var_5);
                    arr_16 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) 2097151ULL);
                }
                /* vectorizable */
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    arr_19 [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_4]))))));
                    arr_20 [i_4] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_29 [i_5] [i_7] [9] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)96))))), ((~(arr_18 [i_5] [i_5] [i_5])))))));
                    arr_30 [i_7] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) ((((13544862379286090862ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 528482304))))));
                    arr_31 [13] [i_7] [i_7] = ((/* implicit */unsigned short) (~((~(max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (18446744073707454464ULL)))))));
                    arr_32 [i_5] [8ULL] [i_7] [4ULL] = ((/* implicit */signed char) min((var_13), (((/* implicit */unsigned long long int) arr_12 [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_38 [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) (-(((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [4])))))));
                                arr_39 [i_8] [i_9] [i_7] [i_7] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */short) arr_25 [(short)5] [i_6 + 1]);
                                arr_40 [i_5] [i_5] [i_6 + 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) (!(((var_8) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -220164376257198774LL)) : (4901881694423460753ULL)))))));
                                arr_41 [i_7] [i_6] [i_7] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) min((arr_4 [i_6 - 3] [i_6]), ((_Bool)1))))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_8 [i_6] [i_5] [i_6] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_9)))))));
}
