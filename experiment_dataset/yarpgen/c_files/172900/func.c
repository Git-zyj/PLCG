/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172900
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
    var_11 ^= ((/* implicit */int) ((long long int) -6592054518760225292LL));
    var_12 = ((/* implicit */unsigned short) min((((max((((/* implicit */long long int) (signed char)61)), (6592054518760225292LL))) % (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (6592054518760225290LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (unsigned char)249);
                        arr_11 [i_1] [i_2] [i_1] = ((/* implicit */short) ((unsigned char) 6592054518760225286LL));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) (-((-(arr_14 [i_0] [i_1] [i_1] [i_3])))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)247))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_4]))));
                        }
                    }
                } 
            } 
        } 
        arr_16 [(short)9] = ((/* implicit */unsigned short) (unsigned char)246);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_16 += (-(((/* implicit */int) arr_18 [i_5])));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) arr_19 [i_6]);
            /* LoopNest 2 */
            for (unsigned int i_7 = 4; i_7 < 20; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)238)))))));
                        arr_31 [i_5] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_26 [i_7 - 3] [i_7 + 1] [i_7 - 4] [i_7 - 3]))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_5] [(unsigned char)15] [i_5] [1ULL])) ? (((/* implicit */int) ((signed char) var_0))) : (((((/* implicit */int) arr_27 [i_5] [i_7] [i_5] [i_7])) * (((/* implicit */int) arr_30 [(unsigned char)2]))))));
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)108);
                    }
                } 
            } 
            arr_33 [i_5] [(unsigned char)11] = ((((/* implicit */_Bool) 0)) ? (0ULL) : (((/* implicit */unsigned long long int) -6592054518760225293LL)));
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 249332256U)) == (arr_19 [i_5]))))) - (((arr_26 [i_6] [i_6] [i_5] [i_5]) << (((6592054518760225291LL) - (6592054518760225269LL)))))));
        }
        arr_34 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 24723369)) || (((/* implicit */_Bool) (unsigned char)249))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((short) 18446744073709551615ULL))));
        var_21 = ((/* implicit */long long int) ((arr_19 [i_9]) <= (arr_29 [i_9] [i_9])));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            for (short i_12 = 4; i_12 < 21; i_12 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)40846))));
                    arr_45 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */long long int) (-(arr_40 [i_12 - 1])));
                    var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_11]))))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 6592054518760225286LL)));
                    arr_46 [(unsigned char)5] [i_11] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)108))))) <= (((((/* implicit */_Bool) var_2)) ? (3556679506578501430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((arr_40 [i_10]) != (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (arr_43 [i_10] [i_10] [i_10] [i_10]))))));
        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_44 [i_10] [6ULL] [i_10] [(short)10])) + (((/* implicit */int) arr_42 [i_10] [i_10])))));
    }
}
