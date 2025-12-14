/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112131
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0])))) & (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [(signed char)6])) : (((/* implicit */int) arr_3 [i_0]))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : ((+(((/* implicit */int) (signed char)10))))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [(signed char)7] [i_1] [i_0]))) : (((/* implicit */long long int) min((arr_2 [i_0]), (arr_2 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)10))));
                    arr_15 [i_2] [i_3] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 - 2])) ? (arr_9 [i_3 + 1]) : (((((/* implicit */int) arr_8 [i_2])) | (((/* implicit */int) arr_13 [10U] [i_3]))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 + 2])) ? (((/* implicit */int) arr_7 [i_3 + 4] [i_3 + 4])) : (((/* implicit */int) arr_7 [3ULL] [i_3 + 1]))));
                }
                arr_16 [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31180)) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) (signed char)-123))))) ? (((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3] [i_3 + 2])) ? (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3]))) : (17293091234608922877ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)20997))))))) : ((~(min((arr_10 [i_3 + 1]), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3]))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_25 [i_2] [10U] [i_3] [i_5] [i_2] [i_3] [i_7 - 1] = ((/* implicit */unsigned char) (short)-32752);
                                var_21 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((arr_12 [i_2] [i_3] [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_5] [i_2] [i_2] [i_7 + 1])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_5] [i_6]))))) : ((+(arr_23 [i_2] [i_2] [i_2] [i_2])))))));
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_24 [(short)9] [(short)1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))) * ((-(((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7 - 1] [(signed char)5]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
