/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139310
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
    var_13 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)239), (((/* implicit */unsigned char) arr_4 [i_1 - 1] [i_1 + 2]))))) ? (((((/* implicit */_Bool) (short)21509)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (unsigned char)199))));
            var_16 = ((/* implicit */short) var_3);
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_11 [i_3] [i_3] [i_0 - 1] [i_0 + 2] = ((/* implicit */_Bool) ((min((var_11), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)56)), ((unsigned short)41602)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)14218))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)71)) <= (((/* implicit */int) (unsigned char)250))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_9 [i_0] [i_2 - 2] [i_3]))))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 2])) <= ((-(((/* implicit */int) arr_6 [i_0 - 2]))))));
            }
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_14 [(unsigned char)2] [i_2] [(signed char)4] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)20315))))) ? ((~(((/* implicit */int) arr_7 [(unsigned char)12] [(unsigned char)12])))) : (((/* implicit */int) arr_10 [i_4] [i_2 - 1] [i_4] [i_4])))) : (min((((/* implicit */int) arr_5 [i_4] [i_2 - 2])), (((arr_12 [(unsigned short)0] [10ULL] [i_4] [(unsigned char)5]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [2U] [i_4] [i_4] [(unsigned char)6]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_17 [i_0 + 2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)30262)) * (((/* implicit */int) (unsigned char)233)))), (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_2 + 2]))))));
                    arr_18 [i_0 + 2] [i_2 + 1] [i_4] [(short)1] = ((/* implicit */_Bool) var_1);
                }
                arr_19 [22U] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_4] [i_4]))))) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_2 + 2] [i_2 - 2] [(unsigned char)9] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_0 - 2]))))))));
            }
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)235)) - (((/* implicit */int) (_Bool)1))));
                var_19 = min(((unsigned short)46874), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17735))) != (((((/* implicit */_Bool) arr_4 [i_2 + 1] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48354))) : (var_11)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0 + 1] [(unsigned char)12] [i_0 - 2] [i_2 + 1])))))) >= (((arr_12 [(_Bool)1] [i_2] [i_7] [i_8]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_7] [i_2])))))));
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned short) arr_2 [i_7] [i_2 - 1]))) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_7])), (arr_26 [(short)18])))) : (((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [(_Bool)1] [i_0 - 2]))))));
                    arr_30 [(_Bool)1] [7U] [i_7] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_0] [i_0]));
                }
                arr_31 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [(unsigned short)21]))));
            }
            arr_32 [i_2] = arr_16 [i_0] [i_0] [i_0] [i_0] [i_2 - 1] [i_2 - 1];
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) (-(((((/* implicit */_Bool) arr_23 [i_0] [(unsigned short)3])) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (short)-19374))))))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_35 [i_0] [i_9] = ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (signed char i_11 = 4; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        {
                            arr_45 [i_0 - 1] [i_9] [i_10] [i_9] [i_0 - 1] = var_9;
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_11 + 2] [i_11 + 2] [i_11 - 4] [i_11 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_12] [i_10] [(unsigned short)16] [i_0 - 1]))) ^ (31U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)231)) << (((((/* implicit */int) arr_36 [i_0] [7U] [7U] [i_0])) - (96))))))));
                            arr_46 [(unsigned short)19] [i_9] [(unsigned char)3] [(unsigned char)3] [(unsigned char)14] [(unsigned char)3] [(_Bool)0] = ((/* implicit */unsigned short) arr_24 [(unsigned char)15] [i_0] [i_11 + 2] [i_11 + 2]);
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                            arr_47 [7U] [i_11 - 1] [7U] [7U] [(short)16] = (unsigned char)41;
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            var_25 = ((/* implicit */signed char) min((((/* implicit */short) min((((/* implicit */unsigned char) (!(var_6)))), (var_10)))), ((short)-20293)));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_5 [i_13] [i_13]))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0 + 2] [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_0 - 1] [(_Bool)1]))))) ? (((/* implicit */int) arr_15 [(unsigned char)18] [(unsigned char)2] [i_13] [i_0] [i_13] [i_13])) : (((/* implicit */int) min((max((((/* implicit */short) arr_12 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 2])), ((short)-12353))), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)51034))))))))));
        }
    }
    for (signed char i_14 = 1; i_14 < 16; i_14 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((_Bool) var_11))) % (((/* implicit */int) max((((/* implicit */signed char) arr_21 [(signed char)14] [(unsigned char)8] [i_14 + 2])), (arr_43 [i_14] [i_14] [i_14] [(unsigned short)0] [i_14] [i_14]))))))))));
        var_29 = ((unsigned char) min((((/* implicit */unsigned short) arr_23 [(short)7] [i_14 + 2])), ((unsigned short)41604)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 2; i_15 < 10; i_15 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) (signed char)-107);
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_39 [i_15 - 1] [i_15] [i_15]) ? (((((/* implicit */_Bool) arr_52 [i_15])) ? (((/* implicit */int) (unsigned short)23911)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_25 [i_15] [i_15 + 1] [i_15] [i_15]))))))) ? (((/* implicit */int) min((arr_33 [i_15 + 2] [i_15 - 1]), (arr_33 [i_15 - 1] [i_15 - 2])))) : (((/* implicit */int) max(((short)19374), (((/* implicit */short) arr_12 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20] [i_15 - 2]))))))))));
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_6), (var_12)))) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) min(((unsigned short)17736), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) ((short) min(((short)32748), ((short)-19381))))))))));
}
