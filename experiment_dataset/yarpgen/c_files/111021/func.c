/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111021
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
    var_12 = ((/* implicit */unsigned int) max((var_12), ((+((-(var_0)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)52)), (arr_4 [i_0 + 3] [i_0 + 3])))) + ((+(((/* implicit */int) (short)-21825))))));
                    var_13 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 3393219141U)) ? (((/* implicit */int) (short)-19795)) : (((/* implicit */int) (unsigned short)47074)))));
                    var_14 = ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2]) < (arr_5 [i_2 - 1] [i_2] [i_2 - 1])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_15 -= ((/* implicit */unsigned char) arr_3 [i_3] [(unsigned char)8]);
        arr_14 [i_3] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_7 [i_3] [i_3]))) + (((/* implicit */unsigned long long int) arr_1 [i_3])))), (((/* implicit */unsigned long long int) max((arr_8 [i_3] [i_3] [i_3] [5LL]), ((signed char)122))))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_7] [i_6] [8] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_24 [i_3] [i_7 - 3] [i_6] [i_6] [i_4 + 1]))) > (((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) arr_3 [i_4 - 1] [i_4 - 1])), (arr_2 [i_4 - 1] [i_4 + 1]))));
                                arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_25 [i_7] [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 2])) ? (arr_25 [i_7] [i_7 + 1] [i_7 - 3] [i_7 - 3] [i_7 - 1]) : (arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7] [i_7 + 1]))), (arr_25 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1])));
                                arr_28 [i_3] [i_4] [i_5] [i_6] [i_7] [i_5] [i_7] = ((/* implicit */short) ((long long int) min((((/* implicit */int) (unsigned short)39406)), (229227874))));
                            }
                        } 
                    } 
                    arr_29 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)115))));
                }
            } 
        } 
        arr_30 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_22 [i_3] [(unsigned char)2] [i_3] [(unsigned char)2] [(unsigned char)2] [i_3])))) - (min((arr_21 [i_3]), (((/* implicit */long long int) arr_13 [i_3]))))));
    }
    for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
    {
        arr_34 [i_8] [i_8] = ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_8 - 2]), (arr_0 [i_8 - 1]))))) > ((+(min((((/* implicit */long long int) arr_0 [i_8])), (-5936992121986828959LL))))));
        arr_35 [i_8] = (-(((/* implicit */int) arr_8 [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 1])));
        arr_36 [i_8 - 1] = ((/* implicit */int) arr_4 [i_8 - 2] [i_8 - 2]);
    }
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */int) (signed char)-52);
}
