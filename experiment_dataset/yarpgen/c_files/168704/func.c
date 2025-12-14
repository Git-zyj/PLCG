/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168704
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_0 [(unsigned short)0]), (arr_0 [i_1])))) ? (((((/* implicit */_Bool) 1399422727)) ? (0U) : (((/* implicit */unsigned int) 268427264)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) >= (min((var_3), (((/* implicit */unsigned int) var_0)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) var_12))))), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))))))))));
                                arr_15 [i_3] [i_3] [(unsigned char)1] [i_3] [(signed char)7] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_5 [9U] [i_1] [i_1]), (arr_1 [i_0])))), (min((((/* implicit */long long int) var_5)), (var_1)))))) & (((unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_9 [11ULL] [11ULL] [i_2] [(unsigned short)12] [(signed char)12] [(unsigned short)4]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_6 + 1]), (arr_17 [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 1]))) : (((((/* implicit */_Bool) -613928945)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92)))))));
                        var_16 += ((/* implicit */unsigned short) min(((short)-9487), ((short)(-32767 - 1))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned int) arr_16 [2U] [i_1] [8U] [8U])))));
                        var_18 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_6] [i_6 - 1] [i_0] [i_6] [i_6])) <= (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))) / (((/* implicit */int) min((arr_8 [i_1]), (((/* implicit */short) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_12 [i_1] [i_5] [i_0] [i_1]))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 12; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52316))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((min((var_3), (((/* implicit */unsigned int) var_4)))) - (1155978818U)))))) : (((((_Bool) -600981454)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)62)))))))))));
                                arr_28 [7] [i_1] [13U] [13U] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [(signed char)1] [(signed char)1] [i_5] [i_7] [i_5]))))) + (((var_8) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5])))))))) || (((/* implicit */_Bool) min((min((arr_14 [(unsigned short)8] [i_1] [(unsigned short)6] [i_8] [i_8]), (((/* implicit */signed char) var_11)))), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(2810609972U))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                }
                var_22 = (~(((long long int) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_11 = 3; i_11 < 20; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_35 [i_12 + 1])))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)120)) | (((/* implicit */int) (short)24743)))) ^ (((/* implicit */int) (!(arr_42 [i_13] [i_13] [i_11])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned short) arr_41 [i_12 + 1])))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_52 [i_11] [i_12] [i_11] [(unsigned char)9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_11] [i_11]))) != (arr_45 [i_14])));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_57 [i_11] [i_12] [i_13] [i_14] [i_14] [i_14] [i_11] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_11)))) >= (((((/* implicit */_Bool) var_9)) ? (arr_36 [i_11]) : (((/* implicit */int) var_11))))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((12280140283037047268ULL) + (((/* implicit */unsigned long long int) var_3)))))))));
                            var_27 &= ((/* implicit */short) ((((/* implicit */int) arr_39 [i_14] [i_13 - 1] [i_12 + 2])) % (((/* implicit */int) arr_46 [9] [i_13 - 1]))));
                            arr_58 [i_11] [13] [(unsigned char)0] = ((/* implicit */signed char) ((((unsigned long long int) var_8)) ^ (var_9)));
                        }
                        var_28 += ((/* implicit */_Bool) arr_47 [i_11 - 3] [i_11 - 2] [i_14] [i_13 + 1]);
                        arr_59 [i_11] [i_11] [i_14] [(_Bool)1] = ((/* implicit */unsigned char) arr_35 [i_11 - 3]);
                        arr_60 [i_11] [i_11] [i_11] [14U] [i_13] [4] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11] [(signed char)16] [i_11]))) | (var_9))) * (((/* implicit */unsigned long long int) arr_45 [i_12 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) + (((/* implicit */int) (short)-10235))))) ? (arr_41 [i_13 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_11] [i_17])) ^ (((/* implicit */int) arr_44 [i_11] [i_17]))));
                        var_31 = ((/* implicit */int) (~(((unsigned long long int) var_5))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) arr_55 [i_12] [i_12] [(short)9] [i_12] [i_12] [i_12 - 1])), (min((((/* implicit */long long int) arr_54 [(signed char)0] [(unsigned short)14] [11LL] [(short)0] [(unsigned short)5] [i_18])), (var_1)))))));
                        arr_65 [i_11] [(short)20] [i_11] [(_Bool)1] [(_Bool)1] [i_18] = ((/* implicit */_Bool) (+(arr_45 [i_12 + 2])));
                        arr_66 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((var_3) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12 + 1] [i_13 + 3] [18ULL]))))) | (min((((/* implicit */unsigned int) (short)32145)), (2129568640U)))));
                    }
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)15876)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3901))))))));
                }
            } 
        } 
    } 
}
