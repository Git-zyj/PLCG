/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188706
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((4096), (4092))) : (((((/* implicit */int) (unsigned char)60)) & (((/* implicit */int) (unsigned short)21946)))))) : (((/* implicit */int) var_10))));
    var_19 += ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1])))) & ((+(((((/* implicit */int) (short)11463)) / (((/* implicit */int) var_12))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_20 = -4117;
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_3] [i_3] [i_4] = max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_1])), (((((((/* implicit */_Bool) (short)3968)) || (((/* implicit */_Bool) (short)-4953)))) ? (((((/* implicit */_Bool) var_16)) ? (arr_18 [i_1] [i_1] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18620))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_2] [7ULL]))))));
                        arr_22 [i_2] [i_2] [i_2] [7LL] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)53947))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (unsigned short)53974)))) % (((/* implicit */int) ((unsigned short) arr_14 [i_2] [i_2 + 3] [i_2 + 3] [i_4 - 1])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1126161550U)) ? (((/* implicit */int) arr_15 [i_1] [i_1])) : (((int) (signed char)-48))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2892995214572677163LL)) ? (1020456790U) : (((/* implicit */unsigned int) 880423712))))) || (((/* implicit */_Bool) (unsigned short)21946))))), ((unsigned short)65535)));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) ((-2875487914737297463LL) == (8919535853793590760LL)))))))));
                        arr_29 [i_1] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)38566)));
                        var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) & (((/* implicit */int) arr_16 [i_7] [i_6] [i_1] [i_1])))) <= (((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-8976)))) ? (((/* implicit */int) arr_28 [i_1] [i_5] [i_6] [i_6])) : (((/* implicit */int) var_5))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))) >= (0U))))));
                    }
                } 
            } 
            arr_30 [i_1] [i_1] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) (unsigned short)28672)) ? (1124800395214848ULL) : (((/* implicit */unsigned long long int) -8919535853793590784LL)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_1] [i_1] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_33 [i_1] |= ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_1]));
            var_26 |= ((((((/* implicit */long long int) -1196521507)) == (var_9))) ? (((((/* implicit */_Bool) 1196521507)) ? (6539600531058576522ULL) : (3514396098397091864ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (6539600531058576522ULL))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (arr_20 [i_1] [i_8] [(unsigned short)12] [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [i_9]))) : (10U))))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */int) arr_34 [i_1] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_7))))) ? (((unsigned int) arr_13 [(signed char)14] [(signed char)4] [i_9])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) var_0))) - (0ULL)));
            }
        }
    }
    for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            arr_44 [i_11] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_11])) << (((((/* implicit */int) arr_2 [i_10])) - (31))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_10])) || (((/* implicit */_Bool) (unsigned short)53926)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned short) ((var_14) << (((((/* implicit */int) ((_Bool) (short)-9045))) - (1)))));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_18 [i_10] [i_10] [i_10] [i_10] [i_12]))));
                arr_49 [i_11] = ((((/* implicit */unsigned long long int) min((arr_5 [i_10] [i_12]), (((((/* implicit */_Bool) (unsigned short)52156)) ? (((/* implicit */long long int) 4294967286U)) : (var_3)))))) * ((+(arr_18 [i_10] [i_10] [i_10] [i_10] [i_11]))));
                var_32 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned short)7367)) && (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) arr_39 [i_10])))), ((!(((/* implicit */_Bool) arr_9 [i_10]))))));
            }
        }
        arr_50 [11LL] = ((((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [16ULL] [16ULL] [i_10] [i_10]))) : (((((/* implicit */_Bool) var_0)) ? (1984762761606190354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21426))))))) % (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (10685622945349386129ULL))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_10]))))) << (((((/* implicit */int) ((unsigned char) -6036738533964503865LL))) - (170))))))));
            var_34 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_45 [i_13])) % (((/* implicit */int) arr_45 [i_13])))));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_14])) ? (((unsigned int) arr_47 [i_10] [i_13] [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [6ULL] [(unsigned short)0])))));
                        var_36 += ((/* implicit */short) ((((/* implicit */int) (short)10)) / (((/* implicit */int) arr_42 [i_14]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_10] [i_13] [i_10] [3])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14])))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_15]))) & (4852626835452612869LL)))));
                        var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_45 [i_14])), (arr_35 [i_15] [i_14] [i_10])))) ? (((/* implicit */int) arr_45 [i_13])) : (((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (unsigned char)93))))));
                    }
                } 
            } 
            var_39 = (((!(((/* implicit */_Bool) arr_42 [i_13])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_31 [i_10] [i_13] [i_10])) < (arr_48 [i_10] [i_10] [i_10] [i_13]))))))) : (((unsigned int) 3086370515U)));
            var_40 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(arr_46 [i_13] [i_13])))))) && (((/* implicit */_Bool) ((long long int) var_2)))));
        }
    }
    var_41 = ((/* implicit */long long int) (unsigned short)42100);
    var_42 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) ((unsigned short) var_0)))));
}
