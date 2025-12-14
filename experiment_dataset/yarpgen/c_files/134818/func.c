/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134818
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+((~(67108863ULL)))));
                    var_20 = (unsigned char)198;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)255))))) % ((-(13583288405144382248ULL)))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13583288405144382219ULL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)138)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_5))))))));
                        var_25 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : ((+(max((var_11), (((/* implicit */unsigned long long int) var_17)))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (((unsigned long long int) 17509314180732035873ULL)))))));
                        arr_22 [i_5] [i_4] [i_3] = max((((/* implicit */unsigned long long int) min(((unsigned char)33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))), (((6926961578713136391ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) 6926961578713136417ULL);
                            var_27 = ((((/* implicit */_Bool) 6926961578713136383ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (1452969170389329101ULL));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            var_28 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13284954005462080354ULL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)72))))) && ((!(((/* implicit */_Bool) 10198217647504319707ULL))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_15)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)4)))) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) var_17)) ^ (((/* implicit */int) (unsigned char)98))))));
                            var_30 = (-(14803733019918147431ULL));
                            var_31 = max(((unsigned char)233), ((unsigned char)247));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 10729798483921127489ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
                            arr_31 [i_3] [i_3] [i_10] [i_3] = ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                            arr_32 [i_10] [i_4] [7ULL] = (~(var_1));
                            var_33 = var_15;
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)158)))) : (min((min((15662976113687820652ULL), (((/* implicit */unsigned long long int) (unsigned char)34)))), (18432396423540295615ULL)))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)129))))) ^ (((/* implicit */int) ((unsigned char) (unsigned char)127)))))) && (((/* implicit */_Bool) 7281312955654060844ULL)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_36 |= ((/* implicit */unsigned char) max((11624254292038767764ULL), (min((11519782494996415198ULL), (((/* implicit */unsigned long long int) (unsigned char)252))))));
                            arr_38 [i_4] [i_7] = (unsigned char)149;
                            arr_39 [i_12] [i_4] [i_12] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)124)))));
                        }
                    }
                }
            } 
        } 
    } 
}
