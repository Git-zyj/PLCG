/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188053
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_9))))))))) == (max((((/* implicit */unsigned long long int) min((var_9), (var_0)))), (((var_12) % (11400318643426393807ULL)))))));
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_4)), ((~(var_14)))));
    var_17 = ((/* implicit */unsigned char) min((max((((1625161765864323285ULL) >> (((((/* implicit */int) var_0)) - (23464))))), (((/* implicit */unsigned long long int) var_1)))), (var_12)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3])))) + (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 1])) % (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 2] [i_0 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187)))))));
        }
        for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) arr_10 [i_3] [i_2] [i_2 - 2] [i_2 - 1]);
                arr_11 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 + 2] [(short)20] [i_3 - 1])) & (((/* implicit */int) arr_4 [i_0 - 2] [i_0] [i_3 - 3]))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_0])) : (var_13))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-19162)) != (((/* implicit */int) arr_0 [i_2]))))))))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_0] [i_2] [i_2 - 2]))));
                var_21 = ((/* implicit */unsigned short) var_10);
                arr_16 [i_4] [i_2] = ((/* implicit */short) var_9);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4] [i_2 + 4] [i_4 - 2])) ? (((/* implicit */int) arr_4 [i_0] [i_2 + 4] [i_4 - 3])) : (((/* implicit */int) var_2)))))));
                var_23 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)38));
            }
            arr_17 [i_2 + 1] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 + 2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_2 - 1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            var_24 = ((/* implicit */short) ((unsigned char) ((max((((/* implicit */unsigned long long int) var_9)), (16821582307845228330ULL))) & (min((7046425430283157809ULL), (1625161765864323285ULL))))));
            arr_18 [i_2 + 3] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_13) : ((~(((/* implicit */int) arr_8 [i_0 - 1])))))) < ((+(((((/* implicit */int) var_6)) / (((/* implicit */int) (short)2044))))))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 3] [i_0]))));
        }
        var_25 = ((/* implicit */int) (~(min((11400318643426393807ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))));
    }
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */short) arr_4 [(short)11] [(short)14] [i_5]);
        var_26 = ((((/* implicit */int) arr_8 [i_5])) > (((/* implicit */int) (short)19149)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned char) ((arr_21 [i_6] [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
        var_28 = ((/* implicit */short) min((((((/* implicit */int) ((unsigned char) var_4))) % (((/* implicit */int) var_3)))), (((/* implicit */int) max(((short)-19162), (((/* implicit */short) var_6)))))));
        var_29 = ((/* implicit */unsigned short) ((signed char) (((+(((/* implicit */int) arr_2 [i_6])))) >= (((arr_25 [i_6]) % (((/* implicit */int) var_6)))))));
    }
    var_30 = ((/* implicit */short) var_1);
}
