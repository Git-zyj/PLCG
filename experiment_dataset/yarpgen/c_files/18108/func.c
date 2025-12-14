/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18108
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_17);
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */int) arr_1 [i_0])))))))), ((((-(((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [3U]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1]))) / (arr_0 [i_2] [i_2 - 2]))) / (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] = var_9;
                            arr_18 [i_5] [i_3] [i_5] [i_1] [i_5] = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_16)))))) * (((((/* implicit */int) ((arr_0 [i_4] [i_4]) >= (((/* implicit */long long int) arr_3 [i_1] [i_1]))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_2 + 1])) > (((/* implicit */int) arr_9 [i_1] [i_1] [(unsigned char)6] [(unsigned char)6])))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((max((var_13), (arr_13 [i_5] [i_4] [i_3] [i_2] [(_Bool)1]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) > (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_16))))), (arr_10 [i_1]))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_1] [i_2]);
            var_21 = ((/* implicit */_Bool) arr_3 [i_1] [i_2]);
            arr_20 [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) var_17))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_3))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_17)), (arr_5 [i_2 - 1] [i_2 - 1]))))));
        }
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) var_1);
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((var_15) <= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [12ULL] [(_Bool)1] [i_1] [i_1] [i_1])))))) >= (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_11 [i_1] [i_1] [i_6] [i_6]))))))) >= (((/* implicit */int) (!(((var_15) == (((/* implicit */long long int) arr_3 [10U] [i_6 - 1])))))))));
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_1])) || (((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_1]))))), (((((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_1] [i_6] [i_6])) % (((/* implicit */int) var_6))))));
            arr_23 [i_1] = ((/* implicit */unsigned long long int) var_5);
            var_25 = ((/* implicit */signed char) min(((+(max((var_8), (((/* implicit */long long int) var_2)))))), ((~(var_8)))));
        }
        for (int i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            arr_26 [i_1] [i_1] [i_7] = ((/* implicit */signed char) arr_15 [i_7 + 2] [i_7] [i_1] [i_1] [i_7 - 1]);
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) (((~((+(((/* implicit */int) arr_16 [(unsigned char)3] [i_1] [5LL] [i_8] [i_8] [i_8] [i_8])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [(signed char)8] [2U] [i_7] [i_1])))))));
                arr_31 [i_1] [i_7 + 2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (arr_30 [i_1] [i_1])));
                var_27 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((var_1) * (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((arr_3 [i_1] [i_8]) - (3509504127U)))))))), (var_1)))) : (((/* implicit */unsigned long long int) max((((var_1) * (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((((arr_3 [i_1] [i_8]) - (3509504127U))) - (4140231086U)))))))), (var_1))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                arr_34 [i_1] [i_7] [(unsigned short)12] [i_1] = ((/* implicit */signed char) ((var_16) * (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_11 [i_1] [i_1] [i_7] [i_9])))))));
                arr_35 [i_9] [i_9] [i_1] |= ((((/* implicit */int) arr_15 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1])) * (((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 - 1] [i_9] [i_9])));
            }
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_1] [i_7])) > ((-(((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_0))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) (-(arr_36 [i_1] [i_10])));
            var_30 = ((/* implicit */long long int) (((-(arr_2 [i_1]))) ^ (((/* implicit */int) ((var_8) <= (((/* implicit */long long int) arr_2 [1LL])))))));
        }
        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1])) || (((/* implicit */_Bool) arr_30 [i_1] [i_1])))))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_11))))), (min((var_10), (((/* implicit */unsigned long long int) var_11)))))));
        arr_38 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) * (arr_2 [i_1])))) || (((((/* implicit */int) var_12)) >= (((/* implicit */int) var_2))))));
        var_32 = (-(((/* implicit */int) arr_37 [i_1] [i_1] [i_1])));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) min((max((((((/* implicit */long long int) ((/* implicit */int) var_14))) % (arr_29 [i_11] [i_11] [4]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [(unsigned char)0] [i_11] [i_11] [i_11])), (var_7)))))), (((/* implicit */long long int) ((arr_2 [i_11]) >= (arr_2 [i_11]))))));
        var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_9 [i_11] [i_11] [i_11] [i_11]), (arr_9 [i_11] [i_11] [i_11] [i_11]))))));
        var_35 = ((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_11] [i_11] [(signed char)12] [i_11] [i_11]);
        arr_41 [i_11] [13LL] &= ((/* implicit */signed char) (-(var_15)));
    }
    /* LoopSeq 3 */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_36 = ((/* implicit */unsigned long long int) (-(var_16)));
        arr_44 [i_12] = ((/* implicit */_Bool) arr_43 [i_12]);
        var_37 = ((/* implicit */unsigned int) ((arr_43 [i_12]) > (((/* implicit */int) ((max((arr_43 [i_12]), (arr_43 [(unsigned char)5]))) <= (((/* implicit */int) var_9)))))));
    }
    for (int i_13 = 3; i_13 < 23; i_13 += 3) 
    {
        var_38 = ((/* implicit */unsigned int) max((((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) + (var_13))))))), (((((/* implicit */int) arr_45 [i_13])) * (((((/* implicit */int) arr_45 [(unsigned char)13])) >> (((/* implicit */int) arr_45 [i_13]))))))));
        var_39 += ((/* implicit */signed char) var_11);
        var_40 = ((/* implicit */short) max((((((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13 + 2]))) | (var_16))) | (min((((/* implicit */unsigned int) var_9)), (arr_46 [i_13 - 2]))))), (((/* implicit */unsigned int) var_2))));
    }
    for (int i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        arr_49 [i_14] [i_14] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) / (arr_2 [i_14])))))) > (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned char)0])) || (((/* implicit */_Bool) var_8))))), (((arr_46 [16U]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
        arr_50 [10U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_42 [i_14])))))) >= ((((-(arr_0 [(unsigned short)12] [(unsigned short)12]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_43 [i_14])) > (var_7)))))))));
        arr_51 [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */long long int) arr_2 [i_14])) == (var_15))))))));
        var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_43 [i_14])) || (((/* implicit */_Bool) arr_1 [i_14])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_2 [i_14])))), (((var_13) % (((/* implicit */unsigned int) arr_43 [i_14])))))))));
    }
}
