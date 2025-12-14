/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122647
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
    var_17 = ((/* implicit */unsigned int) (((-(((((/* implicit */long long int) var_13)) / (var_2))))) & (((/* implicit */long long int) ((((var_12) + (((/* implicit */int) var_11)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) (~((~(((((/* implicit */long long int) -1480070647)) & (var_6)))))));
            var_19 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((-731613471) != (-325240442))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_20 -= (((~(((((/* implicit */long long int) var_5)) | (var_6))))) << ((((~(((var_9) << (((var_9) - (3653029891314415003LL))))))) + (3653029891314415038LL))));
                var_21 = ((/* implicit */unsigned long long int) var_11);
            }
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(var_2))))));
                            arr_17 [i_0] [i_4] [i_0] &= ((/* implicit */unsigned short) (+(var_13)));
                            arr_18 [i_4] [i_1] [i_0] [i_4] [0ULL] = ((/* implicit */unsigned long long int) (+(var_0)));
                            var_23 = ((/* implicit */unsigned short) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                            var_24 = ((/* implicit */unsigned int) (+((-(var_7)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        arr_23 [i_0] [(unsigned short)4] [i_3] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) var_11);
                        var_26 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    var_27 = ((/* implicit */int) var_7);
                    var_28 = ((/* implicit */long long int) var_15);
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1067037238404534874LL)))))));
                    var_30 = ((/* implicit */long long int) var_15);
                    var_31 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    var_32 = ((/* implicit */unsigned short) var_7);
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) (short)511))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((var_1) + (((/* implicit */long long int) var_13)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) != (var_2)))))));
                        var_34 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-512)) + (2147483647))) << (((3802315741U) - (3802315741U))))) < ((-(((/* implicit */int) var_11))))));
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_12))))));
                        var_36 += ((/* implicit */long long int) var_12);
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_11))));
                        var_38 = var_14;
                        arr_35 [i_9] [i_9] [i_0] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5)))))))))));
                    }
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [1U] = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_5))))) * (var_0)))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 2; i_13 < 7; i_13 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) (((~(877243694U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) != (var_3)))))));
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */int) var_4)) % (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            for (unsigned int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                {
                    var_42 = ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
                    var_43 = ((/* implicit */signed char) var_12);
                    arr_51 [i_0] [8LL] [i_0] [i_15] = ((/* implicit */unsigned long long int) (~((-(var_5)))));
                    var_44 = ((/* implicit */int) var_11);
                }
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned long long int) ((-1109397378) > (((/* implicit */int) (_Bool)1))));
    var_46 = ((/* implicit */unsigned int) ((var_2) << ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_10))))))));
}
