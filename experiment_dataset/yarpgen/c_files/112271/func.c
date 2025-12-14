/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112271
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */long long int) (-(arr_1 [i_0])))) ^ (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (-3728378184433994694LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((~(arr_1 [i_0]))) : ((~(((/* implicit */int) (_Bool)1))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-17653)) : (((/* implicit */int) arr_3 [(_Bool)1] [i_0]))))));
            var_15 = ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(_Bool)1])) ? (2301339409586323456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))));
                            var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (9223372032559808512LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_4] [4])))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (134209536LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_18 [i_5] [i_0] [14U] = ((/* implicit */long long int) ((unsigned char) (~(var_2))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_2)))) ? (((var_14) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29266))))) : (((long long int) var_10))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (var_4)))) << (((1016) >> (6ULL)))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (134209508LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0])) : (arr_1 [i_0]))))));
            }
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((-1036243527319092200LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))));
            arr_24 [10ULL] [10ULL] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [10] [8] [10]))))) - (((arr_16 [i_0] [i_5] [2LL]) ? (9223372035781033984ULL) : (9223372035781033977ULL)))));
            arr_25 [i_0] [i_0] [(unsigned char)16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 18446744073709551586ULL))) >> (((((1036243527319092223LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-18835))))) - (1036243527319073368LL)))));
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            arr_30 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_11 [i_7] [i_0] [i_0] [i_0]))) >> (((/* implicit */int) ((_Bool) 18446744073709551610ULL)))));
            var_20 -= ((/* implicit */short) (-(((/* implicit */int) ((5804844696097447708ULL) < (((/* implicit */unsigned long long int) arr_28 [(unsigned char)16] [i_0] [(unsigned char)16])))))));
            arr_31 [10ULL] |= (~(((/* implicit */int) (_Bool)1)));
        }
        for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((short) ((arr_16 [i_0] [i_0] [(_Bool)1]) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))));
            var_22 = ((/* implicit */_Bool) ((long long int) (+(var_3))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (signed char i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15062814104815096475ULL))))) : (((/* implicit */int) ((_Bool) var_2)))));
                        var_24 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 4796539302300393467LL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_38 [i_0] [i_9] [(unsigned char)5]))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)-21878))) ? (((/* implicit */unsigned long long int) (+(arr_19 [(unsigned short)8] [(short)4] [i_11] [i_11])))) : (((unsigned long long int) var_14))));
            arr_43 [i_0] = ((/* implicit */unsigned short) (!(((_Bool) arr_41 [i_0]))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (12ULL) : (((/* implicit */unsigned long long int) arr_1 [i_11]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-253))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 3413502773U)) : (arr_37 [(unsigned short)1] [6ULL] [i_0] [(signed char)0]))))))));
        }
        var_27 ^= (((!(((/* implicit */_Bool) var_14)))) ? ((-(((/* implicit */int) (signed char)111)))) : (((/* implicit */int) ((_Bool) 14428596301614376991ULL))));
    }
    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)176))))) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_32 [i_13] [i_13] [i_15])))) : (max((var_9), (((/* implicit */unsigned long long int) var_0))))))));
                        arr_56 [i_12] [(_Bool)1] [i_14] [i_14] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((long long int) var_9)), (((/* implicit */long long int) ((unsigned char) var_10)))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)4871))))) ? (((4850976634387524530ULL) + (14428596301614376991ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (var_1)))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_12] [9ULL])), (var_2)))))))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            for (long long int i_17 = 1; i_17 < 8; i_17 += 4) 
            {
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647LL)) ? (6705485692641199676LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10479)))))) ? (((/* implicit */unsigned long long int) (~(min((var_14), (((/* implicit */long long int) (unsigned char)15))))))) : ((((~(arr_4 [i_12]))) ^ (min((2197949513728ULL), (((/* implicit */unsigned long long int) arr_42 [i_12])))))))))));
                    arr_62 [i_12] [i_16] [(_Bool)1] [i_17 + 2] = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) 33554400)), (-1LL)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    {
                        var_31 = min((((max((var_12), (((/* implicit */long long int) (_Bool)1)))) << (((((/* implicit */int) max((((/* implicit */signed char) arr_64 [i_18] [i_18])), (arr_48 [i_18] [i_18])))) - (66))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (0LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_40 [i_18] [i_18]))))))));
                        var_32 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) ((int) (_Bool)1))), (max((var_13), (((/* implicit */long long int) (signed char)(-127 - 1))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 3) 
    {
        arr_72 [i_21] = (-(((/* implicit */int) ((_Bool) (unsigned short)28100))));
        var_33 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_71 [i_21])) * (var_9))) / (((/* implicit */unsigned long long int) ((long long int) var_11)))));
        arr_73 [i_21] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)3300)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))));
    }
    for (short i_22 = 1; i_22 < 14; i_22 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_23 = 4; i_23 < 11; i_23 += 4) 
        {
            for (int i_24 = 0; i_24 < 15; i_24 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((short) (~(min((var_2), (((/* implicit */long long int) var_11))))))))));
                    var_35 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) (short)7219)), ((+(((/* implicit */int) (unsigned char)82))))))), (3811428331464606341LL)));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) -3811428331464606318LL)), (arr_4 [i_22]))) - (min((33554432ULL), (((/* implicit */unsigned long long int) (signed char)-103)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) == (-134209538LL))), ((((_Bool)1) && (((/* implicit */_Bool) var_11))))))))));
        var_37 += max((min((((/* implicit */unsigned long long int) min((var_2), (arr_74 [i_22])))), (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_42 [(unsigned char)4])), (arr_20 [i_22 - 1])))), (max((var_2), (var_13)))))));
        arr_81 [i_22] = ((/* implicit */int) ((unsigned long long int) (((((~(((/* implicit */int) var_10)))) + (2147483647))) >> (((((((/* implicit */_Bool) 2251799813677056LL)) ? (((/* implicit */unsigned long long int) var_14)) : (14401195311811889680ULL))) - (5474380983465470873ULL))))));
        var_38 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (var_1)))) ? (((arr_27 [i_22 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)153)))) : (((/* implicit */int) ((_Bool) arr_28 [i_22] [16ULL] [(_Bool)1])))))), (max((min((((/* implicit */long long int) (unsigned short)8394)), (-4611686018427387904LL))), (((/* implicit */long long int) ((signed char) arr_78 [2LL] [(_Bool)1] [i_22]))))));
    }
    var_39 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned long long int) var_14)), (var_4))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    var_40 += ((/* implicit */long long int) ((min((max((((/* implicit */long long int) (_Bool)0)), (-1LL))), (((/* implicit */long long int) ((signed char) 0ULL))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_4) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) : (((var_13) - (13LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_25]))) : (arr_83 [i_25])))) ? (((/* implicit */int) ((unsigned short) 10115330208644801655ULL))) : (((((/* implicit */_Bool) 17701655897855853965ULL)) ? (((/* implicit */int) (unsigned short)16727)) : (((/* implicit */int) (unsigned short)65535))))));
        arr_84 [19ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_82 [(signed char)11])) : (var_1))) : (((/* implicit */int) ((signed char) arr_82 [i_25])))));
    }
    var_42 &= ((/* implicit */signed char) ((((long long int) (unsigned short)57140)) * (min(((-(var_13))), (((/* implicit */long long int) max((var_5), (var_0))))))));
}
