/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18014
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
    var_15 |= ((/* implicit */short) ((max((((unsigned long long int) (short)15353)), (((/* implicit */unsigned long long int) var_6)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_11))), (((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned short) var_8)))))))) ? (max((((/* implicit */unsigned int) max((((/* implicit */short) var_9)), (var_7)))), (((var_11) | (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) var_0)))))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (-1132034298)))) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)159);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) 3753434054178536953LL);
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) ^ (2053614678)));
            arr_12 [i_1] = ((((/* implicit */int) arr_8 [6ULL])) + (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))));
        }
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_7 [i_1]))));
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_3 + 1])) ? (((((/* implicit */_Bool) var_14)) ? (arr_9 [4] [9ULL] [4]) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_13))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                arr_19 [i_4] [i_3 + 2] [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_7 [i_1])))) + (((/* implicit */int) arr_15 [5] [i_4 + 2] [i_1]))));
                var_19 = ((/* implicit */_Bool) var_2);
            }
            var_20 -= ((/* implicit */_Bool) var_2);
            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [0ULL])) ? (arr_10 [i_3 + 1] [i_3]) : (arr_10 [i_3 - 1] [i_3 - 1])));
        }
        var_22 *= ((/* implicit */signed char) ((((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)70)))) - ((+(((/* implicit */int) var_14))))));
        var_23 = ((/* implicit */_Bool) arr_18 [i_1]);
    }
    for (unsigned char i_5 = 1; i_5 < 6; i_5 += 2) 
    {
        arr_23 [i_5 + 4] [i_5] = ((/* implicit */unsigned long long int) var_4);
        arr_24 [i_5] = ((/* implicit */_Bool) (short)21743);
        var_24 = ((((/* implicit */_Bool) max(((short)9650), (((/* implicit */short) (unsigned char)96))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((163781265353357129LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) : (((arr_0 [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_25 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17407))))), (((/* implicit */unsigned int) arr_6 [i_6]))));
        arr_27 [i_6] [i_6] |= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-6839)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_3)))))));
    }
}
