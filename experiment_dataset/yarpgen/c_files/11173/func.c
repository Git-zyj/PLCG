/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11173
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
    var_11 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [(short)3] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1])) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_8 [i_0])), (min((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_2])))))));
                    var_12 = ((/* implicit */_Bool) (+(max((max((127), (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */int) (short)-5))))))));
                    var_13 += (unsigned char)15;
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) << (((arr_4 [i_0]) - (15867271606063388993ULL))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((unsigned long long int) arr_6 [i_5] [i_3] [i_3])) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)64404)), (4294967288U)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_0);
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(min((((((/* implicit */unsigned long long int) arr_21 [i_7] [i_6] [i_5 - 1] [(_Bool)1] [i_3])) / (var_9))), (min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_7] [i_5])), (13249448562319977491ULL))))))))));
                                var_17 = ((/* implicit */signed char) arr_11 [i_3] [i_3]);
                                var_18 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) == (arr_11 [i_5] [i_3])))), (arr_23 [(signed char)4] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]))), (((/* implicit */unsigned long long int) (short)5746))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */long long int) (unsigned char)0);
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_2)) ^ (127))) & (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_16 [(unsigned short)5] [(unsigned short)5] [i_3])) : (-1101759355))))) | (((/* implicit */int) arr_20 [i_3]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_8]))) ^ (11430881428789425710ULL)));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)249))));
        arr_28 [i_8] = ((/* implicit */int) (_Bool)1);
    }
}
