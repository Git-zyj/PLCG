/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156720
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
    var_10 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 - 3]), (arr_2 [i_0 - 1] [i_0 + 1])))) ? (((var_5) + (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 2])))) : (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (2304924881249276081LL)))));
                    arr_10 [i_1] [(_Bool)0] [i_1] [i_1] &= ((/* implicit */unsigned short) (signed char)-36);
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_2)), (arr_4 [i_0 + 1] [i_1] [i_0]))), (((/* implicit */unsigned int) (unsigned char)0))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned short) arr_2 [i_0 - 3] [i_0 - 2]);
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_17 [(unsigned short)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1016805682U)) ? (((/* implicit */long long int) -498786249)) : (-4013825976212160043LL)))) ? (((((/* implicit */_Bool) 3901710928U)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (short)6160)))) : (var_2)));
            arr_18 [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
            var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) % (((/* implicit */int) ((short) arr_12 [i_3] [i_4])))))), (var_5)));
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_27 [i_3] = ((/* implicit */long long int) ((min((((/* implicit */long long int) max((var_4), (var_6)))), (arr_20 [i_3] [i_3]))) > (var_5)));
                        var_14 = ((/* implicit */unsigned int) min((((arr_22 [(_Bool)1]) ? (((/* implicit */unsigned long long int) var_7)) : ((+(arr_12 [i_3] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967295U)) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-32747)))) : (((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                        arr_28 [i_3] = ((/* implicit */int) arr_16 [i_3] [12] [i_3]);
                    }
                } 
            } 
            arr_29 [i_3] [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_3] [i_5]), (((((/* implicit */_Bool) arr_12 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [(short)19] [i_5] [i_5] [(unsigned short)8] [i_3]))) : (arr_12 [i_3] [i_5])))))) ? (((/* implicit */int) min((((/* implicit */short) arr_16 [i_3] [i_5] [i_5])), (var_4)))) : (((((((/* implicit */int) (unsigned char)43)) <= (var_7))) ? (var_7) : ((-(((/* implicit */int) (unsigned char)245))))))));
            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_19 [i_5] [i_5] [i_3])))) ? (min((arr_19 [i_3] [i_5] [i_3]), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3]))))))));
        }
        arr_30 [i_3] = arr_19 [(short)6] [7ULL] [i_3];
    }
    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_16 ^= ((/* implicit */_Bool) ((short) (((!(((/* implicit */_Bool) (unsigned char)231)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))) : (((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> (((arr_20 [i_8] [i_8]) + (2861471035534784986LL))))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((((arr_23 [i_8] [i_8] [i_9] [i_10]) + (2147483647))) << (((((arr_23 [i_10] [i_8] [i_8] [i_8]) + (1484981974))) - (15)))))));
                    arr_40 [i_8] &= ((/* implicit */unsigned int) ((unsigned short) var_9));
                }
            } 
        } 
    }
}
