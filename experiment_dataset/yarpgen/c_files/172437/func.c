/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172437
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
    var_20 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) var_15))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) min((arr_4 [i_2]), (arr_8 [i_0 + 2] [i_0] [i_0 + 2] [10U]))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_11 [i_0 + 2] [i_1] [i_1] [i_3 - 1] [i_4] [i_1]))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)43611))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (var_13))))));
                    }
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((var_3) > (((/* implicit */int) max((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 2] [(unsigned short)5] [i_0]), (arr_0 [i_0 - 1])))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((unsigned short) arr_1 [(unsigned short)8] [i_1])), (((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_5] [i_5])) > (((/* implicit */int) (unsigned short)4))))))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2]))))) ? (((/* implicit */int) min((arr_11 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_10 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2])))) : (((/* implicit */int) max((arr_10 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2]), (((/* implicit */unsigned short) arr_1 [i_0 + 2] [i_0 + 2])))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)13201)) << (((min((((/* implicit */int) var_10)), (-1705755504))) + (1705755520))))), (((arr_13 [i_0 - 1]) << (((arr_13 [i_0 + 2]) - (1103272397))))))))));
                    var_28 = ((/* implicit */short) var_4);
                }
            }
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_29 = ((/* implicit */int) ((_Bool) arr_5 [i_6] [i_7]));
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_19 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_6] [i_0] [0ULL])))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_20 [(_Bool)1] [i_1] [i_6] [i_7])), ((short)5470)))))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)24931)) ? (max(((+(((/* implicit */int) (unsigned short)56435)))), (((((/* implicit */_Bool) (unsigned short)43477)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)43493)))))) : (((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((1971303197), (((/* implicit */int) (unsigned char)148))));
                        var_33 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)43477));
                    }
                }
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) 6955699967804183540ULL))));
            }
            for (int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                arr_26 [i_0] = ((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [12ULL] [i_1] [i_0 + 2])) : (arr_13 [11]))), (-1971303192))));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_0))))))));
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)80)))))));
                /* LoopSeq 1 */
                for (int i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    arr_29 [i_0] [i_0] [i_0] [i_1] [i_9] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_4 [3ULL]), (arr_4 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */short) (~((-(((unsigned long long int) 2147483647))))));
                        arr_32 [i_0] [(_Bool)1] [(_Bool)1] [i_10 - 2] [(_Bool)1] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_9] [i_10] [i_11]))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (var_6)));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_0 + 2] [i_10 + 1]))));
                        var_40 = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)43458))));
                        var_41 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) -1971303197))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)2]))) ^ (max((((/* implicit */unsigned long long int) arr_10 [i_0] [8U] [i_9] [i_10 + 3] [i_9])), (9654033203006620916ULL)))))));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (arr_14 [i_12] [i_10] [i_0])))) && (((/* implicit */_Bool) arr_19 [5] [i_10 + 2] [i_9] [i_10]))))), (((((/* implicit */_Bool) arr_35 [i_10 + 3] [i_9] [i_9] [(unsigned char)7] [i_0 - 1] [(unsigned char)7] [i_9])) ? (((/* implicit */int) arr_34 [i_10 + 2] [i_10 + 2] [i_9] [i_10] [i_0 - 1] [i_12] [9U])) : (((/* implicit */int) arr_15 [i_10 + 3] [i_12] [i_12] [i_1] [i_0 + 1] [i_12])))))))));
                    }
                }
                var_43 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)43519)))) ^ (((((/* implicit */_Bool) (unsigned short)43483)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)50419))))));
            }
            var_44 = ((/* implicit */_Bool) min((((min((-1513135668), (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) arr_19 [4] [4] [11ULL] [10U])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) ((unsigned short) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (~(((int) ((_Bool) arr_20 [i_0] [i_0] [i_0] [i_0]))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            var_46 *= ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (((int) (unsigned char)32)) : ((+(1971303196)))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-3523)) : (((/* implicit */int) (unsigned short)60824))));
                        var_48 = max((((/* implicit */int) (unsigned short)17599)), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))))));
                        var_49 = ((/* implicit */int) max((var_49), ((-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_18 [i_0] [i_0])), ((unsigned short)43458)))) ? (((/* implicit */int) (unsigned short)22058)) : (((/* implicit */int) arr_0 [i_0 + 2]))))))));
                        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)18))) ? (min((((/* implicit */int) var_0)), (-1))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_15] [i_14] [i_0])), (arr_33 [i_0 + 1] [i_0 + 1] [12U] [i_14] [i_15] [i_15]))))));
                    }
                } 
            } 
            arr_43 [i_0] [i_13] = ((/* implicit */_Bool) arr_21 [i_13] [3]);
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_13] [6ULL] [i_0] [i_0 + 2] [i_0 + 1])) >= (((/* implicit */int) (unsigned short)65535))));
        }
        var_52 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)43458)) > (((/* implicit */int) (_Bool)0))));
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_18 = 4; i_18 < 8; i_18 += 1) 
            {
                var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) max((1309088148), (((/* implicit */int) var_8)))))))))));
                var_54 = ((/* implicit */unsigned int) ((unsigned short) 1309088148));
            }
            var_55 = max(((~(((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_17]))) <= ((-(arr_35 [i_17] [i_17] [(unsigned char)7] [i_17] [i_16] [i_16] [i_16])))))));
            var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1971303198)) ? (((/* implicit */int) ((unsigned short) 1309088148))) : (arr_13 [i_16])));
        }
        for (int i_19 = 0; i_19 < 10; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_20 = 2; i_20 < 8; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 2; i_21 < 8; i_21 += 4) 
                {
                    for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) arr_27 [i_16 - 1] [i_19] [i_20 - 2] [i_21 - 2]))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))), (arr_52 [i_20 + 1] [i_21 + 2])))));
                            var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)145)), ((unsigned short)65532)))) ? (max((((/* implicit */int) min((((/* implicit */short) arr_22 [i_22] [i_22] [i_22] [i_22] [(_Bool)1] [i_16 - 1])), (var_19)))), (((int) 2147483647)))) : (((/* implicit */int) arr_1 [i_16] [i_16 - 1]))));
                        }
                    } 
                } 
                var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) var_13))));
            }
            for (unsigned short i_23 = 3; i_23 < 9; i_23 += 1) /* same iter space */
            {
                var_60 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_37 [(_Bool)1] [(_Bool)1])))))))));
                arr_63 [i_16] [i_19] [i_19] [i_16] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_13 [i_16 - 1]), (var_2)))), ((-(min((((/* implicit */unsigned long long int) 1971303196)), (14096096195449990225ULL)))))));
                var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) var_10))));
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (int i_25 = 1; i_25 < 7; i_25 += 4) 
                    {
                        {
                            arr_70 [6U] [6U] = (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_48 [i_16 - 1] [i_19] [8U]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [6] [i_19] [6]))));
                            var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_3 [3U])))))))))));
                            var_63 = ((/* implicit */unsigned char) (-(max((arr_35 [i_23 + 1] [(_Bool)1] [i_25] [(_Bool)1] [i_25] [i_25] [8]), (((/* implicit */unsigned int) min((((/* implicit */int) arr_55 [i_24] [i_19] [i_24])), (arr_62 [i_19] [i_24] [i_25]))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_26 = 3; i_26 < 9; i_26 += 1) /* same iter space */
            {
                var_64 |= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) 102036462)), (max((arr_37 [i_16] [i_19]), (arr_52 [i_16] [(_Bool)1]))))));
                var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) min((arr_21 [i_16] [i_26]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4)) >= (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_18))))))))))));
            }
            arr_73 [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_16 - 1] [i_16 - 1]))));
        }
        for (short i_27 = 0; i_27 < 10; i_27 += 2) 
        {
            arr_76 [i_27] [i_27] = ((/* implicit */_Bool) max(((unsigned short)3), (((/* implicit */unsigned short) var_4))));
            arr_77 [i_16] [i_16 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)46887)) : (((/* implicit */int) arr_33 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1]))))) / (var_13)));
        }
        var_66 = ((/* implicit */unsigned short) min((var_66), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)31522)) == (((/* implicit */int) (unsigned char)226))))) - (16))))));
        var_67 = ((/* implicit */_Bool) max((var_67), (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_2 [4U]))))))));
    }
}
