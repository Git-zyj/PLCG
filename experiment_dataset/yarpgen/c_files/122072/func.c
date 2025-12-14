/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122072
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) > (((/* implicit */int) arr_0 [i_0 - 2])))))));
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */int) var_11);
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) var_2);
                    arr_11 [i_2] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2 + 4] [i_2 - 2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
                                arr_17 [i_0] [i_0 - 2] [(_Bool)1] [i_0 - 2] [i_3] [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_9 [i_0]);
                                arr_18 [i_0 - 1] [i_2] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_2] [i_2 + 3] [i_2 + 3] = ((/* implicit */unsigned char) var_7);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1))))))) * (var_12))))));
                        arr_23 [2LL] [2LL] [i_1] [2LL] [i_1] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((1915950002) * (((/* implicit */int) (_Bool)1))))), (2954807904844026379LL)));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-117)), (arr_12 [i_0] [i_1] [i_5]))))) : ((-(var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) >= (((/* implicit */int) arr_5 [i_5]))))) : (((/* implicit */int) (signed char)-28))))))))));
                    }
                }
                for (long long int i_6 = 2; i_6 < 7; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [i_6 + 2] &= ((/* implicit */unsigned long long int) var_4);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_0 + 1])), (arr_21 [i_0 - 2] [i_6] [i_6 + 4])))) ? (((/* implicit */int) (!(arr_5 [i_0 - 2])))) : ((-(((/* implicit */int) arr_5 [i_0 - 1])))))))));
                    arr_27 [i_0] [i_1] = ((/* implicit */signed char) var_1);
                    arr_28 [i_0] |= ((/* implicit */unsigned short) 536870911ULL);
                    arr_29 [i_0] [i_0 - 2] [i_1] [i_6] = ((_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_14 [i_0 - 1] [(_Bool)1] [i_1] [i_0] [i_6 + 4]))));
                }
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 7; i_7 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0 - 2] [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_31 [i_0] [i_1] [i_1] [i_7 - 1])))) ? (((((/* implicit */_Bool) 1871049998531700857ULL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-14)))) : (((/* implicit */int) var_1))));
                    arr_33 [i_7] [i_1] [i_7 - 2] [i_7 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1])))))));
                    var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_7 + 4]))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) (!((_Bool)1)));
                            arr_40 [(unsigned short)2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1] [i_1] [i_9]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 2] [i_0 + 1]))) : (min((var_12), (((/* implicit */long long int) (signed char)-79)))))) > (var_13)));
                            var_27 -= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)215))))), (((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) << (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_16)))))))));
                            arr_41 [i_0] [i_0 + 1] [i_1] [i_8] [(_Bool)1] = ((/* implicit */_Bool) min((arr_32 [i_0] [i_0]), (((((/* implicit */_Bool) arr_36 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_36 [i_0 - 1] [i_0 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 |= ((/* implicit */_Bool) var_17);
    var_29 = ((/* implicit */_Bool) var_9);
}
