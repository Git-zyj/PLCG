/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103511
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
    var_20 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18695)))))) ? (((1733022290) - (1733022285))) : (((int) -1733022290))))) ^ (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) max((9), (((/* implicit */int) (short)9))))) : (arr_2 [i_0] [i_0])))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((6995493667941763904LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 128LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_10))))) : (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) << (((1076982763) - (1076982722)))))) ? (((/* implicit */int) arr_0 [3])) : (1733022285)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1297818407)))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_11 [(signed char)11] [(signed char)11] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1])), (((((/* implicit */_Bool) 3591404869476001167ULL)) ? (17341106104591426873ULL) : (11491916941112022704ULL)))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (arr_10 [i_2] [i_1]))))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((6986194332135540772LL) << (((((-1129388220) + (1129388277))) - (57)))))) ? (((unsigned int) max((((/* implicit */long long int) arr_7 [i_2] [i_1])), (var_10)))) : (((/* implicit */unsigned int) arr_10 [i_1] [i_1])))))));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_0))));
            /* LoopSeq 1 */
            for (int i_4 = 4; i_4 < 8; i_4 += 1) 
            {
                var_27 += ((/* implicit */short) arr_0 [9]);
                var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((long long int) max((18446744073709551605ULL), (arr_15 [i_4] [i_3])))) : (arr_6 [i_1])));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_1])) >= (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 9)) | (-7290772231855407557LL)))) ^ (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) 206040459)) : (0ULL)))))));
            var_30 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((((/* implicit */_Bool) 1733022290)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (5105667835312229444LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) 7290772231855407559LL);
            arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (-705031666)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_32 = ((/* implicit */long long int) (_Bool)1);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((arr_26 [i_1] [i_6] [i_1]) ? (((/* implicit */int) arr_26 [i_1] [i_1] [i_1])) : (arr_10 [i_1] [i_8]))))));
                        var_34 = ((/* implicit */long long int) ((arr_5 [i_1]) ? (((/* implicit */int) arr_28 [i_8] [i_6] [10] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_7] [i_1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) 6031628826484908236LL);
                            arr_37 [i_1] [i_6] [4ULL] [i_6] [i_11] &= ((/* implicit */_Bool) 7680);
                        }
                    } 
                } 
            } 
        }
        arr_38 [(_Bool)1] = ((/* implicit */long long int) min((max((arr_13 [i_1]), (arr_13 [i_1]))), (((arr_13 [i_1]) * (arr_13 [i_1])))));
    }
    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            var_36 = ((arr_1 [i_12]) / (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-6975419236347122575LL) : (1606282641190919612LL))));
            var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483619)) ? (((/* implicit */int) ((short) arr_0 [i_13]))) : (((((/* implicit */_Bool) 488548821)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-2902))))));
            arr_43 [i_13] [i_13] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_12]))) : (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1LL])))))));
        }
        for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            var_38 = ((/* implicit */long long int) arr_44 [i_12] [i_12]);
            arr_47 [i_12] [i_14] = ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (short)-21543)) : (((arr_45 [13ULL] [i_14] [7LL]) << (((((arr_46 [(_Bool)1] [i_12]) + (8041860276756141853LL))) - (21LL)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2902))) != (6995493667941763904LL)))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_44 [i_14] [i_12])), (arr_2 [i_12] [i_14]))) == (((/* implicit */unsigned long long int) ((long long int) arr_42 [i_12] [i_14] [i_14])))))));
            var_39 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_14] [i_12])) ? (arr_2 [i_12] [i_12]) : (arr_2 [i_12] [i_12]))), (arr_2 [i_12] [i_12])));
        }
        for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            var_40 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_45 [1LL] [1LL] [i_15])), (((((/* implicit */_Bool) -1733022291)) ? (14164998650826044029ULL) : (((/* implicit */unsigned long long int) 0LL))))));
            arr_50 [i_12] = ((/* implicit */signed char) (((-2147483647 - 1)) & (((/* implicit */int) (_Bool)0))));
            arr_51 [13U] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2080374784))) ? (((arr_48 [i_15]) + (arr_49 [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)19320)) && (((/* implicit */_Bool) var_13))))))))) ? (((4281745422883507587ULL) - (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11674051234405849616ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_15])) << (((arr_45 [9LL] [9LL] [i_15]) - (343469565)))))) ? (((((/* implicit */_Bool) arr_40 [i_12])) ? (arr_1 [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_15]))))) : (max((arr_48 [i_12]), (((/* implicit */long long int) arr_41 [i_12])))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    {
                        arr_61 [i_18] [(signed char)8] [8ULL] [i_12] = ((/* implicit */unsigned long long int) ((((((long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_57 [i_12] [i_18] [i_17])) : (arr_2 [(_Bool)1] [i_16])))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (var_15)))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((arr_42 [i_18] [i_16] [i_18]) ? (((/* implicit */int) arr_60 [11LL] [i_12])) : (arr_59 [i_12] [i_16] [i_17] [(unsigned char)0])))))) - (9021LL)))));
                        arr_62 [i_12] [i_16] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [(_Bool)1] [i_16]))) % (max((((/* implicit */long long int) ((unsigned int) arr_39 [i_12] [i_12]))), (arr_46 [i_16] [i_18])))));
                        var_41 = arr_45 [i_16] [0LL] [i_18];
                    }
                } 
            } 
        } 
    }
}
