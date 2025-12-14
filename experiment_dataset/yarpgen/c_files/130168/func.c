/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130168
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1])), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)131)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_2 - 1]))))) == ((~(var_2))))) ? (((((/* implicit */int) (signed char)-119)) + (1587336545))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_2))))));
                        var_11 = ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)112)), ((short)-6625)));
                        arr_12 [i_3] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) 511964156U)) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (((/* implicit */int) arr_11 [i_3] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)21770)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_9 [i_0]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_19 [i_4] [i_4] [i_5] = (~(((/* implicit */int) arr_13 [i_5])));
            arr_20 [i_4] = ((/* implicit */signed char) (~(arr_6 [7] [i_5] [i_5])));
        }
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_10 [i_4] [i_4] [i_4] [i_4]), (arr_10 [(short)7] [i_4] [i_4] [i_4])))) < (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-24720)))) >= (((/* implicit */int) ((arr_8 [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
        arr_22 [i_4] = ((/* implicit */unsigned int) 2147483639);
        var_12 &= ((/* implicit */unsigned short) (~((~(-2147483639)))));
    }
    var_13 = ((((((/* implicit */_Bool) ((int) 1581276355U))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 1399055215)) : (711653337U))) : (2260258574U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
    var_14 |= ((/* implicit */short) (unsigned char)255);
    var_15 = ((/* implicit */short) ((var_2) & (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 8215833399006014944LL))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) 18446744073709551608ULL))), (((((/* implicit */_Bool) 511964156U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (745138834U))))))));
}
