/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17263
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_1))));
        var_12 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), (var_8)));
        var_13 ^= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)30491)), (0)));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_2 [i_1] [i_1])))) ^ (((/* implicit */int) arr_3 [i_1 + 2]))))) ^ (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (-1))))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_15 = (((((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))) + (2147483647))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (8))) - (6))));
            arr_8 [i_1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_7 [7] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)63))))) : (2855766022U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    {
                        var_16 ^= var_9;
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1])) > ((+(var_8)))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_4] [i_6]))) ? (((/* implicit */int) var_3)) : (arr_4 [i_5 - 3] [i_1 + 1])));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_3] [(signed char)14] [i_5 + 1] [i_6]))) | (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1758129827) != (((/* implicit */int) (short)-22)))))) : (arr_10 [i_3] [i_5 - 3] [i_6])));
                            var_20 = ((/* implicit */unsigned char) ((arr_7 [i_1 + 1] [i_5 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_3])))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_3] [i_6] [i_6])))))));
                        }
                        arr_17 [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1]);
                    }
                } 
            } 
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3])) ? (arr_7 [i_3] [i_1]) : (((/* implicit */long long int) ((arr_3 [i_1 - 1]) ? (var_9) : (((/* implicit */int) arr_2 [i_1] [i_1])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) / (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_7)) ? (3774843870978252567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_24 [i_9] [i_8] [i_7]))));
                    var_25 = ((/* implicit */unsigned char) (~((~(134217727)))));
                }
            } 
        } 
    } 
    var_26 = (-(((/* implicit */int) var_0)));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_2)))))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -1194755713)) : (var_6))) ^ (((/* implicit */unsigned long long int) (~(-1194755722))))))));
}
