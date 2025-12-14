/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111400
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
    var_20 = ((/* implicit */unsigned long long int) min((2147483647), (-2147483616)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_8)))) ? ((-(((/* implicit */int) var_19)))) : (min((arr_1 [i_0]), (((/* implicit */int) var_15)))))));
        var_22 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_2 [i_0] = var_4;
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_23 = ((/* implicit */int) ((min((arr_6 [i_1]), (arr_6 [i_1]))) | (arr_6 [i_1])));
        var_24 = ((/* implicit */int) ((signed char) ((signed char) ((_Bool) arr_6 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_25 *= ((/* implicit */_Bool) var_12);
            arr_9 [(signed char)6] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_8) << (((arr_6 [i_1]) - (4938742955031581705ULL))))), (var_9)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])), (min((12218278809698257281ULL), (((/* implicit */unsigned long long int) var_16)))))) : (arr_6 [i_1])));
            var_26 &= ((/* implicit */unsigned long long int) min(((_Bool)1), (var_13)));
            var_27 = ((/* implicit */unsigned long long int) arr_7 [(signed char)18]);
            var_28 = ((/* implicit */unsigned long long int) ((((((int) min((arr_3 [i_1] [i_2]), (((/* implicit */int) var_7))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 21ULL)) ? (var_17) : (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_2] [i_2]))))))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_29 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 12218278809698257284ULL))))))));
            var_30 = var_8;
            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned long long int) arr_8 [i_1] [(short)0] [i_3])))))) > (((((/* implicit */int) arr_4 [i_3])) + (((/* implicit */int) arr_4 [i_3]))))));
            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
        }
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3602071513164358528ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (short)14342)) <= (2147483610)))))))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) -1814588965))), (((((((/* implicit */int) min((arr_11 [i_4]), (((/* implicit */signed char) var_13))))) + (2147483647))) >> (((/* implicit */int) arr_10 [i_4] [i_4]))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_15)) + (48)))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_5] [i_4]))) : (((/* implicit */int) (!(((_Bool) var_17)))))));
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */int) arr_13 [8ULL]);
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((int) var_4)) : (((((/* implicit */_Bool) arr_7 [i_4])) ? (var_11) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))))));
            var_35 |= ((/* implicit */unsigned char) arr_12 [(signed char)8] [i_6 - 2]);
            var_36 = (~(((((/* implicit */_Bool) var_8)) ? (arr_12 [i_4] [i_4]) : (6014741974627604095ULL))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            arr_24 [(short)2] = ((/* implicit */_Bool) 12218278809698257281ULL);
            var_37 -= ((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) max((((/* implicit */signed char) var_10)), (arr_0 [i_4] [i_7 - 2]))))), (var_14)));
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) 347647720))));
        var_39 &= ((/* implicit */unsigned char) ((unsigned long long int) max((arr_4 [i_4]), (arr_4 [i_4]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_30 [i_8] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_3 [i_8] [(_Bool)1])))))));
            var_40 = ((((/* implicit */_Bool) arr_28 [(signed char)7] [i_8] [i_9])) ? (1924094180) : (min(((~(((/* implicit */int) (signed char)86)))), (arr_7 [(_Bool)0]))));
        }
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */int) (short)9723)), (-2147483606)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_8])))), (((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) (_Bool)1)) << (((951373911) - (951373906))))) - (4))))))))));
        var_42 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (-2147483647 - 1))))));
    }
    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (signed char)40)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((unsigned long long int) var_11)) : (var_9)));
}
