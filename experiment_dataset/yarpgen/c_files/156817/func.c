/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156817
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) var_11))), (((long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)118)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = (~((+(((/* implicit */int) (short)8191)))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_4 [(signed char)3] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] &= ((/* implicit */unsigned short) arr_1 [i_1]);
            var_14 = ((/* implicit */_Bool) (+(var_7)));
        }
        arr_11 [i_1] [(signed char)2] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_7 [i_1])))));
        var_15 = ((/* implicit */int) min((((/* implicit */long long int) min(((signed char)-46), ((signed char)110)))), (arr_8 [i_1] [(signed char)1])));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (signed char)-46);
            var_17 += ((/* implicit */signed char) ((((/* implicit */int) ((arr_14 [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_3] [i_4]), (arr_12 [i_4])))))))) > (((/* implicit */int) var_1))));
        }
        for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) arr_17 [i_3] [(_Bool)1])) : (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 3]))))) % (min((((/* implicit */unsigned long long int) min((var_6), (var_5)))), (var_12))))))));
            var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_19 [i_5 - 2])), ((~(((/* implicit */int) (_Bool)1)))))), (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (signed char)42))))));
            var_20 = ((/* implicit */unsigned short) var_7);
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-69))))) == (max((max((((/* implicit */long long int) (signed char)29)), (-4559482104661246037LL))), (((/* implicit */long long int) min((var_4), (((/* implicit */short) (signed char)43)))))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), ((+(8281552576536428551ULL)))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_22 = ((/* implicit */long long int) (!(((arr_24 [i_6 + 1] [i_6 + 1]) < (arr_24 [i_6 + 1] [i_6 + 1])))));
                arr_28 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_1))) * (((/* implicit */int) (signed char)29))));
            }
            arr_29 [i_3] [(signed char)4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) (signed char)30))), (((long long int) 2882282760957696902ULL))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171)))))) : (arr_23 [i_3] [(signed char)12] [i_3])));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_3])) ? (arr_26 [i_3] [i_3] [i_8] [i_8]) : (arr_26 [i_3] [i_3] [i_8] [i_3])));
        }
        arr_32 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) - (max((min((arr_14 [i_3]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
        var_25 |= ((/* implicit */signed char) ((short) arr_26 [i_3] [(_Bool)1] [i_3] [i_3]));
    }
}
