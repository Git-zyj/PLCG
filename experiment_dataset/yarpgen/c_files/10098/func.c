/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10098
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = -1816212746393752525LL;
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* LoopSeq 4 */
    for (short i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */short) (-(1151761905U)));
        arr_8 [i_1] &= ((/* implicit */unsigned char) ((((unsigned long long int) arr_6 [i_1 + 1] [i_1 + 2])) >> ((((((!(((/* implicit */_Bool) 9333079174201679322ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_1]), ((short)32765))))) : (arr_6 [i_1] [i_1 - 1]))) - (17083133550212661369ULL)))));
    }
    for (short i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 + 2])))), (((/* implicit */int) ((short) arr_10 [i_2 + 2])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_15 [i_2 - 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)23330))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_18 |= ((short) ((_Bool) arr_10 [i_2]));
                        arr_23 [i_3] = ((/* implicit */_Bool) 1816212746393752516LL);
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_5 + 2])) && (((/* implicit */_Bool) (unsigned short)23308)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_4 + 2]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((15428242840099960542ULL) % (((/* implicit */unsigned long long int) 3143205384U))))));
                        arr_24 [i_3] [i_3] [i_3] = arr_4 [i_2];
                    }
                } 
            } 
            arr_25 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_17 [i_2 + 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 1])))));
        }
        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_2 + 1]))))) >> (((arr_13 [i_6] [i_6]) + (1199757910528947042LL)))))))))));
            var_21 = ((/* implicit */long long int) (((+(((/* implicit */int) max((arr_19 [i_2] [i_2] [i_2 - 1]), ((unsigned short)43215)))))) & (((/* implicit */int) arr_4 [i_2 + 2]))));
        }
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32762)) - (((/* implicit */int) (unsigned short)23327))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1151761885U)))) : ((-(15715134055342709152ULL)))))) ? ((~(((((/* implicit */_Bool) arr_26 [i_2] [i_7] [i_7])) ? (876622030) : (((/* implicit */int) (unsigned short)65529)))))) : (((/* implicit */int) arr_10 [i_2]))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (unsigned short)29019)), (((arr_21 [i_7] [i_7]) << (((/* implicit */int) (_Bool)1)))))), (((unsigned int) arr_27 [i_7])))))));
            arr_31 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_7])))) >> (((((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2])) - (55613)))))) ? ((-(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((arr_14 [i_7] [i_7] [i_7]) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2 - 1])))))), (arr_9 [i_2 + 1] [i_7]))))));
        }
    }
    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
    {
        arr_36 [i_8] [i_8 + 2] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(4028490058U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [i_8])), (arr_34 [i_8 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_35 [i_8 + 1]), (((/* implicit */unsigned short) (unsigned char)129)))))) : (arr_34 [i_8 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((4858497460397083976LL) % (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8 + 1]))))) > (((/* implicit */long long int) max((3143205402U), (((/* implicit */unsigned int) arr_33 [i_8])))))))))));
        /* LoopSeq 3 */
        for (int i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) max((arr_38 [i_8 + 1]), (((/* implicit */unsigned int) arr_37 [i_9] [i_8 - 1] [i_9]))))))));
            arr_40 [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((_Bool) max((arr_33 [i_8 - 1]), ((short)32744))))), (((unsigned char) (+(((/* implicit */int) (short)-28577)))))));
            var_26 = ((/* implicit */short) arr_32 [i_8 - 3]);
        }
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            arr_43 [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */_Bool) arr_38 [i_8 - 2])) ? (((/* implicit */int) arr_41 [i_10] [i_10])) : (((/* implicit */int) arr_41 [i_10] [i_10 - 1])))))))));
            arr_44 [i_10] [i_10] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_41 [i_10] [i_8 + 2])) >> (((((/* implicit */int) arr_35 [i_8])) - (41120))))) ^ (((/* implicit */int) max(((unsigned short)30053), (((/* implicit */unsigned short) arr_37 [i_10 + 1] [i_10] [i_10])))))))) / (max((min((((/* implicit */unsigned int) (short)-75)), (arr_38 [i_8]))), ((-(arr_38 [i_10 + 1])))))));
        }
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
            arr_48 [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)32733)), (arr_47 [i_8 - 3])))), ((~(3453382759U)))));
        }
    }
    for (short i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        var_28 = min((1439575365), ((~(((/* implicit */int) arr_33 [i_12])))));
        arr_51 [i_12] &= ((/* implicit */short) ((unsigned short) ((long long int) ((short) arr_33 [i_12]))));
        var_29 = ((/* implicit */unsigned int) arr_35 [i_12]);
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                {
                    arr_63 [i_14] [i_14] = ((/* implicit */unsigned short) ((((3453382743U) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_14] [i_14]))))))) & (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_14 - 2]))))), (arr_52 [i_13] [i_15])))));
                    var_30 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-20604))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((long long int) var_17));
    var_32 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), ((unsigned short)29008));
}
