/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157437
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_4 [i_3])))));
                        arr_10 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [(unsigned short)14] [i_2] [i_2] [i_3] [i_3])) ? (14255124112732871200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
                        arr_11 [i_0] [(unsigned short)6] [i_3] [i_3] = ((/* implicit */short) ((4191619960976680409ULL) << (((/* implicit */int) arr_7 [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_0 - 1] [i_0 + 1])) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_0 + 2] [i_0 - 1]) : (((/* implicit */int) var_11))));
                            var_14 ^= ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) arr_13 [i_4 + 3] [i_3 - 1] [(unsigned short)8] [i_3 - 1] [i_0]))));
                            arr_14 [i_0 - 1] [i_3] [10U] [10U] [i_4] [i_3] [(_Bool)1] = ((((/* implicit */_Bool) (~(var_10)))) ? ((~(4191619960976680409ULL))) : (6ULL));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((18446744073709551612ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 2])))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((-2887808445022265062LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_1])) >= (((/* implicit */int) var_3))))))));
                            var_15 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_10)))) >= (((/* implicit */int) arr_16 [i_0] [i_1]))));
                        }
                    }
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)27660), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1])))))) | ((~(4191619960976680420ULL)))))));
                    arr_19 [2] = (~((~(((unsigned long long int) arr_4 [i_1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_7)), ((~(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))))));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62))))))) != (((((_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned short)31208)) ? (8910767696803835842ULL) : (((/* implicit */unsigned long long int) arr_8 [i_6] [14] [i_6] [i_6] [i_6] [i_6])))) : (((14255124112732871213ULL) - (((/* implicit */unsigned long long int) 855780718))))))));
        /* LoopSeq 2 */
        for (short i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) arr_5 [i_6] [i_7] [i_7] [i_6])) : (var_1)))) ? (((var_0) << (((((/* implicit */int) (short)7936)) - (7917))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_7] [i_7]) != (((/* implicit */unsigned long long int) 4294967295U))))))))) + (((arr_7 [i_6]) ? (max((arr_2 [(short)8] [i_7]), (9498339779859547468ULL))) : (7408967005593608609ULL)))));
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [(unsigned short)16] [i_7] [i_7] [(_Bool)1] [i_7])))) + ((~(((/* implicit */int) var_8))))))) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_22 [(_Bool)1]))));
            arr_27 [i_6] [i_6] [(signed char)11] = max((min((((arr_8 [i_6] [(short)14] [i_7 + 1] [i_6] [i_7 - 1] [(short)14]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_10))), (((/* implicit */long long int) var_7)));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_8] [i_6] [i_6] [i_6])) ? (arr_6 [i_6] [i_8] [i_8] [i_6]) : (arr_6 [i_6] [i_8] [i_8] [i_8])));
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_2 [i_6] [i_8])));
        }
    }
}
