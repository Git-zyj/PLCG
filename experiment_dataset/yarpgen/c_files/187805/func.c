/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187805
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) arr_1 [i_0]);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1]))));
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned char) (short)6629)))));
                            arr_17 [i_5] [i_2] [i_3 - 1] [i_3 - 1] [i_2] [i_1] = (+(var_13));
                            arr_18 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((arr_13 [i_3 - 1] [i_3 - 1] [i_5 - 1] [i_5] [i_3 - 1] [i_2] [i_4]) + (arr_13 [i_3 - 1] [i_2] [i_5 - 1] [i_4] [i_5] [i_3 - 1] [i_3])));
                        }
                    } 
                } 
            } 
            var_18 |= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1])));
            arr_19 [10] |= ((/* implicit */unsigned long long int) 1660669953);
            arr_20 [0] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1])) ? (var_2) : (((/* implicit */long long int) arr_6 [i_1] [i_2 - 1]))));
        }
        for (signed char i_6 = 4; i_6 < 8; i_6 += 4) 
        {
            var_19 -= ((/* implicit */int) var_6);
            arr_23 [i_6] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((signed char) var_8))))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((int) -111388453062601714LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1660669953)))))) : (((((-9223372036854775806LL) + (9223372036854775807LL))) << (((-111388453062601714LL) + (111388453062601757LL)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)0))) % (((int) var_7))));
        arr_27 [i_7] = ((/* implicit */int) var_12);
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_25 [i_7] [i_7]))) * (((/* implicit */int) (short)-6660))));
        arr_29 [i_7] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_7])))) ? (((unsigned long long int) arr_1 [i_7])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_7])) >> (((((/* implicit */int) arr_1 [i_7])) - (238))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((_Bool) arr_30 [i_8]);
        arr_33 [i_8] = ((/* implicit */unsigned char) (-(-1660669966)));
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) ((_Bool) var_4));
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_30 [i_8]))) : (arr_31 [i_8])));
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
    {
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) arr_31 [i_9])) ? (arr_31 [i_9]) : (arr_31 [i_9]))) : (((/* implicit */int) ((_Bool) ((int) var_5))))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_9])) && (((/* implicit */_Bool) arr_37 [i_9]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_30 [i_9])))))))));
            var_23 ^= ((/* implicit */unsigned long long int) arr_31 [i_9]);
        }
        arr_43 [i_9] = ((((/* implicit */int) ((signed char) arr_41 [i_9] [i_9]))) / (((/* implicit */int) ((_Bool) arr_41 [i_9] [i_9]))));
        arr_44 [i_9] = ((/* implicit */_Bool) (-(var_2)));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (-111388453062601738LL)))))) / (((((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */unsigned long long int) var_13)) : (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    var_25 = ((/* implicit */signed char) var_6);
}
