/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105449
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_10))), (min((((/* implicit */unsigned int) arr_1 [(unsigned char)9])), (arr_4 [(short)8] [i_0])))))) ? (((/* implicit */int) (short)24164)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((((/* implicit */short) var_4)), (arr_6 [i_3])));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29412)) ? (((unsigned int) (short)-29411)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32045)) ? (((/* implicit */int) (short)29400)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_0] [(unsigned char)4] [i_2] [i_2] [i_3] [(unsigned char)10] = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned short) var_8)), (arr_13 [i_0] [i_1] [i_4 - 1] [i_3] [i_4]))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((((/* implicit */_Bool) max((arr_6 [i_4]), ((short)-29400)))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) max((var_7), (var_7)))))))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_4 + 1] [i_1] [i_4 + 1])) ? (((((/* implicit */_Bool) (unsigned short)10087)) ? (((/* implicit */int) var_6)) : (var_0))) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_3]))), (arr_9 [i_3])))) : (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_3]))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))));
                }
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_5] [i_6 + 3] [i_7 + 1] = ((/* implicit */unsigned char) ((max((((unsigned int) var_3)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_18 [i_5] [i_1])), (arr_13 [i_0] [i_1] [i_5] [1U] [i_7])))))) < (arr_12 [i_0] [i_0] [10U])));
                                arr_24 [(unsigned char)1] [(_Bool)1] [(unsigned char)1] [i_6] [i_7 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26994))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_6] [i_6] [i_6]) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) max((arr_9 [i_7]), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (var_2)))))) : (((((/* implicit */_Bool) max((arr_20 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7]), (((/* implicit */long long int) arr_12 [i_6] [i_5] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)29373)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_20 [i_5] [i_6 - 2] [i_5] [i_5] [(short)8] [7U])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_3)))))));
    var_18 = ((/* implicit */unsigned int) (-2147483647 - 1));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_35 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_8] [i_8] [i_8] [i_10]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) var_2)) : ((+(arr_30 [i_11] [i_10] [(unsigned short)10] [(unsigned short)10])))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_9] [i_9] [6U] [i_11]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((min((6240301701625401437ULL), (((/* implicit */unsigned long long int) (short)29387)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_30 [14LL] [i_9] [i_9] [i_9]))), (arr_30 [(short)7] [i_9] [i_9] [i_9]))))));
                var_22 = ((/* implicit */unsigned char) (+(max(((-(((/* implicit */int) arr_34 [i_8] [i_9] [i_9] [i_9] [i_9] [(unsigned short)16])))), ((~(var_0)))))));
                var_23 = ((/* implicit */unsigned char) min((((int) arr_27 [i_8])), (((/* implicit */int) min((arr_33 [i_9] [i_9] [i_9] [i_8]), (arr_33 [1U] [i_8] [i_9] [i_9]))))));
            }
        } 
    } 
}
