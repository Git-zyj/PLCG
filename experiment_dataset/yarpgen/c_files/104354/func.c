/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104354
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (6302283542558160215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned int) arr_4 [i_0] [i_1])))))));
            var_21 = ((/* implicit */unsigned int) 1356552357);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (4189156594U) : (0U)))) ? (arr_11 [i_2] [i_3 + 1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((var_2) * (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0])))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) 8978776009631877275ULL)) ? (((/* implicit */int) (unsigned short)3)) : (arr_17 [2] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5]))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_7 [i_3 + 1]))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_14 [i_0]))));
                            arr_19 [i_0] [i_2] [i_2] [i_4 + 1] [i_5 + 1] = ((/* implicit */short) ((arr_18 [i_3] [i_3 + 1] [i_3] [i_4 + 1] [i_5 + 2]) > (((/* implicit */long long int) 4294967288U))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            var_25 &= ((/* implicit */signed char) var_16);
                            arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) (unsigned short)65532));
                            arr_23 [i_0] [i_2] [i_0] [i_2] [i_4 + 1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [(short)8] [i_4]))) > (arr_20 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4] [i_3 - 1] [i_6 - 2])));
                            var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_20 [i_6] [i_4] [9] [9] [i_0] [i_0])))) : (var_11)));
                        }
                        for (int i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            arr_28 [i_7] [i_4 + 1] [i_3] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_2] [4]))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4189156590U)) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))))))));
                            arr_29 [i_7] = ((/* implicit */signed char) 1370764142U);
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (short i_10 = 1; i_10 < 8; i_10 += 1) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_10 + 3] [i_10 + 3])) : (((/* implicit */int) arr_4 [i_0] [i_2]))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_9] [(signed char)8] [(signed char)8] [i_10] [i_10 - 1])) ? (arr_27 [i_0] [i_9] [i_10] [i_9] [i_9] [i_10 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_0] [i_9] [0ULL])) & (var_8)))) ? (((/* implicit */unsigned long long int) -1644865572)) : (var_11))))));
                            arr_39 [i_10] [i_8] [i_2] [i_10] = ((/* implicit */unsigned int) (signed char)-13);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */_Bool) var_4);
            var_32 = ((/* implicit */signed char) (-(1397860529U)));
        }
        arr_40 [i_0] [i_0] |= ((/* implicit */int) var_6);
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((unsigned long long int) 1992125931156242498LL)))) > (-1356552357))))));
    }
    for (int i_11 = 2; i_11 < 9; i_11 += 3) 
    {
        arr_44 [(signed char)6] [(signed char)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_11 + 2]), (((/* implicit */unsigned short) (signed char)-2))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)33010)) ? (((/* implicit */int) var_16)) : (var_1)))))) : (arr_18 [i_11] [i_11 + 2] [i_11] [i_11] [i_11 + 1])));
        arr_45 [i_11] = ((/* implicit */signed char) ((max((var_4), (((/* implicit */unsigned int) (signed char)81)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11 + 2])))));
        /* LoopSeq 1 */
        for (signed char i_12 = 3; i_12 < 10; i_12 += 3) 
        {
            var_34 = 2147483647;
            arr_50 [i_11] [7U] [i_11] = ((/* implicit */unsigned long long int) var_10);
        }
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((((arr_35 [i_11 + 1] [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 1]) << (((30720) - (30720))))), (((arr_35 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 - 1]) / (arr_35 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11]))))))));
    }
    var_36 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))));
    var_37 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) 1992125931156242477LL)) : (16381628183040410056ULL)));
    var_38 = ((/* implicit */short) var_11);
    var_39 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) << (((var_11) - (17042288336325411477ULL)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) var_8)))))), (max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (max((((/* implicit */unsigned long long int) (short)5031)), (var_17)))))));
}
