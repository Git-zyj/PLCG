/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116386
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned int) var_9);
            arr_9 [i_0] = max((min((((/* implicit */long long int) arr_1 [i_1 + 2] [i_1])), (var_7))), (((/* implicit */long long int) arr_1 [i_1 - 1] [i_1])));
            var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3132462068U))))))));
            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (min((((/* implicit */unsigned int) (_Bool)0)), (3132462081U))))))) - (((((((/* implicit */_Bool) arr_7 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171)))))));
            arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_6));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_2] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_2])) <= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-6077292948956373654LL)))))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    {
                        var_16 *= ((((/* implicit */_Bool) -350638481343453902LL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (min((arr_13 [i_0]), (((/* implicit */long long int) arr_2 [i_4]))))))) : (((((/* implicit */_Bool) 6077292948956373645LL)) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3571729197843324459ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))));
                        arr_20 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3] [i_4])) && (((/* implicit */_Bool) 3161758041U)))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)24)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            arr_25 [i_5] = ((/* implicit */unsigned long long int) (-(max((min((((/* implicit */long long int) var_6)), (arr_22 [i_0] [i_0] [i_5]))), (min((var_2), (var_7)))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        arr_32 [i_7] [i_6] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_33 [i_0] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) min((min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0]))) & (var_9))), (((var_8) & (var_8))))), (arr_21 [i_5])));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 1152358554653425664LL))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (arr_16 [i_5] [i_8] [i_0] [i_10])));
                            arr_42 [i_5] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    var_19 |= var_10;
                    /* LoopSeq 1 */
                    for (long long int i_12 = 3; i_12 < 11; i_12 += 3) 
                    {
                        arr_47 [i_5] [i_8] [i_11] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_11 - 1] [i_11 - 1])) ? ((-(arr_22 [i_0] [i_5] [i_11 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)38)))) : (((/* implicit */int) arr_7 [i_11 + 1]))));
                        arr_48 [i_12 - 2] [i_5] [i_8] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_12 - 2] [i_11 - 1] [i_8] [i_11] [i_12] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_12 + 1] [i_11 - 1] [i_0] [i_11]))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    arr_52 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) 845441354U);
                    var_21 = ((/* implicit */unsigned int) arr_15 [i_13] [i_5]);
                }
            }
            var_22 = arr_51 [i_5] [i_5] [i_0];
        }
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_6)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1685796684U)), (9223372036854775807LL))))))) ? ((+(max((((/* implicit */unsigned long long int) var_2)), (var_10))))) : (((/* implicit */unsigned long long int) var_8))));
}
