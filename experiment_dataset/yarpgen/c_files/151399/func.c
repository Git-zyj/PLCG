/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151399
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
    var_12 ^= ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (685755788895103812ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1]))));
        var_13 = ((/* implicit */long long int) max((min((((((/* implicit */unsigned long long int) 4117279807U)) ^ (17760988284814447819ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1]), ((short)-19122)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-26667)) && (((/* implicit */_Bool) var_9)))))) + (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_14 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) (+(arr_6 [i_1]))))), (arr_5 [i_1])));
            var_15 = ((/* implicit */signed char) (unsigned short)20805);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)174)))))))) * (((unsigned long long int) ((unsigned long long int) arr_0 [i_0] [i_0])))));
            var_16 = ((/* implicit */short) arr_4 [i_0 - 2] [i_2] [i_2]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_17 [i_0 - 1] [i_3] [i_3] [i_3] |= ((/* implicit */long long int) var_3);
                arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((arr_6 [i_0 - 2]) & (((/* implicit */long long int) ((/* implicit */int) (short)19141)))))));
                arr_19 [i_0] [2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((((/* implicit */_Bool) (short)32762)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) != (((/* implicit */int) var_5))))) * (((/* implicit */int) (signed char)-115)))))));
                var_17 *= ((/* implicit */short) var_8);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    arr_25 [i_0] = ((/* implicit */int) ((signed char) ((18446744073709551611ULL) ^ (685755788895103825ULL))));
                    arr_26 [i_0 - 2] [i_0] [i_0 - 2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_5])) ? (((24ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32755)))))))));
                    var_18 += ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [0LL] [i_5]))))))));
                }
                arr_27 [i_0] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_16 [i_0 - 2] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 1]))))));
            }
            for (unsigned char i_7 = 3; i_7 < 17; i_7 += 4) 
            {
                arr_30 [i_3] = ((/* implicit */_Bool) (~((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65523)) || ((_Bool)1))))))));
                arr_31 [i_0] = arr_5 [i_0];
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                var_19 = ((/* implicit */_Bool) arr_23 [i_8 + 1] [i_3] [i_0] [i_0 + 1]);
                var_20 = (~(((/* implicit */int) arr_8 [i_0] [i_3])));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) var_9)), (17760988284814447830ULL)))))));
            var_22 = ((/* implicit */unsigned char) arr_24 [i_0] [(unsigned short)4]);
            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-19135)) + (((/* implicit */int) arr_22 [i_0] [i_9] [i_9] [i_0]))))) > ((+(((unsigned int) arr_5 [i_0]))))));
            var_24 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (var_2) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (arr_6 [i_0 + 1])))));
            arr_39 [i_0] = ((/* implicit */signed char) arr_38 [i_9] [i_0]);
        }
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-25956)), (max((((/* implicit */unsigned long long int) (unsigned short)1)), (685755788895103796ULL)))));
        arr_40 [i_0] = var_6;
    }
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_43 [i_10] = ((/* implicit */_Bool) (+(var_2)));
        /* LoopSeq 1 */
        for (signed char i_11 = 3; i_11 < 19; i_11 += 3) 
        {
            arr_47 [i_11] [i_10] = ((/* implicit */long long int) ((((_Bool) arr_45 [i_11 - 3])) ? (((/* implicit */int) (!(arr_42 [i_11 - 3] [i_11 - 2])))) : (((/* implicit */int) ((arr_42 [i_11 + 1] [i_11 - 3]) || (((/* implicit */_Bool) 9019767243137148330ULL)))))));
            /* LoopSeq 2 */
            for (short i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                arr_51 [i_10] [i_10] [i_11 + 1] [i_10] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_49 [i_12] [i_11] [i_11 + 1] [i_11 - 3])) ? (((/* implicit */int) arr_42 [i_11 + 2] [i_12 + 4])) : (arr_45 [i_11 - 3])))));
                var_26 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */int) arr_42 [i_11] [i_11 + 1])) - (((/* implicit */int) var_0))))) * (((/* implicit */unsigned long long int) arr_45 [i_11]))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) arr_44 [i_11 - 1] [(_Bool)1] [i_12 + 4])) ? (((/* implicit */unsigned int) arr_46 [i_11 - 3] [i_11 - 3] [i_12 + 1])) : (arr_50 [i_11 - 2] [i_11 + 1] [i_12 + 2] [i_12]))) ^ (arr_50 [i_11 + 2] [i_11 + 2] [i_12 - 2] [i_12]))))));
                var_28 ^= ((/* implicit */int) ((13U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))));
            }
            for (long long int i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                arr_54 [i_10] [i_11 - 3] [i_11 - 1] [i_13 - 2] = ((/* implicit */signed char) (short)-19118);
                var_29 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 6913491787638775075ULL)) ? (((/* implicit */long long int) var_2)) : (-1LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((-9223372036854775800LL), (((/* implicit */long long int) ((signed char) arr_45 [(_Bool)1])))))) : (((((/* implicit */_Bool) arr_50 [i_10] [i_11] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (max((var_8), (((/* implicit */unsigned long long int) arr_53 [i_10] [i_11] [i_13])))))));
                var_30 = ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
            }
            arr_55 [(signed char)19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_42 [i_10] [i_11]) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)30252)) && ((_Bool)1)))) : ((~(var_10)))))) ? (((/* implicit */unsigned long long int) 812406492U)) : (((unsigned long long int) ((((/* implicit */_Bool) (short)-30241)) ? (177687482U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 12382867040235294276ULL)))))) - (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned char) 685755788895103807ULL)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            arr_60 [i_14] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-29869)))) + ((-(((((/* implicit */int) arr_44 [i_10] [i_10] [i_14])) * (((/* implicit */int) (short)9493))))))));
            var_32 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) min((6913491787638775094ULL), (((/* implicit */unsigned long long int) arr_53 [i_10] [i_10] [i_14]))))) || (((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (short)-28151)))))))));
            var_33 = ((/* implicit */unsigned short) ((unsigned char) 11ULL));
        }
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_15] [i_15] [i_10]))))) | ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_10] [i_15] [i_15])) || (((/* implicit */_Bool) 1117330101U)))))) : (arr_50 [i_10] [i_15] [i_10] [i_15])))));
            arr_64 [i_15] [i_15] = ((/* implicit */_Bool) ((short) arr_53 [i_10] [i_15] [i_10]));
            var_35 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_36 = ((/* implicit */unsigned long long int) ((((arr_56 [i_10] [i_15]) ? (((/* implicit */int) arr_56 [i_10] [i_15])) : (((/* implicit */int) arr_56 [i_10] [i_15])))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)71))) >= (5901097821517091307LL))))));
        }
        arr_65 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_56 [i_10] [i_10])))) ^ ((-(((/* implicit */int) (short)-28153))))));
    }
    for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_71 [i_17] [i_17] = ((/* implicit */unsigned long long int) max(((signed char)16), ((signed char)-54)));
            arr_72 [i_17] [i_17] = ((/* implicit */_Bool) ((unsigned char) arr_12 [i_16] [0LL] [i_17]));
        }
        var_37 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
        var_38 = ((/* implicit */long long int) var_4);
    }
}
