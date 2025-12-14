/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122786
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2366702017U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4264870779773694407LL))) >= (var_0))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2))))), (((var_0) % (((/* implicit */long long int) 1928265279U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (max((1928265279U), (2366702035U)))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))), (max((((/* implicit */unsigned long long int) (signed char)49)), (3955240017527237845ULL)))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (3733431939978339624ULL)))) ? (max((((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_4)))), (arr_11 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) (short)-28925)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (signed char)-25))))));
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_3] [i_0])))))) ? (((/* implicit */int) arr_7 [i_1 + 1] [(unsigned short)3] [i_1 - 1])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_2])), (var_5)))))) / (((/* implicit */int) ((2366702035U) >= (((/* implicit */unsigned int) 1449377732)))))));
                            var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-49))))), (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (17183206151464662307ULL) : (((/* implicit */unsigned long long int) -4662501564636356433LL))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_22 [(unsigned short)6] [i_0] [6U] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3733431939978339624ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_15 [16ULL] [i_5])) ? (arr_18 [i_0] [i_5 + 2] [(unsigned char)7]) : (((/* implicit */long long int) 1803034809U))))));
                        arr_23 [i_0] [i_5 + 1] [i_6 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15711)) ? (((/* implicit */int) arr_21 [i_5 + 2] [i_5])) : (var_6)));
                        var_14 = ((/* implicit */signed char) ((arr_17 [i_5 - 2] [i_5]) ? (arr_16 [i_5 - 2] [i_5] [i_6]) : (arr_16 [i_5 - 2] [i_5] [i_6 - 1])));
                    }
                } 
            } 
            var_15 = ((((/* implicit */_Bool) (short)-3499)) ? (((/* implicit */int) var_7)) : (arr_11 [i_0] [i_5] [i_5 - 3] [i_5 - 2] [i_5 - 4] [i_5 + 1]));
        }
        for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
        {
            arr_28 [9] [i_8] [i_0] = ((/* implicit */_Bool) min((min((arr_18 [i_0] [i_8] [i_8 - 2]), (((/* implicit */long long int) var_3)))), (max((arr_6 [i_8 + 3] [i_8 - 3] [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)151))))));
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (signed char)-108)), (3733431939978339624ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_6)) == (1852341452U))))));
                            arr_36 [i_0] [i_8 - 2] [i_0] [i_9 + 3] [i_11 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2955655413U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11 - 1] [13U] [i_8] [i_0])))))) ? (((((/* implicit */int) (signed char)-41)) * (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_19 [i_0] [i_8 - 3] [i_11 + 1] [i_10])) / (((/* implicit */int) (signed char)-82))))));
                            arr_37 [i_11 - 2] [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_30 [i_8 - 1])), (var_2))))) >= (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-62)) * (((/* implicit */int) (unsigned short)43799))))) ^ (1339311884U)))));
                            var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((2955655412U), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) -987452385)) ? (arr_20 [i_11 - 2] [i_11] [i_11 - 2]) : (arr_20 [i_11 + 3] [i_11 + 3] [i_11 + 3])))));
                        }
                    } 
                } 
            } 
        }
        for (int i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-27)), (var_2)))) ? (max((((/* implicit */unsigned long long int) var_3)), (6704383223509016103ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_12 + 2]) : (arr_32 [i_0]))))));
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 18; i_13 += 2) 
            {
                for (signed char i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    for (int i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_19 = min((6450381368417070836ULL), (((/* implicit */unsigned long long int) (signed char)35)));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_13] [i_14] [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_13] [i_15 - 1]))))), (7992156702546278075ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14217)) ? (arr_1 [9ULL] [i_13]) : (12570186563949639043ULL)))) ? (((1248052680660791777ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (arr_43 [i_0] [i_13] [i_14])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_5 [i_12] [i_13] [i_14]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (arr_38 [i_0] [(unsigned char)9] [i_13]))))))))));
                            arr_49 [i_14] [i_14 - 1] [i_13] [i_12] [i_14] [i_14] = ((/* implicit */unsigned long long int) min((3081559317U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)13)) ? (-1736548465) : (((/* implicit */int) (unsigned short)63273)))))));
                        }
                    } 
                } 
            } 
        }
        arr_50 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0])) ? (((arr_31 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33812))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) ^ (arr_31 [i_0] [(signed char)14] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_7)), (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_8)) : (var_6))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)104))))))))));
        arr_51 [i_0] [i_0] = max((((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (unsigned short)31732)))), (max((var_6), (((/* implicit */int) (short)-24946)))));
    }
}
