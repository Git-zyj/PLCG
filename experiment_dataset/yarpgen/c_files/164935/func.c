/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164935
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
    var_13 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_1] = ((unsigned char) arr_6 [i_0] [i_0 + 3] [i_1] [4LL]);
                        arr_11 [0ULL] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) arr_2 [i_0 - 1]);
                        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 + 2]))));
                        var_15 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                        var_16 = arr_3 [i_2] [i_3] [i_3];
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) (+(((((/* implicit */long long int) 0)) % (7326704695671809317LL)))));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2994719422331505814ULL)) ? (((/* implicit */int) (short)8829)) : (((/* implicit */int) (short)0))));
        arr_13 [i_0] = ((/* implicit */signed char) (-(arr_5 [i_0 - 1] [i_0] [(unsigned char)9])));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13257))) : (arr_15 [i_4])))) : (arr_14 [i_4]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6645))))) ? (-2929951118876281712LL) : (((/* implicit */long long int) (+(598280883U)))))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) var_5);
                        var_19 = ((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9] [(unsigned char)22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(arr_18 [i_4] [i_4] [i_4]))))))));
                    arr_30 [i_9] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)-19313)))))))));
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((arr_15 [i_8]) & (-2768462647970567410LL)))), (((((/* implicit */unsigned long long int) arr_22 [i_4] [i_8] [i_9 - 1])) * (9692675776515608393ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) min(((-(arr_23 [i_10 + 1] [i_10 + 1] [i_9] [i_4] [i_9 + 1] [i_4]))), (arr_14 [i_9 - 1])));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_35 [i_4] [i_11] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_4] [i_4])) ? (arr_28 [i_9 + 2] [i_9] [i_9 + 2]) : (((arr_28 [i_8] [i_9] [i_11]) & (arr_15 [i_4])))));
                        arr_36 [i_4] [i_4] [i_4] [i_9] [12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) var_4);
    var_25 = ((/* implicit */short) var_3);
    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))))));
}
