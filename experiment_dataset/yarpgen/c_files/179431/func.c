/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179431
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) 1149368456)) & (1000384309U)))))));
    var_12 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((max((min((12438287015831225941ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_1)))) - (12438287015831225941ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */unsigned long long int) -328136471)) < (6008457057878325674ULL))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        arr_4 [i_0 - 1] = ((/* implicit */short) (+(-202467425)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)58)), (607450398087031812ULL))), (((((/* implicit */_Bool) arr_0 [i_1])) ? ((+(arr_0 [6LL]))) : (max((arr_3 [i_1] [i_1]), (607450398087031812ULL)))))));
        arr_9 [i_1] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4629736547924374321ULL)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_1))))), (((var_6) >> (((3298814880U) - (3298814880U)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_1] [(signed char)7] [i_1])) | (((/* implicit */int) var_10))))))) ? (min((((((/* implicit */int) var_4)) + (((/* implicit */int) arr_11 [i_5 + 2])))), (((/* implicit */int) ((arr_2 [i_5 - 1]) > (arr_14 [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)0] [(short)0])))))));
                                var_14 = ((/* implicit */unsigned short) 16770056020079065458ULL);
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_2] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-545280596) : (((/* implicit */int) ((max((arr_12 [i_1]), (((/* implicit */int) var_10)))) < ((-(((/* implicit */int) arr_18 [i_1])))))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (var_7)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 144115188075331584LL)) : (6008457057878325674ULL))))) >> (((((/* implicit */int) var_1)) - (47057)))));
}
