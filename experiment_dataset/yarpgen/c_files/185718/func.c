/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185718
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
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)19398))))), (var_11)));
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1]);
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)19389)))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_2 - 2])))))) ? (max((((var_2) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46138))))), (max((((/* implicit */long long int) var_8)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_10 [i_1]))));
                    }
                    var_19 = ((/* implicit */short) ((min((arr_8 [(signed char)11] [12] [(signed char)11] [i_2 + 3]), (min((((/* implicit */long long int) var_6)), (arr_4 [i_2 + 1] [0LL] [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))));
                    var_20 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [(short)0] [i_0] [8U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))));
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)16)))))));
                }
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_24 [i_6] [i_5] [i_4] [i_1] [5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)120)), (((((/* implicit */int) var_0)) % (min((((/* implicit */int) arr_10 [i_4])), (arr_22 [i_0] [i_1] [i_4] [1] [i_6])))))));
                                var_22 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)224))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) (unsigned short)46138))) + (2147483647))) >> (((arr_9 [i_1]) - (7947032974173053748LL)))))) * (((unsigned long long int) var_12))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_1);
    var_24 = ((/* implicit */unsigned char) (short)32742);
}
