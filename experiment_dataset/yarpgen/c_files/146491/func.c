/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146491
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
    var_17 = ((((max((var_16), (var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))))) | (var_11));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_18 &= var_7;
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_9 [i_2] [i_0] [i_0] = (+(var_9));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_8)));
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        var_21 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 4790336554384171408ULL)) && (((/* implicit */_Bool) (unsigned char)128)))))));
    }
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) var_14)))))) + ((+(var_6)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(var_5))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
                            arr_23 [i_8 + 4] [i_7] [12U] [10ULL] [i_6] [12U] [12U] = ((/* implicit */unsigned int) (+((-(var_15)))));
                        }
                    } 
                } 
            }
            arr_24 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967276U))));
            arr_25 [i_4] [i_5] [10U] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) max((var_4), (((/* implicit */unsigned long long int) var_3))))));
        }
        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
        {
            arr_28 [i_4] [i_4] = ((/* implicit */unsigned int) min((max((max((var_16), (var_8))), (min((var_6), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) var_10))));
            var_25 = ((/* implicit */unsigned int) var_11);
            var_26 = ((/* implicit */unsigned int) ((((((var_8) * (((/* implicit */unsigned long long int) var_5)))) * (max((var_8), (((/* implicit */unsigned long long int) var_5)))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_12), (var_2)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_36 [i_4] [i_9 + 4] [i_9 + 4] [i_11] [i_12] = ((/* implicit */unsigned long long int) (+(var_14)));
                            arr_37 [7U] [7U] [i_10] [i_10] [i_10] [i_10 + 3] [i_10] = ((unsigned int) ((unsigned int) var_15));
                            var_27 = ((/* implicit */unsigned long long int) var_12);
                            arr_38 [i_4] [i_4] [4U] [5U] [i_4] [0ULL] [(unsigned char)8] = ((/* implicit */unsigned long long int) (((+(var_11))) >= ((+(var_1)))));
                            arr_39 [13ULL] [i_9 + 4] [13ULL] [i_4 + 2] [(unsigned char)4] [i_12] [5U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4294967295U)), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3520610600U))))), (7639576877560804572ULL)))));
                        }
                    } 
                } 
            } 
            arr_40 [i_4 + 3] [i_4] [i_4] = (~(min((var_13), (max((var_6), (((/* implicit */unsigned long long int) var_5)))))));
        }
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) ((unsigned char) var_6))))))));
        arr_41 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) var_14)));
        arr_42 [i_4] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))) / (max((min((var_8), (var_4))), (((/* implicit */unsigned long long int) (-(var_14))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) var_14);
}
