/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121523
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (-2283480569014307662LL)));
    var_21 = ((/* implicit */unsigned int) ((long long int) ((max((((/* implicit */long long int) (unsigned short)7936)), (2283480569014307659LL))) / (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    var_22 += ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_1 [5LL] [i_0]), (arr_4 [i_2 + 4] [i_1] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [1ULL] [1ULL] [i_2 + 2])))))))) == (((((/* implicit */unsigned long long int) min((2283480569014307643LL), (((/* implicit */long long int) arr_7 [i_0 + 3] [i_1] [i_1] [(unsigned char)0]))))) & (max((8191ULL), (((/* implicit */unsigned long long int) (unsigned char)111))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((arr_4 [i_2 + 4] [i_1] [i_0 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))))) >> (((((/* implicit */int) arr_3 [5LL] [5LL])) - (57)))));
                                var_23 = ((/* implicit */int) arr_9 [i_2] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_5]) - (((/* implicit */int) (unsigned short)65514))))) ? (arr_2 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0] [i_0] [i_2] [i_5]) > (-2283480569014307684LL)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) < (arr_2 [i_5]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (arr_12 [i_1]) : (((/* implicit */int) (unsigned short)16384))))) : (arr_10 [i_0] [i_0] [5] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -2283480569014307694LL))))));
                                var_25 = ((/* implicit */unsigned long long int) max(((unsigned short)16384), (arr_17 [i_0] [i_0] [i_0] [i_6] [i_0] [i_2])));
                                var_26 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)7939)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 32767LL)) % (arr_4 [i_0] [i_2] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 3]))) : (min((arr_6 [i_5] [i_1] [i_2]), (((/* implicit */unsigned long long int) (short)-26171))))))));
                                var_27 = ((/* implicit */unsigned short) (+(32775LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
