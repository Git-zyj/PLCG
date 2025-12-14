/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121518
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
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((var_12) + (2147483647))) << (((1945743975U) - (1945743975U))))) - (((/* implicit */int) ((unsigned short) 25)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((var_3) / (((/* implicit */long long int) var_12))))))) : (var_13)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_6)), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) var_7)))))))) != (arr_8 [(_Bool)0] [1LL] [(_Bool)0])));
                    arr_9 [i_2] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_1))))))), (max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_10))))), (var_13)))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((2349223320U) >= (1945743971U))))))) / (((/* implicit */long long int) 1945743956U))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) 2349223321U);
                                arr_19 [i_0] [(unsigned char)9] [i_4] [i_5] [8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) >= (((((/* implicit */_Bool) ((unsigned int) arr_4 [i_5 - 3] [i_0]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_7 [(unsigned char)8] [i_3] [i_6])) : (1759077489U))) : (((2349223326U) - (1945743981U)))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (11487289148306921132ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))) : (((unsigned int) 6959454925402630480ULL)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) 2349223343U)) ? (2250709955U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned char)10])))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_3)))) ? (2535889787U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)147)) / (arr_11 [i_3] [i_3] [i_3])))))) : (min((((((/* implicit */unsigned int) arr_2 [4] [9LL])) % (arr_1 [i_0] [(signed char)8]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46502)))))))));
                    arr_21 [i_0] [i_3] [i_3] [i_0] = (-(((/* implicit */int) ((signed char) var_8))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) (~(3075486488911352538ULL)));
                        var_19 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))) != (0LL)));
                        var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)1854))));
                        arr_25 [i_0] [i_0] [(signed char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_8 [i_0] [3] [6ULL])))) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_12 [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [(unsigned char)3])) ? (((/* implicit */int) arr_15 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1])) : (arr_14 [i_8 - 1])));
                        var_22 = (((_Bool)1) ? (((/* implicit */long long int) var_5)) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                        var_23 += ((/* implicit */unsigned char) (unsigned short)63677);
                        var_24 *= ((/* implicit */int) 0LL);
                    }
                }
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */int) var_9);
    }
}
