/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166550
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_1] [i_0]);
            var_11 ^= var_5;
            var_12 = (((~(((/* implicit */int) (short)-13672)))) >= (arr_3 [i_0] [i_1]));
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1])))))));
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))));
                    arr_13 [(short)8] [(short)8] = ((/* implicit */short) (!(((/* implicit */_Bool) 10537477750757070586ULL))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        var_15 ^= ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_5 [i_4] [i_4])))) ? ((-(1310296169))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) == (arr_12 [i_4] [i_4])))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((long long int) (-(137438953471ULL))));
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_2))));
        var_17 |= ((/* implicit */signed char) max((((min((((/* implicit */unsigned long long int) var_9)), (arr_12 [i_5] [i_5]))) % (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (-(max((arr_1 [i_5]), (arr_9 [i_5] [i_5] [i_5]))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_3 [i_6] [i_6])) : (var_6))), (((/* implicit */long long int) arr_3 [i_6] [i_6]))));
        var_19 = ((/* implicit */unsigned short) (unsigned char)255);
    }
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7909266322952481030ULL)) && (((/* implicit */_Bool) (signed char)0)))))) < (var_6)))), (max((((/* implicit */unsigned short) (unsigned char)164)), ((unsigned short)48064)))));
    var_21 = ((/* implicit */long long int) ((max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned short)44019)))))) - (((/* implicit */int) var_5))));
}
