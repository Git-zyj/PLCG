/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18174
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0]))))) / (arr_0 [i_0 + 1])))));
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) 4389456576512ULL);
        var_11 = ((/* implicit */unsigned long long int) (short)-17995);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) (-(((unsigned long long int) var_1))));
            arr_8 [i_0] = ((/* implicit */unsigned int) min((arr_0 [i_0 + 3]), (min((arr_0 [i_0 + 3]), (var_4)))));
            arr_9 [i_1] &= ((/* implicit */signed char) (~(max((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 2]))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                var_13 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)-17995)) + (2147483647))));
                arr_15 [i_0] [i_0 + 2] [i_0] [i_0] = (-(((/* implicit */int) (short)17989)));
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_14 = ((/* implicit */int) arr_5 [i_0] [(short)12] [(short)12]);
                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_11 [i_0 + 3] [i_0 + 3] [i_4])));
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 264033112U)) ? (((/* implicit */int) arr_11 [i_0 + 2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_2 - 1] [i_2 - 1]))));
            }
            arr_18 [i_2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_21 [13U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1]))));
                arr_22 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_0 + 1]))));
                arr_23 [i_0] [i_0] [i_0] [17] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 2])) ? (arr_0 [i_0 + 3]) : (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5]))));
                var_17 |= ((short) arr_20 [i_5]);
            }
            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                arr_26 [i_0] [(short)15] &= ((/* implicit */unsigned int) arr_17 [i_0] [i_2] [i_0] [i_6 - 1]);
                var_18 = ((/* implicit */unsigned short) arr_17 [i_0] [i_2] [i_2 - 1] [i_6]);
                arr_27 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)13559))))) : (arr_4 [i_0 + 3])));
                arr_28 [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) (((_Bool)0) ? ((~(((/* implicit */int) arr_6 [i_0] [i_2] [i_6 + 1])))) : (((int) (unsigned short)32768))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (unsigned short)34908))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0 + 3] [i_0 + 3] [i_2] [i_2] [i_8] [i_2 + 1])) ? (((unsigned long long int) (unsigned char)146)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_17 [i_7] [i_2 + 1] [i_7] [i_2]))))))));
                    arr_36 [19ULL] [19ULL] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1))));
                    arr_37 [i_0] [i_2] [i_8] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_31 [i_0 - 1])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_7])) ? (arr_7 [i_0 + 2] [i_2 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_21 = ((/* implicit */long long int) arr_5 [i_2] [i_7] [i_9]);
                    arr_40 [i_2] [i_9] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)508)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0]))) : (arr_5 [i_9] [i_7] [i_7]))));
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        arr_44 [(short)4] [i_2] [i_7] [i_9] &= ((/* implicit */unsigned int) arr_31 [i_0]);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */_Bool) (short)-10068)) ? (((/* implicit */int) (short)-509)) : (((/* implicit */int) arr_43 [(unsigned char)10])))))))));
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)119))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))))) : (var_4)));
                }
                for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 3) 
                {
                    arr_48 [i_0] [i_2] [i_7] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_11] [i_11]))));
                    var_24 = ((/* implicit */int) var_2);
                }
            }
            var_25 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned char)119))) | (((/* implicit */int) var_7))));
        }
        for (unsigned short i_12 = 3; i_12 < 20; i_12 += 2) 
        {
            arr_52 [i_0] [i_12] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (max((var_8), (((/* implicit */unsigned long long int) arr_50 [i_0] [i_12])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)206)))))));
            arr_53 [i_0] [i_0 - 1] [14ULL] |= ((/* implicit */short) arr_5 [i_0] [i_12] [i_12]);
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (arr_4 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))))), (((arr_4 [i_0 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
            var_27 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_12 - 3] [i_0]))))) - ((+(((unsigned long long int) (unsigned char)7))))));
        }
        for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 3) 
        {
            var_28 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_16 [i_13 + 2] [i_0 + 3])) ? (((/* implicit */int) arr_16 [i_13 - 1] [i_0 + 2])) : (((/* implicit */int) arr_16 [i_13 + 2] [i_0 + 3]))))));
            var_29 = ((unsigned char) ((unsigned int) ((short) var_6)));
            var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) ((264033112U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)16320)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_46 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_3))))));
            var_31 = ((/* implicit */unsigned short) min((arr_14 [i_0]), (((/* implicit */short) min((((signed char) (short)-17990)), (((/* implicit */signed char) ((_Bool) var_7))))))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_13])))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_14 = 3; i_14 < 19; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) max((arr_39 [i_0] [i_15]), (((/* implicit */int) ((((/* implicit */int) arr_61 [i_15] [i_15] [i_15])) >= (((((/* implicit */_Bool) (unsigned short)64536)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)52862))))))))))));
                    var_34 = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            var_35 &= ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-103));
            arr_68 [i_16] [i_17] = ((/* implicit */int) var_1);
            var_36 = ((/* implicit */unsigned short) ((long long int) 14488960060720364638ULL));
        }
        for (unsigned short i_18 = 3; i_18 < 21; i_18 += 4) 
        {
            arr_71 [i_18] = ((/* implicit */short) (-(arr_7 [i_16] [i_18] [i_18 - 2])));
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_29 [i_18 - 1] [i_16] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_2 [i_16])) ? (arr_24 [(_Bool)1] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            arr_72 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_18 - 3] [i_18 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_14 [i_18])))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
        {
            arr_75 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_19 + 1] [i_19 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_61 [i_19] [i_19 + 1] [i_19 + 2]))));
            var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-17983))));
        }
        for (int i_20 = 1; i_20 < 18; i_20 += 2) 
        {
            arr_80 [i_20] = ((unsigned char) ((_Bool) var_2));
            arr_81 [i_16] [i_20] [i_20] = ((short) arr_6 [(_Bool)1] [i_20 + 3] [i_16]);
        }
        arr_82 [i_16] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_16]))));
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217727)) ? (18446739684252975081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65511)))))) ? (((/* implicit */int) ((unsigned short) (~(3277189675246449017ULL))))) : (((int) max((3277189675246449017ULL), (((/* implicit */unsigned long long int) var_1)))))));
    var_40 |= ((/* implicit */short) max((var_0), (((unsigned long long int) ((1012218727U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))))));
}
