/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138506
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
    var_10 = ((min((var_5), (((/* implicit */unsigned int) ((var_2) % (((/* implicit */int) var_8))))))) * (var_5));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
                    arr_6 [i_0] [15] [i_0] = ((/* implicit */short) (_Bool)1);
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_3)) + (arr_4 [i_0] [i_0 + 1] [i_2 - 1] [i_2]))) != (min((arr_4 [i_0] [i_0 + 1] [i_2 - 1] [i_2]), (arr_4 [i_0] [i_0 + 1] [i_2 - 1] [i_2 + 2]))))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_2 - 2]))))) : (((/* implicit */int) (!(arr_3 [i_0 - 2] [i_0 - 2]))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((536862720), (536862733)));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        arr_14 [i_0] [i_0 + 1] [i_3 + 2] [(unsigned char)6] [(_Bool)1] = ((/* implicit */signed char) var_9);
                        var_15 = ((/* implicit */int) (signed char)8);
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) arr_0 [i_0 - 2] [i_0]))), (max((var_1), (((/* implicit */long long int) var_3))))))) ? (((((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */int) var_7)) : (var_6))) >> (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))))) : (arr_10 [i_5] [i_5] [(unsigned char)12] [i_5 + 4])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_0 [i_0] [i_3]))));
                                arr_20 [i_0] [i_3] [i_3 + 1] [i_4] [i_3] [i_0] [i_7] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((((/* implicit */int) arr_11 [i_4])) >= (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((15392170952295963370ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_19 = min((((/* implicit */unsigned long long int) (unsigned short)1)), (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -631414172)))))));
                        var_20 = ((/* implicit */short) ((15392170952295963354ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_0), (((/* implicit */unsigned int) var_7))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [6ULL] [i_8] [i_9 + 3] [i_9] [(unsigned char)18] [i_10])) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) arr_1 [8LL]))))), (var_3))) : (((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_11 [(unsigned short)14])), (arr_16 [i_0 - 2] [4] [4] [i_10])))))))))));
                        var_22 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))))), (arr_12 [(_Bool)1] [i_0 - 2] [18ULL] [i_9] [i_10])))), (min((arr_26 [(unsigned short)14] [i_8] [i_8] [(signed char)18] [14U] [i_10]), (((/* implicit */unsigned int) arr_16 [i_0] [(_Bool)1] [i_0] [i_10]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
        var_24 = ((/* implicit */short) var_2);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 10; i_12 += 1) 
        {
            for (unsigned short i_13 = 3; i_13 < 7; i_13 += 1) 
            {
                {
                    arr_37 [i_11] [4] |= var_6;
                    var_25 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_5 [i_12])))) && (var_8))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_34 [i_12] [0ULL])) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_11] [i_11])) && (((/* implicit */_Bool) var_9)))))))) : ((-(arr_24 [i_12] [i_12] [i_12 + 1] [i_12 + 1])))));
                    arr_38 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) 7330119073837808430LL)), (max((((/* implicit */unsigned long long int) arr_32 [(unsigned char)1] [(unsigned char)1] [i_13 + 4])), (arr_19 [i_12] [(unsigned short)8] [i_12] [i_11] [i_12])))))));
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        arr_41 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65516)) ? (17ULL) : (625010542248299569ULL)));
        arr_42 [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((var_3), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))))));
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_45 [i_14] [(unsigned char)8] [i_14] = ((/* implicit */unsigned short) ((min((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (224547161U)))))) == (((/* implicit */long long int) min((max((((/* implicit */int) (short)-25187)), (arr_24 [i_14] [(unsigned char)9] [i_15] [i_14]))), (((/* implicit */int) ((_Bool) var_7))))))));
            arr_46 [i_14] [i_15] = ((/* implicit */unsigned int) arr_43 [i_14] [i_15]);
            var_26 = ((/* implicit */unsigned short) arr_25 [i_14] [i_14] [i_15] [(_Bool)1]);
            var_27 -= arr_31 [i_14];
        }
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1618455574U)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
