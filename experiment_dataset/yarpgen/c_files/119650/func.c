/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119650
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
    var_14 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)-16186)))) ^ (((((/* implicit */_Bool) 6824770341944679581ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16185))) : (17179869183LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (((arr_0 [i_0] [(_Bool)1]) / (arr_3 [(short)9]))) : (arr_6 [i_0] [i_1] [(short)8])))))))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2002337021)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) : (8185814921376775199LL)))) || (((/* implicit */_Bool) ((long long int) var_13))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_13)))) + (((/* implicit */unsigned long long int) min((((arr_3 [i_0]) - (arr_5 [i_0] [i_0] [i_1] [i_2]))), (((/* implicit */long long int) (short)-16198)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min(((+((-(arr_3 [i_0]))))), (((/* implicit */long long int) (((-(arr_6 [i_0] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) != (3498514354U))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            var_17 = (!(((/* implicit */_Bool) (~(arr_6 [i_3 + 1] [i_3 - 1] [i_3])))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */int) ((signed char) (((!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((-(arr_0 [i_3] [i_4]))))));
                            var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((0LL), (-6629755623809661920LL)))))) || (((/* implicit */_Bool) min((arr_14 [i_3 - 1] [i_3 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) == (11621973731764872062ULL)))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 255U))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3]))) != (arr_5 [i_0] [i_0] [i_0] [i_0]))))))) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0]))))) ? (arr_5 [i_0] [i_3 - 1] [i_3] [i_3 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [9] [(unsigned char)4] [(unsigned char)2])) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (arr_1 [i_0]))))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [8U])) : (((((arr_16 [i_0] [i_0] [2LL] [i_3]) >> (((((/* implicit */int) arr_9 [i_3])) - (46))))) << ((((~(arr_3 [(_Bool)1]))) - (2963626089324903874LL))))))))));
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) min((-1LL), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_9)))) : (arr_16 [i_0] [11U] [i_0] [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_0])))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (var_13)));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) arr_0 [i_8] [i_0]);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 779432490U)) ? (((/* implicit */int) arr_18 [i_0] [i_8])) : (((/* implicit */int) (short)-12673))))) : (((unsigned long long int) arr_18 [i_0] [i_0]))));
            arr_26 [i_8] [i_8] [i_0] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8481644807164326173LL)) ? (((/* implicit */int) (signed char)68)) : (arr_20 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [4] [i_8] [i_8] [i_8]))) : (min((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_8] [i_8] [i_8] [(unsigned short)3])), (-7288058150753223525LL)))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1162964854U)) ? (8271935108325639714ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16207)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (2074815904U)))) ? ((~(arr_3 [i_0]))) : (19LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16167)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16160))) : (796452940U)))) ? (((/* implicit */long long int) (~(1632733042)))) : (((((/* implicit */_Bool) arr_5 [i_0] [6U] [i_8] [i_8])) ? (arr_0 [i_0] [(_Bool)1]) : (arr_0 [i_0] [i_8])))))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) - (3196946288U)));
        arr_29 [i_9] = ((/* implicit */unsigned int) (unsigned char)114);
    }
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (551137677)))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (min((8271935108325639714ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (7852278637980390217LL) : (((/* implicit */long long int) var_10)))))) : (var_8))))));
}
