/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10706
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
    var_18 = ((/* implicit */unsigned int) (signed char)-11);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1 - 2] [i_0])))))));
            var_19 *= ((/* implicit */unsigned char) var_6);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
        arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (short)-6289))), (var_11)))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_16)), (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))))))));
        var_20 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned int) 8306028255509996821LL);
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), ((~((+(((long long int) (signed char)57))))))));
            var_23 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1])) ? (var_1) : (268431360U))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)253))))) : (((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (arr_13 [i_3] [i_2] [i_2]) : (arr_11 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (((((/* implicit */_Bool) (signed char)84)) ? (14195279721596502558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14803)))))));
        }
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            arr_17 [i_4 - 1] [i_2] = 4251464352113049046ULL;
            var_25 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)32741)))))), (((var_15) / (((((/* implicit */_Bool) (short)16592)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)38))))))));
        }
        arr_18 [i_2] = ((/* implicit */unsigned char) arr_15 [i_2] [i_2]);
        var_26 = ((((/* implicit */_Bool) var_8)) ? (max((2600781115563339606ULL), (((/* implicit */unsigned long long int) (short)32741)))) : (((/* implicit */unsigned long long int) var_14)));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((max((arr_23 [i_5 - 2] [i_5 + 1] [i_5 + 2] [i_5]), (((/* implicit */unsigned short) arr_14 [(short)5] [i_2])))), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_17)))))))))));
                    arr_25 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 1]))) : (var_13))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16592)) ? (((/* implicit */int) arr_24 [i_6] [i_5] [i_2])) : (((/* implicit */int) (short)1700))))))))));
                    var_28 *= min((((((/* implicit */_Bool) 13127558493260282528ULL)) ? (max((((/* implicit */unsigned int) arr_20 [i_5] [i_5 - 1] [i_5 + 1])), (3647302640U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)2))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_5 - 2] [i_5 + 1] [i_5 + 1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                arr_35 [i_10] [i_10] [(unsigned char)2] [i_10] = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_26 [i_7] [18] [i_10])))))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (max((((/* implicit */unsigned int) arr_24 [i_7 - 1] [i_8] [i_8 - 1])), ((-(var_13))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (short)-11927)) ? (var_13) : (arr_15 [i_9] [i_9]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) arr_24 [i_10] [i_8 + 1] [i_7 + 1])) : (((/* implicit */int) (short)-9811)))))))));
                                var_30 = ((/* implicit */short) max(((+((+(var_1))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) * (var_13)))));
                            }
                        } 
                    } 
                    arr_36 [i_8] [i_8] [i_7 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_8 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (arr_13 [i_7 - 2] [16LL] [(signed char)20]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3630445802U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32742)) | (((/* implicit */int) arr_24 [i_2] [i_7] [i_8]))))) : (var_1)))));
                    var_31 = ((max((var_9), (((/* implicit */unsigned long long int) (short)-1701)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_2] [i_7])) : (((/* implicit */int) arr_28 [i_2])))) : (((/* implicit */int) var_12))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
                        {
                            {
                                arr_42 [i_2] [i_7] [i_7] [i_11] [i_12 - 1] |= ((/* implicit */unsigned long long int) (~(((long long int) var_3))));
                                var_32 += ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_14 [i_8 - 1] [i_7 - 2]), (((/* implicit */unsigned char) (_Bool)1))))) << (((((((/* implicit */_Bool) (short)-1707)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))) - (4294967280U)))));
                            }
                        } 
                    } 
                    arr_43 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((signed char) arr_15 [i_2] [(signed char)0])))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_22 [i_2] [i_7 + 1] [i_8 - 1])))))));
                }
            } 
        } 
    }
    for (short i_13 = 2; i_13 < 11; i_13 += 4) 
    {
        var_33 = ((/* implicit */short) (((((+(((/* implicit */int) arr_16 [i_13 - 2] [i_13 - 1])))) + (2147483647))) << ((((((!(((/* implicit */_Bool) 12513002231996333076ULL)))) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32741))))) - (32741ULL)))));
        arr_47 [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_14), (((/* implicit */unsigned int) (signed char)118)))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-13039)) ^ (((/* implicit */int) arr_46 [i_13] [i_13 + 2])))))))) ? ((+(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)-90)))))) : (((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) max((arr_24 [i_13] [i_13] [(short)3]), (((/* implicit */short) var_0))))) : (((/* implicit */int) arr_23 [i_13] [i_13] [i_13] [i_13 + 3]))))));
    }
    var_34 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54974)))))) ? (var_13) : (var_14))))));
    var_35 ^= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_14 = 4; i_14 < 18; i_14 += 3) 
    {
        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_14 + 2] [i_14 - 3]))));
        var_37 |= max((((/* implicit */unsigned int) (-(max((-332545433), (((/* implicit */int) (signed char)84))))))), (var_5));
        var_38 = ((/* implicit */unsigned char) ((unsigned long long int) 9146240503453677961ULL));
        var_39 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - ((~(((/* implicit */int) arr_28 [i_14 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 - 3] [i_14])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_51 [i_15] [i_15])))) : (((/* implicit */int) var_6))));
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_14 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_14 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12)))))));
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_42 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_48 [i_14 - 1] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2073023898)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) 2073023898)) : (var_14))))));
                    }
                } 
            } 
            arr_56 [i_14] [i_15] [i_14] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_15])))))));
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) -2073023898))));
        }
    }
}
