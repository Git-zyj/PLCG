/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114798
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_10 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [5ULL] [i_0] [i_1] [i_1] [i_2 - 1] [i_2])) | (((/* implicit */int) var_0))));
                        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                        arr_12 [i_0] [i_2] [i_2] = ((/* implicit */short) ((9223372036850581504ULL) != (9223372036858970112ULL)));
                    }
                    arr_13 [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_0);
    var_13 |= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */int) var_0);
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_4]))) ? (((/* implicit */unsigned long long int) (+(67108832U)))) : ((+(var_7))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)54)) : ((-2147483647 - 1)))))));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48837)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (9223372036850581504ULL)))) || (((/* implicit */_Bool) ((signed char) arr_15 [(unsigned short)12]))))))) + ((+(var_7)))));
        arr_18 [i_4] = ((/* implicit */int) (~(9223372036850581531ULL)));
    }
    for (int i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_19 [i_5 - 1] [i_5 - 1]))) & (((/* implicit */int) ((((unsigned long long int) (short)-1027)) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_2)))))))))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            arr_25 [i_5] [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((arr_20 [i_5 - 1]) != (arr_20 [i_5 + 1]))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_24 [i_5 - 1])))) ? (((arr_5 [i_5 + 1]) + (arr_5 [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [6ULL] [i_6])))));
            var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_21 [i_6]), (arr_21 [i_5 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_6])) != (var_5))))) : (((((/* implicit */_Bool) var_1)) ? (arr_21 [i_5 + 1]) : (arr_21 [i_5])))));
        }
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 31744)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
}
