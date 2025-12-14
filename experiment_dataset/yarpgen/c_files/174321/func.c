/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174321
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2147483622))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [11] [i_0] [i_0])) < (arr_4 [i_1])))), (((((/* implicit */_Bool) (short)-5830)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2567619845U)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [0]))))))) : (min((max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_1])))), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) var_14)), (var_11))))) * (((((((/* implicit */_Bool) -3310083256290162189LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_7))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5845)) ? (var_6) : (var_9))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            {
                arr_13 [i_3 + 2] [i_2] [i_2] = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_2]))) < (((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2])) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2])) ? (arr_14 [i_4]) : (arr_14 [i_3])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((arr_10 [i_4] [i_3] [i_2]), (((/* implicit */unsigned short) var_0))))))) : (((/* implicit */int) ((((/* implicit */int) max((arr_12 [i_2] [i_3] [i_4]), ((_Bool)1)))) < (((/* implicit */int) ((3478125066U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3 - 1] [i_2])))))))))));
                    arr_17 [7LL] [i_3] [i_3 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_12 [i_2] [i_3 + 2] [i_4]))))) / (((((/* implicit */int) (short)32590)) & (((/* implicit */int) arr_11 [i_4]))))))) ? ((~(((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) 3478125083U))))), (((((/* implicit */_Bool) var_10)) ? (var_6) : (var_6)))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3478125041U)) ? (((/* implicit */int) (unsigned short)6077)) : (((/* implicit */int) (unsigned char)123))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_2] [i_3] [15] [3]))))) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 1])) : (((/* implicit */int) ((((/* implicit */int) (short)-13)) < (((/* implicit */int) arr_18 [i_5 + 3] [i_3])))))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((((/* implicit */unsigned int) -1281078078)) >= (816842258U));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((arr_9 [i_5 + 1]) ? (((/* implicit */int) var_5)) : (var_6))))));
                        arr_22 [(unsigned char)4] [i_3] [12LL] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_2]))))) && ((!(((/* implicit */_Bool) 5035184403336558134LL))))));
                    }
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) (short)-5821)) ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 762388338528938666LL))) ? (((long long int) (unsigned short)39111)) : (((/* implicit */long long int) ((arr_12 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_25 [i_2] [15ULL])))))));
                            arr_29 [i_2] [i_2] [i_3 + 1] [i_5] [14LL] [i_7] [i_8 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [(short)1] [(short)1] [(unsigned short)3] [i_8] [i_8] [i_8 - 1])) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)7063)))) : (((/* implicit */int) arr_23 [i_7] [(signed char)12] [i_3] [(_Bool)1]))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_7] [i_3 + 1] [(short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7]))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            arr_32 [i_2] [i_3] [i_5] [i_7] [i_9 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_9])) ^ (((/* implicit */int) arr_10 [(unsigned char)18] [5U] [i_9]))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_23 [(_Bool)1] [i_9 - 2] [i_3 + 2] [i_3 + 2]))));
                            arr_33 [i_3] [13ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5946))) + (17ULL)))) ? (((6369100843772788573ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                            var_25 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7084))) > ((+(3478125033U)))));
                        }
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5833)) ? (4879791704814808588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))))))))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)7066))) : (7620408055030453054LL)))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))))));
                        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)77)) - (74)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 816842259U)))))) : (((arr_9 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1434163157309885934LL)))));
                        var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_31 [(unsigned short)15] [i_3 + 2] [i_5] [i_5] [(unsigned short)16] [i_5 + 3])) : (((/* implicit */int) var_0))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_30 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-30613)))) ? (((((/* implicit */int) (unsigned short)53701)) - (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_34 [i_3 - 1] [i_2])) : (((/* implicit */int) arr_24 [i_2] [i_2] [i_2]))))));
                    arr_38 [i_2] [i_2] [i_3] [i_11 + 1] = ((arr_26 [15U] [i_11 + 1] [i_3 - 1] [i_11 + 1] [(_Bool)1] [i_11 + 1]) > (arr_26 [i_11] [(unsigned char)17] [i_3 - 1] [i_2] [i_2] [i_11 + 1]));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        var_31 *= ((((((/* implicit */_Bool) arr_42 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4579))) : (2939466180937185010ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_27 [i_12]))))));
                        var_32 = ((/* implicit */unsigned char) var_14);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_27 [(signed char)8]))));
                            var_34 += ((/* implicit */unsigned int) ((5035184403336558124LL) % (((/* implicit */long long int) 816842242U))));
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                            arr_47 [(short)18] [i_13] [(signed char)7] [(signed char)7] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((signed char) 1516580973904229578LL)));
                        }
                        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            arr_51 [i_11 + 1] [(unsigned char)9] [i_15] [i_11 + 1] [i_15] [(signed char)7] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_16 [(_Bool)1] [(_Bool)1] [9U] [(_Bool)1]))) != (arr_40 [i_3 + 2])));
                            var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)37))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (var_7)))));
                        }
                        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-7080)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [5] [5])))) << (((/* implicit */int) var_14))));
                        var_38 = arr_25 [i_3 + 1] [i_11];
                        arr_52 [i_2] [i_3] [i_11] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13] [i_11] [i_3 + 1] [i_2] [i_2])) ? (arr_21 [i_11] [i_11] [i_11 + 1] [i_11 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [13U])))))) ? (((((/* implicit */_Bool) arr_24 [i_2] [i_3] [11U])) ? (((/* implicit */int) arr_42 [i_2])) : (((/* implicit */int) arr_23 [i_13] [i_11] [4] [i_2])))) : (((/* implicit */int) arr_27 [i_13]))));
                    }
                }
                arr_53 [i_2] [i_2] = ((/* implicit */unsigned short) 254766156);
                var_39 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2939466180937185006ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_3 - 1] [i_3 + 2] [i_2])) ? (var_9) : (((/* implicit */int) (short)-20005))))) ? (((((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_3 + 1] [i_3] [i_3])) ^ (((/* implicit */int) arr_16 [i_2] [i_2] [(signed char)6] [i_3 + 2])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_30 [i_2] [i_3]))))))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
                arr_54 [13LL] = max((((/* implicit */long long int) max((((/* implicit */int) arr_18 [i_3 - 1] [i_3 + 2])), (var_6)))), (min((((/* implicit */long long int) ((arr_27 [i_3 - 1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))), (max((arr_26 [(_Bool)1] [(short)3] [(_Bool)1] [(short)0] [i_3] [i_3]), (((/* implicit */long long int) arr_39 [i_2] [i_3] [i_2] [i_2] [i_2])))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) 742359168U);
}
