/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156747
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
    var_11 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [10LL] [11ULL] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1652909593213689610ULL)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_3 [(unsigned short)0] [i_1])));
                    arr_10 [(unsigned char)5] [i_0] [i_0] [i_2] = ((/* implicit */int) arr_7 [i_2]);
                    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != ((((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)31603)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_0] [i_0] [6LL] [6LL] [i_4])), (((((/* implicit */int) arr_0 [i_4])) << (((/* implicit */int) (_Bool)1)))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_5 [i_0 + 1] [i_0 + 2]))) - (((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_7 [i_0 + 1]), (arr_7 [i_1])))) >= (((((/* implicit */int) ((-626743835020425156LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * ((-(var_0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_16 += ((/* implicit */long long int) var_7);
        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_5])) - (((/* implicit */int) arr_17 [i_5]))));
        arr_18 [(_Bool)1] [i_5] |= ((/* implicit */_Bool) 3308085276376709683ULL);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_19 = ((/* implicit */_Bool) arr_20 [i_6] [i_6]);
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_7] [i_7] |= ((/* implicit */signed char) (short)-24633);
            var_20 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_6] [i_7]))));
        }
        for (short i_8 = 2; i_8 < 22; i_8 += 1) 
        {
            var_21 = ((/* implicit */int) (unsigned char)30);
            arr_27 [i_8] [i_8] [i_8] = ((/* implicit */short) var_9);
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                arr_30 [i_8] [i_9] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)255))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5))))) | (((/* implicit */int) arr_21 [i_6] [i_8 - 2])))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_34 [i_6] [i_8] [i_6] [i_10] [(unsigned char)12] [i_6] [i_8]))));
                        var_24 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8 - 2] [i_8 - 2]))));
                        arr_36 [i_6] [i_6] [i_9] [i_8] = ((/* implicit */short) var_4);
                    }
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        arr_40 [i_6] [i_8] [i_9] [i_8] [i_12] |= arr_25 [i_6];
                        arr_41 [17LL] [i_8] [i_8] [i_8] [i_12] [i_8 + 1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_9] [i_10] [i_8])) || (((/* implicit */_Bool) 1652909593213689595ULL))))) + ((+(var_0)))));
                    }
                    arr_42 [(signed char)19] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_43 [i_8] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */signed char) var_7);
                    var_25 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2]))));
                }
                var_26 = ((/* implicit */unsigned char) var_6);
                arr_44 [i_6] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [19U] [i_8 - 2] [i_8 - 2] [i_9] [i_8]))));
                var_27 = ((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) var_8))));
            }
        }
        var_28 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42656)) - (((/* implicit */int) (unsigned char)110))))) - ((-(31ULL))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) (unsigned char)170);
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [i_6]))) >= (arr_46 [i_6] [i_13] [i_14])))))))));
                }
            } 
        } 
        var_31 |= ((/* implicit */_Bool) 16793834480495861983ULL);
    }
    /* LoopNest 3 */
    for (unsigned short i_15 = 2; i_15 < 11; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                {
                    arr_57 [i_15] [i_16] [i_17] [6LL] = ((/* implicit */unsigned short) min((min((arr_33 [i_15] [i_15 + 2] [i_15 + 1] [i_15] [(unsigned char)4] [i_16] [i_17]), (arr_33 [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15] [i_17] [i_17] [i_17]))), (arr_33 [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15] [i_16] [i_15])));
                    var_32 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_22 [i_15] [i_17])))))));
                }
            } 
        } 
    } 
}
