/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112137
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) ((unsigned char) arr_3 [(unsigned char)8] [i_1] [i_0])))), ((+(arr_3 [i_1 + 1] [i_1] [i_0 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(arr_7 [8LL] [i_2]))))));
                                var_12 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_6 [i_0 + 4] [4] [4] [i_4 + 1]))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 - 1] [i_1] [i_4 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 2]))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_1] [i_4 + 1]))) : (arr_4 [i_1])))))) && (((/* implicit */_Bool) (-((~(arr_1 [i_2]))))))));
                            }
                        } 
                    } 
                } 
                var_14 += ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) min(((short)11510), (((/* implicit */short) (_Bool)1))))))));
                var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 4] [10LL] [i_0 - 1])) ? (min((min((((/* implicit */long long int) arr_0 [i_1] [i_0])), (arr_3 [i_0] [i_0] [8LL]))), (((/* implicit */long long int) ((unsigned int) arr_1 [11LL]))))) : (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        for (short i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_14 [i_5 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))) : ((-(arr_15 [12ULL]))))))));
                var_17 = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_15 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_5])))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 3])) ? (((/* implicit */int) arr_14 [(_Bool)1])) : (((/* implicit */int) arr_16 [i_6 + 1] [3] [i_6]))))) ? (((/* implicit */int) arr_16 [i_5] [i_6 - 1] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_5]))) : (min(((+(((/* implicit */int) arr_12 [i_6] [i_5 + 3])))), (((/* implicit */int) arr_14 [i_5])))))))));
            }
        } 
    } 
}
