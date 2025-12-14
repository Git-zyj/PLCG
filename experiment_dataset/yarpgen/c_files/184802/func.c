/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184802
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
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (1828380495506589358ULL))) : (var_0))), (((unsigned long long int) var_15))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((_Bool) arr_1 [i_0])) || (((((/* implicit */_Bool) 11864240103870785147ULL)) && ((_Bool)1)))))) - (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)41)) && (((/* implicit */_Bool) (unsigned short)14992))))) << (((((arr_0 [i_0]) * (arr_0 [i_0]))) - (2607724716U)))))));
        arr_3 [i_0] = ((unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) min(((unsigned short)4133), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((max((arr_4 [i_1 - 1] [i_1 - 1]), ((+(arr_4 [i_1] [i_1]))))), (((/* implicit */unsigned int) -230120667))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (arr_5 [i_1 + 2])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_7 [4U]))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) 1722157776))));
                    arr_14 [i_3] [i_3] [1U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) || (((((/* implicit */int) arr_9 [i_2] [i_2 + 1])) > (((/* implicit */int) arr_9 [i_2] [i_2 - 1]))))));
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_3))) ? (max((16011508941713277554ULL), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) arr_13 [i_2])))))));
                    arr_15 [i_2] [i_3] [(unsigned short)12] = ((((unsigned int) (unsigned short)56337)) % (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - ((~(((/* implicit */int) (unsigned short)4141))))))));
                    arr_16 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */int) ((((((arr_10 [i_2]) / (((/* implicit */unsigned long long int) var_3)))) / (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_2]))))) / (max((min((arr_8 [i_3]), (((/* implicit */unsigned long long int) arr_13 [i_2])))), (((((/* implicit */_Bool) 16011508941713277562ULL)) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    var_22 = arr_19 [5ULL] [5ULL] [i_2] [5ULL];
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)19907)), (((arr_17 [i_2 + 1] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-6655)) ^ (((/* implicit */int) (signed char)33))))) ? (min((((/* implicit */unsigned long long int) (signed char)38)), (arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_6])) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (short)30678))))))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_11 [i_2] [i_2 - 1]), (arr_11 [i_2] [i_2 + 1])))) % (((/* implicit */int) min((arr_11 [i_2 - 1] [i_2 - 1]), (arr_11 [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) var_11);
}
