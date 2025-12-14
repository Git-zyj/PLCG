/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127287
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) var_12);
                        var_16 *= ((/* implicit */short) ((arr_1 [i_0]) - (arr_1 [i_0])));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [6] [i_1] [i_2])) ? (arr_9 [i_0] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27398)) && ((_Bool)1)))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_3))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_2] [i_0])))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])) : ((+(1479361424579158925ULL)))));
            var_22 = ((/* implicit */short) ((long long int) arr_12 [i_0] [i_0]));
            var_23 = ((/* implicit */unsigned short) ((_Bool) -2447746987872547489LL));
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_24 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_11) : (((/* implicit */int) (signed char)-57)));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1380309288U)) ? (((((arr_10 [i_5] [i_5] [i_5]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_26 = ((/* implicit */int) ((unsigned short) var_12));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_7 - 1]))));
                    var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_0] [i_0])) == (((/* implicit */int) var_6)))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (unsigned char)161))));
                    var_30 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                    arr_30 [i_0] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 492717768)) ? (arr_19 [i_0] [i_5] [i_8] [i_8 + 1]) : (((/* implicit */long long int) var_2))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 6; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (signed char)75);
                        var_32 = ((/* implicit */_Bool) var_4);
                        var_33 = ((((arr_10 [i_8 + 1] [i_9 + 1] [i_10]) + (9223372036854775807LL))) << (((((arr_10 [i_10 - 1] [i_5] [i_5]) + (3123940804972207145LL))) - (28LL))));
                    }
                    for (signed char i_11 = 2; i_11 < 8; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((signed char) var_9));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_9 + 2] [i_11 + 2] [i_8 + 1] [i_9 - 1]))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_9 - 2] [i_11 + 2] [i_8] [i_11 + 2] [(short)0] [(_Bool)0] [i_0])) & (((/* implicit */int) arr_33 [i_9 + 1] [i_11 + 1] [i_11 + 1] [i_9] [i_11 + 2] [i_11 - 2] [i_5]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((var_11) == (((/* implicit */int) ((-2447746987872547497LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (arr_1 [i_12])))) ? (((/* implicit */int) arr_29 [i_8] [i_9 + 2] [i_8] [i_8 + 1])) : (((/* implicit */int) arr_35 [i_12] [i_8 + 1] [i_12]))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8 + 1]))) + (arr_10 [i_0] [i_8 + 1] [i_8 + 1])));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-57)) ? ((~(var_12))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_8 + 1] [i_9] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_34 [i_0] [0U] [i_8 + 1] [i_9] [i_12]))))));
                    }
                    arr_37 [i_0] [i_5] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_36 [i_9] [i_9 + 2] [i_5] [i_9 - 1] [i_9 + 2] [i_9 - 3]));
                }
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_8 + 1])) ? (((/* implicit */int) arr_14 [i_8 + 1])) : (((/* implicit */int) arr_14 [i_8 + 1]))));
                    arr_40 [i_0] [i_13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_33 [i_0] [i_0] [(short)9] [i_8 + 1] [i_0] [i_13] [9]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (3052111448U)));
                    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */int) var_10)))))) : ((-(arr_3 [i_13] [i_5])))));
                }
                var_44 = ((/* implicit */int) arr_31 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [(unsigned short)1] [i_8] [i_8]);
            }
            var_45 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)20860))));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) arr_24 [i_15] [i_14] [i_5] [i_0]);
                        var_47 = ((/* implicit */unsigned short) arr_25 [i_0] [i_5]);
                        var_48 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (arr_27 [i_5])));
                    }
                } 
            } 
            var_49 *= ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])));
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            var_50 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [(short)0] [i_16 + 1] [i_0] [i_16 + 1])))))));
            var_51 = ((/* implicit */_Bool) ((long long int) arr_28 [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_16] [(_Bool)1]));
            var_52 = ((/* implicit */unsigned short) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_16] [i_0] [i_16])))));
        }
    }
    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((arr_1 [i_17]) / (6412070605554725867LL))) > (((/* implicit */long long int) 1072571365)))))));
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_17])) ? (((((/* implicit */_Bool) (short)15956)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)65417)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)66))))))) ? ((-((-(((/* implicit */int) (unsigned short)65151)))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_55 |= ((/* implicit */unsigned long long int) var_0);
    var_56 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4))))))));
}
