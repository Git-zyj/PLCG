/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129097
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [11] = ((/* implicit */unsigned char) (short)-5098);
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [6U] [i_1] = ((/* implicit */signed char) max((((_Bool) 914681756U)), (var_5)));
                    arr_10 [i_0] [i_1 - 2] [i_2] = ((/* implicit */short) ((signed char) ((_Bool) arr_8 [i_2] [i_1] [i_0] [i_0])));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(var_7))) <= (min((((unsigned int) 4044445517U)), (((/* implicit */unsigned int) (~(arr_4 [i_0] [i_0]))))))));
    }
    for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_5 + 1] [i_6] = arr_15 [i_5 - 2] [i_6];
                        arr_23 [i_3] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((arr_20 [i_3] [i_5] [i_5] [i_6]), (arr_7 [i_3] [i_3] [i_5])))))));
                        arr_24 [i_6] [i_6] [i_6] [i_5] = min((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_13 [2LL])), (var_8)))) ? (arr_16 [i_3] [i_5] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (arr_21 [i_5] [i_4] [7])))) > (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned int) -1352688327)) : (arr_16 [i_3] [i_5] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_25 [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_17 [i_3 - 3] [i_3 - 3] [i_3])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_1 [(signed char)15])) + (((/* implicit */int) arr_19 [i_3] [i_3] [i_3 - 1] [(_Bool)1] [i_3 - 3] [i_3]))))));
        arr_26 [3U] [3U] = ((/* implicit */signed char) arr_5 [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        arr_29 [(unsigned char)3] [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_7])) >> (((((/* implicit */int) (unsigned char)238)) - (210)))));
        arr_30 [i_7] = ((/* implicit */unsigned short) arr_0 [i_7] [i_7]);
    }
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            {
                arr_38 [i_9 - 1] [i_9] [(signed char)2] = ((/* implicit */signed char) arr_21 [(unsigned char)4] [i_9] [i_9]);
                arr_39 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_17 = min((((/* implicit */int) ((((/* implicit */int) ((short) var_2))) >= (((/* implicit */int) var_14))))), (-1352688327));
}
