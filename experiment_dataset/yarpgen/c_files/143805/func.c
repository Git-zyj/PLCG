/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143805
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
    var_20 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) var_6);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [(short)8] [i_0])) || (((/* implicit */_Bool) arr_12 [i_3] [i_3] [(unsigned short)8] [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (+(arr_3 [i_1] [i_1] [6]))))), (((int) var_19))));
                                arr_15 [i_4] [i_3] [i_3] [i_3] [10ULL] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max(((unsigned short)16383), ((unsigned short)16383)))) << (((((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2] [i_3]), (arr_0 [i_0])))) - (10583))))) & (arr_3 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_0] = max((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)49171))))), ((unsigned short)16383)))), ((-(((/* implicit */int) max((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_4))))))));
                            var_23 = ((/* implicit */signed char) ((short) ((unsigned short) arr_13 [i_0] [i_1] [i_0] [i_6] [(unsigned char)0])));
                            arr_23 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) (unsigned short)49152)) || (((/* implicit */_Bool) var_14))))) / (min((((/* implicit */int) ((unsigned char) var_17))), (max((arr_19 [i_0] [i_0] [i_5] [i_6 - 1]), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)16383)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 9; i_7 += 1) 
                            {
                                arr_26 [i_6] [i_5] [i_1] [i_0] &= ((/* implicit */_Bool) var_5);
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_7]))));
                                arr_28 [i_0] [i_1 - 3] [(unsigned short)10] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (arr_19 [i_7 - 1] [i_6 + 1] [i_0 + 2] [i_1 - 2]) : (26524856)));
                            }
                        }
                    } 
                } 
                arr_29 [i_0] = ((unsigned short) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        for (unsigned short i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            {
                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_33 [6ULL] [6ULL]))) ? (((/* implicit */int) ((unsigned short) (short)32763))) : ((~((-(((/* implicit */int) (_Bool)1))))))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (arr_33 [i_8] [(unsigned short)12])));
            }
        } 
    } 
}
