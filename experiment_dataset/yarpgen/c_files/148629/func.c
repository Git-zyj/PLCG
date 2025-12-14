/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148629
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [3LL] = ((/* implicit */signed char) arr_2 [(signed char)15]);
        arr_5 [(short)0] [(short)0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_20 = (unsigned short)20608;
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1 + 1]))) | (arr_8 [i_1 - 1] [i_1 - 1])));
            var_21 = arr_8 [i_0] [0];
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0]);
                    arr_16 [i_0] [(unsigned char)8] [i_1 + 1] [i_1] [i_0] = var_10;
                }
                for (short i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_23 ^= ((/* implicit */unsigned short) (-(var_5)));
                        arr_23 [i_0] [i_0] [(unsigned short)11] [i_4 + 1] [i_1] [i_4] [(short)16] = ((/* implicit */short) 87396051U);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_19 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_1])) : ((~(var_9)))));
                        var_25 = ((/* implicit */unsigned char) (-(var_15)));
                        var_26 = (~(((/* implicit */int) arr_20 [i_2 - 1] [(short)9] [i_1] [i_1 + 1] [i_1] [i_0] [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_28 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) (unsigned char)49))));
                        arr_29 [i_1] [i_1] = ((((((/* implicit */_Bool) (short)28826)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))) + (var_9));
                        arr_30 [i_2] [i_4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 1130679101529573805LL)) && (((/* implicit */_Bool) (unsigned char)35)))))));
                        arr_31 [i_0] [2ULL] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)207)) ^ (((/* implicit */int) (short)19335))))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_34 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [20] [(short)17]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22938)) << (((arr_13 [i_0] [7ULL] [(unsigned short)5] [i_1 + 1] [i_1]) - (8696795348276200222ULL))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [20] [(short)17]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22938)) << (((((arr_13 [i_0] [7ULL] [(unsigned short)5] [i_1 + 1] [i_1]) - (8696795348276200222ULL))) - (7824547552964360256ULL)))))))));
                    arr_35 [i_1] [i_1 + 1] [(short)8] [i_7] = ((/* implicit */unsigned short) (-(-310787675)));
                }
                var_27 = ((/* implicit */int) ((unsigned char) ((arr_18 [i_1] [i_0] [12LL] [i_0] [i_0] [12LL]) != (((/* implicit */long long int) ((/* implicit */int) var_19))))));
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    for (short i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((3176684221086791856LL) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            arr_41 [(short)20] [i_1] [i_1] [12LL] [i_1] = 7294307386888442501LL;
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                arr_45 [i_10 - 1] [i_1] [i_1] [(short)14] = ((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [(signed char)13] [(signed char)13] [i_1 - 1] [i_1])) | (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0])));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 ^= ((/* implicit */short) (((-(((/* implicit */int) var_0)))) | (((/* implicit */int) ((_Bool) 6272025915678635265LL)))));
                    var_30 = (-(((/* implicit */int) ((signed char) var_14))));
                    arr_48 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_11] [i_11] [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_1] [i_10 - 1] [i_1])))));
                    arr_49 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_1] [i_1] [(_Bool)1] [i_1 - 1]))));
                }
            }
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                arr_53 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1 + 1] [i_1] [16LL]))));
                arr_54 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) arr_26 [i_0] [i_1 - 1] [i_0] [i_12] [i_0]));
                var_31 = ((/* implicit */unsigned short) ((arr_19 [i_0] [i_0] [i_0] [(signed char)5] [(signed char)14] [i_0]) == (((unsigned long long int) var_0))));
            }
        }
        for (unsigned short i_13 = 1; i_13 < 21; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    {
                        var_32 += ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_3)), (((arr_57 [i_13 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [(short)0] [(signed char)4] [6LL] [0])))))))));
                        var_33 += ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((long long int) min((((/* implicit */int) arr_38 [i_0] [i_0] [(short)12] [i_0] [i_15])), (var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        arr_63 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [i_13 + 1] [i_13 - 1])), (max((var_12), (((/* implicit */unsigned long long int) var_17))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15680))))) ? (((/* implicit */int) arr_12 [i_0] [i_13 + 1] [i_15])) : (((((/* implicit */_Bool) -310787669)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_44 [8U] [i_13] [i_13] [i_13])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_66 [2U] [2U] [2U] [2U] [i_13] = ((/* implicit */long long int) (-(arr_13 [3U] [(unsigned char)10] [i_14] [14U] [i_13])));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59616)) ? (((/* implicit */int) arr_7 [i_0] [i_13] [i_16])) : (((/* implicit */int) var_11))))), (max((var_6), (((/* implicit */long long int) arr_24 [i_15] [i_16]))))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)96))))), (max((arr_57 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))))) : (((unsigned long long int) ((-1130679101529573805LL) & (arr_8 [i_0] [i_0]))))));
                        }
                        arr_67 [i_13] = ((/* implicit */unsigned long long int) var_17);
                    }
                } 
            } 
            var_35 = max((((var_18) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)25349)) || (((/* implicit */_Bool) -3588811359070194324LL)))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))))));
            var_36 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)185));
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
        var_38 += ((/* implicit */short) min(((unsigned char)207), ((unsigned char)229)));
        arr_71 [i_17] = ((/* implicit */short) (-(min((((/* implicit */int) ((signed char) (short)-27916))), ((~(((/* implicit */int) var_11))))))));
        arr_72 [i_17] [i_17] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (arr_57 [i_17]))) != (((/* implicit */unsigned long long int) ((-3159733444858545680LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_17] [(unsigned char)20] [i_17])) && (((/* implicit */_Bool) arr_14 [i_17] [i_17] [i_17])))))))))));
        arr_73 [i_17] [i_17] = ((/* implicit */unsigned char) arr_15 [(short)1] [(short)1] [(unsigned short)14] [(unsigned short)14] [i_17] [i_17]);
    }
    var_39 -= ((/* implicit */int) ((long long int) var_13));
    var_40 ^= ((/* implicit */long long int) var_16);
    var_41 = ((/* implicit */long long int) (((-((-(var_7))))) > (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((var_18) == (var_15)))))))));
}
