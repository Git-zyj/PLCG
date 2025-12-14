/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183232
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((signed char) (((!(((/* implicit */_Bool) (unsigned char)140)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1222835946U)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */unsigned short) arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_12 [i_0] [i_3] [i_2] [i_3] [(unsigned short)6] [i_4]))));
                                var_17 = ((short) arr_0 [i_4] [i_4 - 2]);
                                var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) arr_12 [i_0] [i_1] [(short)5] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0])))) : (((unsigned int) arr_14 [i_0] [i_0] [i_1] [6] [i_2] [i_0] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1535974787)) ? (3650983960989039026LL) : (((/* implicit */long long int) arr_3 [i_1])))))))))));
                                var_19 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) arr_0 [i_4] [i_1])) / (arr_13 [i_0] [i_1] [(unsigned short)5] [i_0] [i_4] [i_4]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)1]))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 536870904ULL)) ? (((/* implicit */int) (unsigned char)152)) : (arr_6 [i_1] [i_1]))) << (((((/* implicit */int) (unsigned short)37504)) - (37493))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4197624071U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)116))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [9ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
}
