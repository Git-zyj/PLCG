/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158335
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_12 -= ((/* implicit */unsigned int) var_6);
            var_13 = ((/* implicit */unsigned short) ((unsigned int) min((-2155441652715942886LL), ((+(arr_2 [i_1] [i_0 + 2]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) (((-(3603696264892273745LL))) + (((/* implicit */long long int) 1675312948))));
            arr_10 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 3])) + (((/* implicit */int) arr_1 [i_0 + 3]))));
            var_15 += ((/* implicit */unsigned int) 133143986176LL);
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_24 [i_0 + 1] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) var_0);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) min((1LL), (((/* implicit */long long int) var_4)))))) % (min((6798214029396044541LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) >= (11LL))))))));
                        }
                    } 
                } 
                arr_25 [i_0] [2U] [i_4] &= ((/* implicit */unsigned short) 1LL);
                arr_26 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)230))));
                var_17 = 492313631U;
            }
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_29 [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) arr_17 [i_3] [i_0 + 2] [i_3] [(unsigned short)9]);
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_33 [i_0] [i_3] [i_7] [i_3] = ((/* implicit */short) min((2147483647), (((/* implicit */int) (unsigned short)63827))));
                    var_18 &= ((/* implicit */_Bool) -10LL);
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_19 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-1)), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)58))) + (-27LL)))) - (((8589934591ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29357)))))))));
                var_20 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-59)) ? (11446934485083588094ULL) : (((/* implicit */unsigned long long int) 930378039U)))) < (((/* implicit */unsigned long long int) arr_4 [6U] [i_3] [i_9]))));
                var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [i_9]))) < (2859653427U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9]))) : (((arr_19 [i_0] [i_0 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1])))))));
            }
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((-10LL) > (1975827112297948198LL))))));
                var_23 *= ((/* implicit */short) ((min((((/* implicit */unsigned int) ((3364589279U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))), (1807591U))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_27 [i_0 - 1])))))));
                arr_40 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_23 [i_10] [0ULL] [(_Bool)1] [i_0] [i_3] [i_0] [i_0])))))) + (((unsigned int) 3248318711U)))) < (min((((2859653427U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35989))))), (1435313869U)))));
            }
        }
        arr_41 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1709)) < (((/* implicit */int) arr_27 [i_0 - 1]))))) + (((/* implicit */int) min(((unsigned short)35989), ((unsigned short)60422))))));
        arr_42 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) ^ (((((((/* implicit */int) (unsigned short)29546)) << (((((/* implicit */int) arr_9 [i_0])) - (2595))))) & (((((((/* implicit */int) arr_38 [i_0] [(unsigned char)4])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            arr_45 [i_11] [i_0] |= (unsigned short)5130;
            var_24 = ((/* implicit */unsigned char) arr_14 [i_11] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                arr_50 [1ULL] [i_11] [1ULL] [1ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)5123)), (arr_47 [i_11] [(_Bool)1] [(_Bool)1] [i_11])));
                var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_12])) * (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)35596)), (var_2)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))) : (((((/* implicit */int) var_3)) >> (((-1805951368465033139LL) + (1805951368465033143LL)))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    {
                        var_26 &= ((/* implicit */unsigned char) ((unsigned short) 1058867345873366117LL));
                        arr_56 [i_13] [i_0] |= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (signed char)85)) & (((/* implicit */int) arr_15 [i_0 + 3] [i_0 + 1] [i_0] [i_0])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_15 = 1; i_15 < 8; i_15 += 2) 
                        {
                            var_27 *= ((short) arr_53 [10] [i_13] [(unsigned char)5] [(unsigned char)5] [i_15 + 1] [i_15]);
                            var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (unsigned char)208))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            var_29 += ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28573))));
                            arr_62 [i_16 - 1] [i_14] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_14] [i_14] [i_13]);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_17 = 1; i_17 < 9; i_17 += 4) 
        {
            var_30 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) (_Bool)1)), ((unsigned short)18735))))) == (((min((20U), (((/* implicit */unsigned int) (short)28593)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)69)) ^ (((/* implicit */int) (unsigned short)65535)))))))));
            arr_66 [i_0] [i_17] [i_17] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_17] [i_17]);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min(((unsigned short)16383), (((/* implicit */unsigned short) (short)20060)))), (((/* implicit */unsigned short) (short)28593))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 + 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-96)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned char)3))))) : (((unsigned int) (_Bool)1))))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)69))))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65535)))))))) : (min((((/* implicit */long long int) (unsigned short)0)), (arr_54 [i_0] [(unsigned short)5] [i_0 + 2] [i_17 + 2])))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_68 [i_0] [i_18] [i_18])) - ((-(var_1))))) + (((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_0] [i_18] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_61 [i_0] [i_18] [i_18] [i_18] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))))))))))));
            var_34 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)5097)))) ^ (((/* implicit */int) (unsigned short)65535))));
        }
    }
    var_35 = var_5;
}
