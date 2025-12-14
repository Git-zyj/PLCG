/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18805
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
    var_14 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_7)))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) % (((/* implicit */int) var_9))))) ? (var_5) : (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_9);
        var_16 = ((/* implicit */unsigned long long int) ((min((arr_0 [i_0]), (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) < (arr_2 [i_0])))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (arr_0 [i_0]))) < (arr_0 [8]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) min((max(((~(((/* implicit */int) arr_6 [8ULL] [i_0] [i_1])))), (((/* implicit */int) arr_6 [i_1 + 1] [8ULL] [i_0])))), (((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_1]))));
            arr_8 [i_0] [i_1] = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) arr_0 [8U])) ? (arr_0 [i_1]) : (arr_0 [i_0])))) >= (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_13 [i_0] = ((/* implicit */int) ((((unsigned long long int) (signed char)38)) >> (((arr_2 [i_0]) - (2073132446U)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_17 = ((max((arr_15 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_3]))) / (arr_15 [i_0] [i_0] [i_0] [i_0]));
                        arr_18 [i_4] [i_4] [i_3] [i_4] = min(((+(((unsigned int) var_13)))), (((/* implicit */unsigned int) arr_16 [8] [i_2] [i_3])));
                        arr_19 [(short)9] [i_2] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-38)), (1792927141U)));
                    }
                } 
            } 
        }
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
        {
            for (int i_7 = 4; i_7 < 23; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_29 [i_6] [i_7 - 4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))) / (max((2502040155U), (((((/* implicit */_Bool) 1023)) ? (3807289916U) : (((/* implicit */unsigned int) -2139563453))))))));
                        arr_30 [i_7] [i_7] [i_7 - 3] [i_6] = ((/* implicit */signed char) arr_23 [i_8]);
                        arr_31 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6]))));
                        var_18 = ((/* implicit */int) ((unsigned int) min((arr_20 [i_7 + 2] [i_7]), (arr_20 [i_7 + 2] [i_7 + 2]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_26 [i_5] [i_5])))), (((/* implicit */int) arr_26 [i_5] [i_5]))));
        arr_32 [16U] [i_5] = ((/* implicit */int) arr_27 [i_5]);
    }
    var_20 -= ((/* implicit */int) var_0);
}
