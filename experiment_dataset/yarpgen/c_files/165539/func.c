/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165539
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
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (-675088344)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [(signed char)2] [i_0]))));
        var_20 = ((/* implicit */unsigned short) ((arr_0 [i_0]) ? (min((((/* implicit */unsigned int) arr_0 [4LL])), (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)10] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        var_21 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_22 = (+((+(((/* implicit */int) min((arr_4 [(unsigned char)8] [i_1]), (arr_4 [i_1] [i_1])))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (arr_10 [i_1] [i_2] [i_4])));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_3] [i_3 + 2]), (arr_14 [i_3 + 1] [i_3] [i_3 + 1])))) ? (((unsigned long long int) arr_15 [i_3] [i_3] [i_3 + 1] [i_3 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
                        var_25 |= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_12 [i_1] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-4221365105808576305LL)))) ? (((4221365105808576303LL) >> (((((/* implicit */int) (short)8420)) - (8368))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)7] [(short)7] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [(signed char)0] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [(unsigned char)10] [1U])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_2]))))))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    {
                        arr_22 [(_Bool)1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_5] [7ULL] [7ULL]);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 = (+(((var_9) ? (((/* implicit */int) (unsigned char)176)) : (arr_5 [i_1]))));
                            var_29 = ((/* implicit */long long int) var_14);
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) arr_27 [i_5] [i_8]);
                            arr_29 [i_1] [(_Bool)1] [i_1] [i_6] [8ULL] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (max((((/* implicit */unsigned long long int) arr_3 [(short)7])), (arr_28 [(unsigned short)9] [i_2] [(signed char)6] [8U] [i_8] [(signed char)9] [i_6]))) : (((/* implicit */unsigned long long int) (~(arr_3 [(signed char)9]))))))));
                            arr_30 [i_1] [i_1] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-31992), (((/* implicit */short) (_Bool)1))))))))));
                        }
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)8398)) == (((/* implicit */int) ((unsigned char) -20)))));
                    }
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_32 = ((/* implicit */_Bool) arr_31 [i_1] [i_9]);
            arr_33 [i_1] = ((/* implicit */unsigned char) ((arr_13 [i_9] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9]) ? (((long long int) 1266665965U)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32002))) : (4200000519U))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        var_33 += ((/* implicit */unsigned long long int) arr_32 [i_10 + 1] [i_10 + 1]);
        arr_36 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))));
        var_34 = ((/* implicit */unsigned long long int) arr_23 [i_10] [i_10]);
    }
}
