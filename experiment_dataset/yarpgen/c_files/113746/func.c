/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113746
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [1ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (unsigned char)144))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_8)))))) : (max((min((((/* implicit */int) var_18)), (-1391682978))), (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        var_19 = ((/* implicit */signed char) ((((arr_1 [i_0]) < (arr_1 [i_0]))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((unsigned int) var_13));
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_20 = (+(((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 3]))));
            var_21 = ((/* implicit */unsigned char) arr_9 [(short)19] [16U] [i_1 - 3]);
            arr_10 [i_1] = ((((int) arr_5 [i_1 + 1])) != (((/* implicit */int) max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 4])))));
        }
        for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_14 [i_3] = ((/* implicit */_Bool) ((int) var_8));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)14280)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) max((((/* implicit */short) arr_15 [(unsigned char)9] [i_3] [i_1] [i_3 + 1])), (arr_4 [i_3 + 1] [(_Bool)1]))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((max((((arr_16 [i_1 + 1] [i_1]) - (7824066168195668698ULL))), (max((((/* implicit */unsigned long long int) arr_5 [i_4])), (arr_16 [i_1] [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_17 [i_1 - 4] [i_3] [i_4]))))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_24 = ((/* implicit */int) var_7);
                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)101)) ^ (((/* implicit */int) arr_20 [0ULL])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_3])) && (((/* implicit */_Bool) -1509867941)))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_1 - 4] [i_3] [i_1 - 4]))));
            }
            var_27 = ((/* implicit */unsigned int) arr_6 [i_1 - 1]);
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_24 [i_1] [i_6] [i_1] &= ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) arr_18 [i_1] [3U] [i_6])) ? (((/* implicit */int) arr_4 [i_1] [10U])) : (((/* implicit */int) var_5)))))), ((-(((/* implicit */int) arr_18 [i_1] [i_6] [i_1]))))));
            arr_25 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 + 1] [16])) ? (((/* implicit */int) arr_17 [i_1] [i_1 - 3] [i_6])) : (((/* implicit */int) var_16))))) ? ((+(((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_6])))) : ((~(1040881506)))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_17 [i_1] [(_Bool)1] [(_Bool)1]))));
        }
    }
    var_29 &= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_29 [i_7] [(short)21] = 1377514909;
        arr_30 [i_7] [i_7] = ((/* implicit */_Bool) ((short) var_4));
        var_30 = ((/* implicit */unsigned int) 1509867940);
        arr_31 [i_7] = ((/* implicit */short) arr_28 [i_7]);
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_8] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_8])) >= (((/* implicit */int) (unsigned char)112)))))))));
        arr_37 [i_8] = max(((~(((/* implicit */int) (unsigned char)26)))), ((+(((/* implicit */int) arr_33 [i_8])))));
    }
    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
}
