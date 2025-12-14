/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12070
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [3ULL] [i_1] = var_10;
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_2);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((_Bool) (-(-5779614292556543517LL))));
                        arr_19 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_12));
                        arr_20 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_9);
                    }
                    var_15 = ((/* implicit */signed char) (((-(arr_17 [i_0] [i_1] [i_2 - 2] [i_3]))) >= (((/* implicit */unsigned long long int) arr_0 [(short)11]))));
                    var_16 = ((/* implicit */int) 2536142859947405439ULL);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_17 = 3746970552091742609LL;
                        arr_24 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_22 [i_0] [i_1] [i_1] [i_2 + 1] [5ULL] [i_2 + 1]), (((/* implicit */int) (unsigned short)48526))))) && (((/* implicit */_Bool) var_0))))))));
                        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_0] [i_2] [i_0]))))) != (var_2))))));
                        var_19 &= ((/* implicit */signed char) (-(var_3)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-12747)) ? (5779614292556543521LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_3 - 1])) || (((/* implicit */_Bool) 5779614292556543517LL))));
                        arr_28 [i_0] [i_3] [i_2] [12] [i_2] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_2] [i_1] [(signed char)1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))));
                    }
                }
                for (int i_7 = 4; i_7 < 17; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        arr_33 [i_0] [i_0] [i_8] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1899492135994273174ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (0LL)));
                        var_22 = -569206185;
                        arr_34 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) 1520282743);
                    }
                    arr_35 [i_0] [i_0] [i_2] [i_2] = var_3;
                }
                arr_36 [i_2] [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) -1081189591)), (var_5))));
            }
        }
        /* LoopSeq 2 */
        for (signed char i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
        {
            arr_39 [i_9] = ((/* implicit */signed char) ((((((7625418606448597535ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((arr_12 [i_9] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_1 [i_0] [i_9 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-42)), (-4799062754996055121LL))) == (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))) : (min(((-(0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
            var_23 = ((/* implicit */unsigned short) 5779614292556543517LL);
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
        {
            arr_43 [i_10] [i_10] [i_0] = ((/* implicit */_Bool) ((int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
            arr_44 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_18 [i_10] [i_10 + 1] [i_0])))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99)))))));
            var_24 &= ((/* implicit */unsigned char) (signed char)(-127 - 1));
        }
    }
    var_25 = ((/* implicit */unsigned long long int) ((((long long int) 5779614292556543537LL)) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
}
