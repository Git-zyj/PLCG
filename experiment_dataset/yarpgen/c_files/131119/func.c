/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131119
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (!((!((_Bool)0)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2]))))) ? (var_8) : (((/* implicit */unsigned int) (+(var_10)))))))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)237))))) > ((~(var_12)))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_14);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~((-(((/* implicit */int) var_1)))))))));
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1 + 1] [i_0 - 2])) != (((/* implicit */int) arr_8 [i_1 + 4] [i_0 + 4]))));
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (arr_3 [i_0])))));
                }
                for (unsigned char i_4 = 4; i_4 < 12; i_4 += 2) 
                {
                    var_22 &= ((/* implicit */_Bool) ((var_14) << ((+(((/* implicit */int) var_5))))));
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_3);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_15) > (((/* implicit */long long int) arr_2 [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [9LL])))))));
                    arr_16 [i_4 - 3] [i_2] [i_2] [i_2] [(signed char)12] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [12U] [i_4 + 1] [i_4]))));
                    var_24 += ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2]);
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 4] [i_0 - 3]))) <= (((arr_9 [i_2] [i_1] [i_2] [i_1]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [2])))))));
                    arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))));
                }
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1 + 2] [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 4])))))));
                    var_27 = ((((/* implicit */int) var_13)) > (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_6] [(unsigned char)2])) != (((/* implicit */int) var_6))))));
                }
                var_28 = ((/* implicit */int) var_1);
            }
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            var_29 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_1 [i_7])) - (21957))))) >> (((((/* implicit */int) var_0)) + (28)))));
            arr_26 [i_0 + 3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [(signed char)1] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
            var_30 = ((/* implicit */unsigned long long int) arr_0 [i_7 - 1] [i_7 - 1]);
            var_31 = ((/* implicit */_Bool) (~(((arr_4 [i_7]) & (((/* implicit */unsigned int) arr_3 [i_0]))))));
        }
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4002251853112461814LL)))) ? (((/* implicit */long long int) ((arr_18 [(unsigned short)12] [i_0] [i_0] [(signed char)0] [i_0] [(unsigned short)12]) << (((((/* implicit */int) var_9)) - (38834)))))) : ((~(var_7)))));
        var_32 = ((/* implicit */signed char) min((var_32), (var_16)));
    }
    for (unsigned int i_8 = 3; i_8 < 23; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_9 = 3; i_9 < 23; i_9 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (max((max((var_6), (arr_30 [i_8]))), (((/* implicit */unsigned char) ((arr_32 [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
            var_34 = ((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_32 [i_9]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_8] [i_9]))))))), (((/* implicit */unsigned long long int) var_4))));
            var_35 *= ((/* implicit */signed char) var_10);
        }
        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) /* same iter space */
        {
            arr_36 [i_8] = ((/* implicit */signed char) var_5);
            var_36 = (i_8 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */long long int) ((var_12) >> (((((/* implicit */int) min((arr_29 [i_8] [i_10]), (var_11)))) + (96)))))) != (min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_11)), (arr_31 [(unsigned char)19] [i_10])))), (arr_33 [8U] [8U])))))) : (((/* implicit */long long int) ((((/* implicit */long long int) ((var_12) >> (((((((/* implicit */int) min((arr_29 [i_8] [i_10]), (var_11)))) + (96))) + (44)))))) != (min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_11)), (arr_31 [(unsigned char)19] [i_10])))), (arr_33 [8U] [8U]))))));
        }
        for (unsigned char i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_8] [i_11 - 2])) | (((/* implicit */int) ((arr_37 [i_8] [i_8] [i_8 - 2]) <= (arr_37 [i_8] [i_8] [i_8 - 2]))))));
            arr_39 [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_8] [i_11] [i_8])))))) >= (((arr_35 [i_8] [i_8] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))))), ((+(((4162155090U) >> (((1288237227U) - (1288237221U)))))))));
            arr_40 [i_8] [i_11] = ((/* implicit */signed char) max((((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_30 [i_8])), (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8] [i_11] [i_11])))))), (min((arr_33 [i_8] [i_8]), (min((((/* implicit */long long int) arr_29 [i_8] [i_8 + 1])), (var_15)))))));
        }
        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49152))));
        var_39 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_3))))) != (((/* implicit */int) arr_30 [i_8 - 2]))))), (((max((((/* implicit */unsigned long long int) arr_38 [i_8 - 3] [i_8] [i_8])), (arr_28 [i_8 + 1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_38 [i_8] [i_8] [i_8]))))))));
    }
    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
    {
        arr_44 [2U] = ((/* implicit */unsigned int) arr_42 [i_12 + 1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_3))));
            var_41 = ((/* implicit */_Bool) arr_30 [i_12]);
        }
    }
    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) % (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))) + (min((((/* implicit */unsigned long long int) arr_50 [i_14] [i_14] [i_15])), (arr_32 [i_14]))))) : (((/* implicit */unsigned long long int) var_15))));
            /* LoopSeq 4 */
            for (long long int i_16 = 4; i_16 < 23; i_16 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) / (min((((/* implicit */long long int) arr_46 [i_14] [i_15] [i_16])), (var_4))))) >> ((((+(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (7330341409477259783LL)))));
                arr_56 [i_14] [i_15] [i_14] [i_14] = (i_14 % 2 == zero) ? (((/* implicit */_Bool) ((max((((/* implicit */long long int) var_16)), (arr_48 [i_14] [i_14]))) << (((((((/* implicit */int) arr_29 [i_14] [i_15])) + (100))) - (18)))))) : (((/* implicit */_Bool) ((max((((/* implicit */long long int) var_16)), (arr_48 [i_14] [i_14]))) << (((((((((((/* implicit */int) arr_29 [i_14] [i_15])) + (100))) - (18))) + (47))) - (1))))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    var_44 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_12)), (arr_32 [i_14])));
                    var_45 += ((/* implicit */int) min((((max((((/* implicit */long long int) var_0)), (var_15))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_34 [i_14 - 1] [i_14 - 1] [i_14 - 1])) <= (var_7))))))), (((/* implicit */long long int) arr_49 [i_16]))));
                    arr_59 [i_16] [i_14] [i_14] = var_8;
                    var_46 *= ((/* implicit */unsigned long long int) min((min((min((((/* implicit */long long int) var_8)), (arr_33 [i_14] [i_14]))), (((/* implicit */long long int) (!(arr_41 [i_17])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) arr_46 [i_14] [i_14] [i_14])), (arr_34 [i_14] [i_15] [i_16]))))))));
                }
                for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    var_47 = ((/* implicit */_Bool) arr_58 [i_14] [i_14] [i_16] [i_18]);
                    arr_63 [i_18] [(_Bool)1] [i_18] [i_14] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 2155588587114364003LL)) ? (4002251853112461792LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (max((var_15), (((/* implicit */long long int) var_10)))))), (var_15)));
                }
            }
            for (long long int i_19 = 4; i_19 < 23; i_19 += 4) /* same iter space */
            {
                var_48 -= ((/* implicit */unsigned int) (+(5947414109525700494LL)));
                var_49 ^= ((/* implicit */long long int) (~((-(arr_58 [i_14] [i_19] [i_14] [(signed char)6])))));
            }
            for (long long int i_20 = 4; i_20 < 23; i_20 += 4) /* same iter space */
            {
                arr_69 [i_14] [i_14] = ((/* implicit */unsigned short) min((var_14), (((((/* implicit */_Bool) arr_28 [i_14])) ? (max((((/* implicit */unsigned int) var_16)), (arr_43 [i_20] [i_15]))) : (((var_14) << (((((/* implicit */int) var_9)) - (38819)))))))));
                var_50 *= ((/* implicit */unsigned short) var_2);
            }
            for (unsigned char i_21 = 2; i_21 < 23; i_21 += 1) 
            {
                var_51 = (-(min((min((var_15), (((/* implicit */long long int) var_0)))), (max((arr_48 [i_14] [(signed char)6]), (((/* implicit */long long int) arr_57 [i_14])))))));
                arr_74 [i_21] [i_14] [i_14] [i_14] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_21])) ? (var_7) : (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_65 [i_14] [i_14] [(_Bool)1] [i_14])))))))));
            }
            var_52 &= ((arr_68 [20LL]) != (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        }
        var_53 = ((/* implicit */signed char) min((arr_28 [i_14]), (((/* implicit */unsigned long long int) max((arr_48 [i_14] [i_14 - 1]), (((/* implicit */long long int) arr_38 [i_14] [i_14] [i_14])))))));
    }
    var_54 ^= ((/* implicit */unsigned int) (+(4002251853112461817LL)));
    var_55 &= ((/* implicit */unsigned int) (~((~(max((((/* implicit */long long int) var_12)), (var_15)))))));
}
