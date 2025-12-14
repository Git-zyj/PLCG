/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184414
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
    var_11 = ((/* implicit */unsigned int) (~(var_8)));
    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((var_8) ^ (((/* implicit */unsigned long long int) var_7))))));
    var_13 = ((/* implicit */long long int) max(((-(((var_8) * (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_10))) : ((+(var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] [i_3] = ((/* implicit */int) (-((+(((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_2] [i_3] [8] [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [0])))))))));
                                arr_12 [i_3] = ((/* implicit */long long int) max((((arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]) % (arr_8 [i_1 + 1] [i_1] [i_1]))), (((/* implicit */int) min(((unsigned char)208), ((unsigned char)208))))));
                                arr_13 [i_0] [i_3] [i_2] = arr_7 [i_0] [i_1] [i_2] [i_3] [i_4];
                                arr_14 [i_3] [i_1] = (((!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_1])))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [2U] [i_1] [i_1] [7] [i_1]))))), (((((/* implicit */long long int) arr_4 [(unsigned short)9] [i_3])) | (arr_1 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) arr_8 [i_0] [i_3] [i_4])) <= (arr_0 [4U])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned short i_6 = 4; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] [3LL] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_5 + 1] [i_6])) >> (((arr_6 [i_0] [i_1] [i_5]) - (984485364U)))))), (arr_10 [i_6 - 3] [i_6] [i_6 - 3] [i_6] [i_1 + 1] [i_1] [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 - 4] [i_5 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) | (max((arr_10 [i_6] [i_5] [i_5] [i_1] [1U] [i_0] [8LL]), (arr_10 [i_0] [i_1] [i_6] [i_6] [i_6] [(unsigned short)1] [i_5 - 2])))))));
                            arr_20 [i_0] [i_1] [i_5 - 1] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) > (2686544456U)));
                            var_14 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_5] [i_6])) && (((/* implicit */_Bool) arr_8 [i_0] [1U] [i_0])))) ? (((arr_6 [i_0] [i_0] [4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((arr_15 [i_0]) / (arr_15 [i_0])))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)172)))))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (unsigned char)172)), (3658310332U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1 + 1] [i_5 - 1])))))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)47)), (-5012798997837841076LL)));
                var_16 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 + 1])))));
                arr_22 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_0] [i_1 + 1] [i_1]))) ? ((+(((/* implicit */int) arr_5 [i_0] [7LL] [i_0])))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1 - 1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_1);
}
