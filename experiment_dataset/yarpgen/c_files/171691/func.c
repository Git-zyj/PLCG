/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171691
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_11))))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)19))))) : ((-(var_6)))))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_14))));
    var_17 += ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) var_7)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) (+((+(((((/* implicit */int) arr_3 [i_0] [i_2])) % (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_8 [i_0]) | (arr_8 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])))))) : (arr_2 [i_0 - 1] [i_0 - 1]))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1]))))) ? ((-(arr_6 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32764))))))))))));
                    arr_10 [(unsigned short)12] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((arr_8 [i_2]) | (((/* implicit */int) arr_7 [i_2]))))) != (arr_2 [i_0] [i_0]))) ? (((unsigned long long int) (-(arr_6 [i_0] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (+(((456791530) | (456791531))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_8 [i_2]), (((/* implicit */int) arr_3 [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (+(arr_6 [i_0 - 2] [i_2] [i_2]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [14U])) | (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_2]))))) & (max((((/* implicit */unsigned long long int) arr_5 [i_2] [9ULL] [i_1] [i_1])), (arr_0 [i_0 - 2])))))));
                    arr_12 [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) min((arr_4 [(unsigned short)10]), (arr_4 [i_0 + 1]))))))), (((((/* implicit */_Bool) (~(arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((arr_0 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_23 [i_3 + 1] [i_3] [i_4 + 1] [14U] = ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_13 [i_5]) : (arr_15 [i_3 + 1] [i_4 - 4] [i_3 + 1]))) / (arr_15 [i_5] [(signed char)11] [i_3 + 1])))));
                    arr_24 [i_5] [i_4 - 3] [i_3] |= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_4 - 1] [i_5])) ? (arr_16 [i_3]) : (((/* implicit */int) arr_17 [9] [i_4 - 1] [i_3]))))))) ? (arr_16 [i_5]) : (((/* implicit */int) ((short) ((unsigned int) arr_22 [i_3] [i_3] [i_3] [i_5])))));
                    var_19 = ((/* implicit */unsigned long long int) min((536440129), (((/* implicit */int) (unsigned char)40))));
                    var_20 = arr_21 [i_3 + 1] [i_4 - 4] [19] [i_4 - 2];
                }
            } 
        } 
        arr_25 [i_3 + 1] &= ((/* implicit */unsigned short) arr_16 [i_3]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_3 + 1]) | (arr_13 [i_3 + 2])))) ? ((+(arr_22 [i_3] [i_3 + 1] [i_3] [i_3]))) : ((+(((/* implicit */int) arr_17 [i_3] [i_3 - 1] [10ULL]))))));
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(arr_16 [i_3 + 2])))) + ((+(arr_13 [i_3 - 1])))));
    }
}
