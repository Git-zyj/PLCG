/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146736
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
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_10)))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65535)), (var_1)))) ^ (((((/* implicit */_Bool) 15002827315665973992ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((var_5) << (((((var_3) + (3489328138498330158LL))) - (16LL)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || ((_Bool)1))))));
                    var_19 = var_7;
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (var_13) : (var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)13)))) : (var_9)));
                }
                var_21 = ((/* implicit */int) ((unsigned int) var_8));
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_15 [i_0 - 1] [i_1] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((var_1) - (2098877119)))));
                    arr_16 [i_4] [i_2 + 1] [i_2] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) ((unsigned short) (signed char)4)))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) (unsigned short)57262);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)202))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */int) (signed char)0)))))));
                    arr_19 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    arr_24 [i_0 - 1] [i_0 + 1] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(1686567262)));
                    var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */short) (_Bool)1);
                        var_26 += ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) * (var_10)));
                    }
                    arr_27 [i_0 - 2] [i_0] [i_2] [i_0 + 1] = ((((/* implicit */long long int) ((var_8) / (((/* implicit */int) var_15))))) / (var_5));
                    var_28 -= ((/* implicit */short) var_10);
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((int) var_15)))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
            {
                arr_31 [i_8 + 2] [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) var_12)) : (var_3)));
                var_30 = ((/* implicit */_Bool) (((_Bool)0) ? (144110790029344768LL) : (-8527978313320917675LL)));
                var_31 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)0))));
                var_32 = (+(-2137962767));
                arr_32 [i_8] = (unsigned char)185;
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1173106942U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_42 [i_0 - 1] [i_9 - 1] [i_0] [i_11] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (_Bool)0))));
                        arr_43 [i_1] [i_9] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179852800ULL)) ? (((/* implicit */int) (unsigned short)53417)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_9)) != (var_16)))) : (((var_13) & (((/* implicit */int) (short)13313)))));
                    }
                    for (unsigned int i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        arr_48 [i_9] [i_1] [i_9] [i_10] [i_12 - 2] = ((/* implicit */signed char) ((unsigned char) var_2));
                        arr_49 [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_3);
                        arr_50 [i_0] [i_1] [i_9] [i_12 - 3] [i_12 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 266934555U)) ? (((/* implicit */int) (_Bool)1)) : (var_8)));
                        arr_51 [i_9] [i_9] [i_12] = ((/* implicit */long long int) var_14);
                    }
                    arr_52 [i_1] [i_1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-13309)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)17438)))) * (((/* implicit */int) ((unsigned char) var_6)))));
                }
                arr_53 [i_9] [i_9] = (((~(var_2))) - ((((_Bool)1) ? (var_13) : (((/* implicit */int) var_4)))));
                arr_54 [i_9] [i_1] [i_1] [i_9 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)));
            }
            var_34 = ((/* implicit */short) (_Bool)1);
            arr_55 [i_0 + 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) var_3))));
            arr_56 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) (+(18446744056529698815ULL)));
        }
        arr_57 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((signed char) (unsigned short)57262)))))), ((-(((((/* implicit */_Bool) var_9)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))))));
    }
    var_35 = var_14;
    var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_13))))));
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (var_10)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_5)))) : (17675153555757175949ULL)));
}
