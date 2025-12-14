/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162764
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_17))));
                    var_20 = ((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_3 + 1] [i_3] [i_2] [i_1] [17LL] [i_0] = ((((/* implicit */_Bool) (-(var_15)))) ? (min((6301147931871534160ULL), (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_3] [i_1]))) : (1210546338803744372ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2111315591245719732ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)))))));
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                                arr_15 [i_4] [i_3 + 1] [10LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (17956977578087295381ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(arr_10 [i_0]))) : ((-(((/* implicit */int) ((short) (unsigned char)67)))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189)))))))))) ? (min((7404352007774701027ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)51212)), (445920263U)))))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_5] [9U]))));
                    var_25 = ((/* implicit */_Bool) 2561659308U);
                    var_26 = ((/* implicit */_Bool) max((var_26), (((_Bool) (short)13529))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1555549755325741759ULL) << (((arr_1 [i_0]) + (69886741)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)188)) == (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))))) : ((-(var_0)))));
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_8)) ? (10686442292454061840ULL) : (((/* implicit */unsigned long long int) var_14)))) : ((((_Bool)1) ? (14181453078397514851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_29 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [0U] [22ULL] [i_9 + 1] [i_7]))));
                            var_30 = 3817397213U;
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_35 [i_7] [i_7] [i_9] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (16332021798049515910ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_8] [i_9 + 2])))))) ? (((/* implicit */unsigned int) var_14)) : ((~(2477137091U))));
                            var_31 -= ((/* implicit */unsigned int) 13971285431970101583ULL);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            arr_38 [i_9] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 6646076117135364685LL))))), ((-(-365008575)))));
                            arr_39 [i_9] [i_9] [(_Bool)1] [i_10] [i_9] [i_13] [i_9] = ((/* implicit */unsigned int) (_Bool)0);
                            var_32 = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (-1560669511)))))) : (min((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_2))), (((/* implicit */unsigned int) arr_36 [i_7] [i_7] [i_9] [i_7] [i_7]))))));
                        }
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            arr_42 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) max(((-(677522560U))), (((/* implicit */unsigned int) arr_2 [i_9 + 1] [i_9 + 2] [i_9]))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                        var_35 = ((/* implicit */int) -6533493008248239199LL);
                        var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(3621759290U)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_37 [i_7] [2ULL] [i_9 - 2] [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [18ULL] [i_8] [i_9])))))))) : (min((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) var_9))))), (max((var_8), (var_8)))))));
                        var_37 -= ((/* implicit */long long int) arr_19 [i_10] [i_9] [i_8]);
                    }
                } 
            } 
        } 
    }
    var_38 += ((/* implicit */_Bool) (~(((unsigned int) (-(((/* implicit */int) var_12)))))));
}
