/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168954
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15872U))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((4294951424U), (((unsigned int) var_10))))));
    var_19 = ((/* implicit */short) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_20 = (+(((/* implicit */int) max((arr_5 [i_3] [i_3] [i_3 - 2] [i_3 - 2]), (arr_5 [i_3] [i_3] [i_3 - 3] [i_3 + 2])))));
                            arr_11 [i_3] [i_1] [i_3] [i_3] [i_2] [i_1] = arr_7 [i_0] [i_2];
                            var_21 = ((/* implicit */long long int) var_12);
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_5 [i_3 + 2] [i_0 - 2] [i_1 + 1] [i_2 + 2])), ((~(arr_0 [i_2 - 2] [i_2])))));
                            arr_16 [i_0] [i_2] [i_0 - 2] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_1] [i_5] [i_3 - 2]);
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] = (!(((/* implicit */_Bool) arr_2 [i_5])));
                            var_22 = ((/* implicit */unsigned char) var_6);
                            var_23 = ((/* implicit */unsigned int) min(((~(var_11))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_5] [i_3 + 1] [i_2 + 1] [i_1 + 2])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_6])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_20 [i_0 - 4] [i_2] [i_3] [i_3 - 1] [i_3 - 3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (arr_6 [i_0] [i_3 - 3] [i_2] [i_3 - 3] [i_3 - 3] [i_3 - 3]) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_6])), (arr_10 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2] [i_2] [i_2]))))) : (min((min((arr_10 [i_2] [i_6] [i_3] [i_2] [i_1] [(unsigned char)1] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))), (arr_10 [i_2] [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_3] [i_3 - 3])))));
                            arr_22 [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_2] [i_1] [i_3] [i_3] [i_6] [i_3 + 2])) ? (((unsigned long long int) arr_2 [i_6])) : (((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 4] [i_0 - 4] [i_0])))));
                            var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_2 + 2] [i_1 - 1])))), ((~(min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_2] [(unsigned char)2] [i_2] [i_1])), (var_10)))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_6])) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1 + 1] [i_2] [i_0] [i_6])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) (unsigned char)48)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0]))))) ? ((~(((/* implicit */int) arr_20 [i_0] [i_1 + 2] [i_2] [i_3] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)48)), (arr_7 [i_0] [i_6])))))))))));
                        }
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2] [i_2]))));
                        arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) : (min((((/* implicit */unsigned long long int) ((short) arr_5 [i_0 - 4] [i_2] [i_1] [i_0 - 4]))), (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 3])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1]);
                            arr_33 [i_0] [i_1] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */long long int) (-(min(((~(((/* implicit */int) arr_30 [i_7] [i_7] [i_8] [i_9])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_0 - 3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_7]))))))));
                            arr_34 [i_0] [6LL] [(unsigned char)3] [i_7] [i_0 - 4] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_28 [i_8] [i_1 + 2] [i_8] [i_8] [i_9])) ? (arr_14 [i_1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_15))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
        {
            arr_37 [i_0] [i_10 - 2] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_18 [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_10] [i_10] [i_0 - 3])), (var_7))))) * (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_10] [i_10])) ? (arr_10 [14U] [i_10] [i_10] [i_10] [i_10 - 2] [i_10 - 1] [i_10]) : (arr_10 [(signed char)4] [i_10] [i_10] [i_10] [(signed char)4] [i_0] [i_0])))))) ? ((~(max((((/* implicit */long long int) arr_8 [i_0] [i_0] [(short)11] [i_0] [i_10])), (arr_27 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]))))) : (-576136555728654432LL)));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)167))))) ? (arr_35 [i_10] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (arr_36 [i_10 - 2] [i_10])))))))) ? ((+(max((((/* implicit */unsigned int) (unsigned char)48)), (2902764547U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7915779U), (((/* implicit */unsigned int) arr_36 [i_10] [i_10]))))) ? (((/* implicit */int) max((arr_8 [i_10 + 1] [i_10] [i_10] [i_0] [i_0]), (arr_5 [(unsigned char)6] [i_10] [i_10] [i_0])))) : (((/* implicit */int) var_16)))))));
        }
        for (unsigned int i_11 = 2; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) arr_29 [i_11]);
            arr_41 [i_0] [i_11] = ((/* implicit */unsigned char) (~((+(arr_27 [i_0] [i_0 + 1] [i_0] [i_0 - 4] [i_0 + 1] [i_0])))));
        }
        for (unsigned int i_12 = 2; i_12 < 16; i_12 += 1) /* same iter space */
        {
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) arr_30 [12U] [i_12 - 2] [i_0 - 1] [12U])), (var_10))));
            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_12 - 2] [8LL]))));
        }
        var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_40 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_40 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_40 [i_0 - 2] [i_0 - 2])))) > (((/* implicit */int) min((arr_40 [i_0 + 1] [i_0]), ((short)30512))))));
    }
}
