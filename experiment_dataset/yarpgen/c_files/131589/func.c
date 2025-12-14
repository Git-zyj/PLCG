/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131589
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)143))));
        var_20 = ((/* implicit */signed char) min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) / ((-(arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 -= ((/* implicit */unsigned char) max((arr_5 [i_2] [i_2]), (((/* implicit */long long int) arr_6 [i_1]))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((int) (+((+(var_10))))));
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_2])))), (arr_12 [i_1] [i_2] [i_2] [i_3 + 4])))) || (((/* implicit */_Bool) (unsigned short)29956))));
            }
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 4] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_4 + 4] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_10 [i_4 + 4] [i_4 - 1] [i_4]))));
                arr_17 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15584)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_10 [i_4 + 4] [i_2] [i_4 + 4]))));
                arr_18 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)100))));
            }
            arr_19 [i_1] [i_2] = var_8;
        }
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_26 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_11 [i_6] [i_5] [i_5] [i_6])))) & ((+(((/* implicit */int) (short)-14719)))))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_8))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_5 + 2])), ((signed char)73)))))))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_5 + 3] [i_5])) <= (((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 1] [i_5 - 2]))))) < (((/* implicit */int) ((short) max(((unsigned short)35579), (((/* implicit */unsigned short) (short)-11807)))))))))));
            }
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-11807))));
            arr_31 [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1]);
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_43 [i_1] [i_9] [i_9] [i_10] [i_11] = ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */int) (unsigned short)65526)) != (((/* implicit */int) (short)-11814))))))) <= (((/* implicit */int) arr_39 [i_1] [i_1] [i_11] [i_10] [i_11])));
                            arr_44 [i_1] [i_8] [i_9] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) (signed char)32);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */_Bool) var_19);
        }
        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_1] [i_1] [i_1]), (arr_5 [i_1] [i_1])))) ? (((((/* implicit */_Bool) 1928699922051888367LL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)202)) / (arr_14 [i_1] [i_1] [i_1]))))));
        arr_45 [i_1] [i_1] |= ((/* implicit */short) var_7);
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? ((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11808))) : (1928699922051888370LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)61)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_4))));
            /* LoopNest 2 */
            for (long long int i_13 = 2; i_13 < 19; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    {
                        arr_52 [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_12] [i_13 - 1] [i_12]);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) <= ((+(((/* implicit */int) (unsigned short)4789))))));
                        arr_53 [i_12] [i_14] = arr_7 [i_1] [i_12] [i_13];
                    }
                } 
            } 
            arr_54 [i_1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_1] [i_12] [i_1] [i_12] [i_12] [i_12] [i_1])) << (((((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_12] [i_1] [i_1] [i_12])) - (18324)))));
        }
        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
        {
            var_31 -= ((/* implicit */_Bool) max(((short)11807), ((short)22000)));
            var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9359359744020770842ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13118523401645386735ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned short)22944)))))));
            arr_58 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((int) arr_40 [i_1] [i_15] [i_15] [i_15] [i_15] [i_1] [i_15]))));
        }
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 20; i_16 += 4) 
    {
        arr_62 [i_16 - 2] [i_16] = ((/* implicit */int) ((_Bool) ((9359359744020770842ULL) + (5110745483401439650ULL))));
        /* LoopNest 2 */
        for (signed char i_17 = 1; i_17 < 19; i_17 += 4) 
        {
            for (short i_18 = 1; i_18 < 19; i_18 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned short) arr_67 [i_16] [i_16 - 1] [i_16]);
                    var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) << (((((/* implicit */int) (signed char)79)) - (74)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_18)) : (arr_66 [i_16 + 1] [i_17] [i_16 + 1]))) : (((/* implicit */unsigned long long int) var_19))));
                    var_35 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65530)))))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */short) var_19);
    var_37 = ((/* implicit */unsigned int) ((-318331407) + (((/* implicit */int) (signed char)-112))));
}
