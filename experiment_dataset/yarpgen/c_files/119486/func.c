/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119486
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_11 [(short)5] [(unsigned short)9] [i_2] [9U] [i_0] = ((/* implicit */signed char) (((-(1609250388))) % (((/* implicit */int) (_Bool)1))));
                                var_11 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) arr_5 [i_1])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_1] [i_0] [i_6] [i_7] [i_7] [6ULL]))))), (arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 4]))));
                                var_12 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-95)) ^ (((/* implicit */int) var_0))))), (((arr_4 [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))))))), (((/* implicit */unsigned int) arr_7 [i_7 + 1] [i_6 + 1] [i_5] [i_1] [i_1 - 2] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((-(min((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_1] [(unsigned char)1] [i_1])), (var_2))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1456067890) - (var_4)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max(((-(max((((/* implicit */unsigned long long int) var_4)), (4150572601049666598ULL))))), (((/* implicit */unsigned long long int) (short)-3998))));
    var_14 = ((/* implicit */unsigned char) max((var_8), (min((var_3), (((/* implicit */unsigned long long int) ((short) var_4)))))));
}
