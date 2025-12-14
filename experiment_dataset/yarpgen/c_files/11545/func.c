/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11545
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~((~(var_12)))))), (min((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_12))))), ((~(var_9)))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58594)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (4503530907893760ULL)))) ? ((~(((/* implicit */int) min(((unsigned short)6941), ((unsigned short)58594)))))) : ((~(((/* implicit */int) ((signed char) var_11)))))));
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)58594))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))) ? ((+(((((/* implicit */_Bool) 4503530907893731ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : (14092129765861911009ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 4503530907893760ULL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-17038)) && (((/* implicit */_Bool) (unsigned char)71))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)58587))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                var_18 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_7 [i_1] [16] [16] [i_1]))))));
                arr_9 [i_1] = ((/* implicit */long long int) ((_Bool) arr_0 [i_2 - 3] [i_2 - 4]));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_4 - 3] [i_4] [i_1] [i_1] [i_0 - 1] [i_0 - 1]))));
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))) > (var_4)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))))) && (((/* implicit */_Bool) (~(var_3))))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))) ? ((+((-(var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [(unsigned char)3])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_1])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_1])))))));
        }
        for (int i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((arr_19 [i_0] [i_0]), (arr_19 [i_0 - 1] [i_5])))) : ((~(((/* implicit */int) arr_19 [i_0] [i_5]))))));
            arr_21 [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_5 - 3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : ((~(var_12)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_0 + 2] [i_5 - 1])))) & (((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (var_9) : (var_9)))))));
        }
        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [13U] [i_0 + 1])) ? ((+(((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_0])))))) : (var_2))))));
            arr_26 [(signed char)9] [i_0 + 1] [i_6 - 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((arr_10 [i_0] [16ULL] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0 - 1] [6] [6] [i_0] [(unsigned short)16]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_17 [i_6] [i_6] [i_6] [i_6 + 1]) : (arr_17 [i_0] [i_6] [i_0] [i_6 - 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (short i_8 = 4; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)6941)) : (1782008324)))) != (min((0LL), (((/* implicit */long long int) -164203355))))));
                        var_25 = ((/* implicit */int) (~((~((~(arr_10 [i_8 - 3] [i_8 - 3] [i_7] [(unsigned char)12] [i_8 - 2] [i_8 - 4])))))));
                        var_26 = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_6] [i_0] [i_8]);
                    }
                } 
            } 
            arr_34 [i_6] = ((/* implicit */_Bool) (~((~(((unsigned int) (signed char)127))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_27 = (~(var_3));
                                var_28 = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_12 + 2] [i_12] [i_9] [i_12] [i_0 + 2]))))), (arr_32 [i_0 + 2] [i_10 - 2] [i_12 - 1] [i_12 + 2])));
                                var_29 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(var_3)))) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_52 [i_0] [i_0] [(signed char)6] [i_10] [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_10 + 1])) ? (((/* implicit */int) arr_20 [i_10 + 1] [i_13 - 1])) : (((/* implicit */int) arr_47 [i_10 - 1]))))) ? ((~((~(arr_10 [i_0] [0U] [i_13] [i_0 + 1] [i_13] [0U]))))) : (max(((~(18442240542801657858ULL))), (max((((/* implicit */unsigned long long int) var_13)), (arr_27 [i_13] [i_9] [i_9])))))));
                            var_30 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [20] [i_10 - 2] [20])) : (((/* implicit */int) var_6)))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_13 + 1] [i_13] [i_13 + 1] [i_13]))))) ? (((/* implicit */int) max((arr_50 [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 1]), (arr_50 [i_13] [i_13] [i_13 + 1] [i_13])))) : (((((/* implicit */int) arr_50 [i_13] [i_13] [i_13 + 1] [i_13])) | (((/* implicit */int) arr_50 [i_13] [i_13] [i_13 + 1] [i_13]))))));
                            arr_53 [i_9] [i_10 - 2] &= ((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_50 [i_0] [i_10] [i_13] [i_10])))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 4; i_15 < 19; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-8679801420366351109LL), (((/* implicit */long long int) -2082979232))))) - ((-(arr_11 [i_13] [i_0 - 1] [i_15] [i_13] [8U] [i_9])))));
                            var_33 = min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_0 - 1] [i_13] [i_10 - 2] [i_13 + 1] [i_10 - 1])) / (((/* implicit */int) var_5))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_15 [i_10] [i_10] [i_10 + 1] [i_10 - 1] [12U] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_15 [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 2] [i_10] [i_10 + 1] [(_Bool)1])))) : (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_13] [i_9])))), (((((/* implicit */int) arr_13 [5LL] [i_9] [i_9] [i_13 + 1] [20ULL] [3])) | (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1]))))))));
                        }
                        for (long long int i_16 = 3; i_16 < 18; i_16 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0 + 1] [i_13] [i_13 - 1] [i_16 + 2] [i_16])) ? (arr_33 [6U] [i_0] [i_13] [i_13 - 1] [i_16 + 2] [i_16 - 2]) : (arr_33 [i_0] [i_0] [i_13] [i_13 - 1] [i_16 + 2] [i_16 - 2])))) ? (((/* implicit */int) arr_32 [i_13 - 1] [i_16 - 1] [i_16] [i_16])) : (((((/* implicit */_Bool) arr_7 [i_13 + 1] [i_13 + 1] [i_13] [i_13])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_13 - 1] [i_13 + 1] [1LL] [i_13]))))));
                            arr_59 [i_13] [i_13] [i_10] = ((/* implicit */unsigned long long int) max(((+((+(arr_37 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)-31562), (((/* implicit */short) (_Bool)1))))))))));
                        }
                        for (short i_17 = 2; i_17 < 19; i_17 += 2) 
                        {
                            var_36 -= ((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_13 - 1] [i_9]);
                            arr_62 [i_17 + 2] [i_9] [i_10 - 1] [i_17 + 2] [i_13] [i_13] [i_13 - 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-19632)), (8589672448LL)));
                        }
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~((~(arr_45 [i_10 - 1] [i_9])))))) & (((((/* implicit */long long int) (~(arr_55 [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 1])))) ^ (((((/* implicit */_Bool) -64773655)) ? (23LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_66 [i_0 - 1] [i_0] [i_0] [i_0] [i_9])))) ? ((+(arr_66 [i_0 + 1] [i_0 + 1] [i_10] [i_18] [i_18]))) : (arr_66 [i_0 + 2] [20LL] [i_0] [i_10] [i_10]))))));
                        var_39 = ((/* implicit */unsigned short) ((_Bool) (+(((var_7) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_41 [i_0] [i_0 + 1] [(signed char)14]), (((/* implicit */unsigned short) arr_47 [i_0 - 1])))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */short) min((max((((/* implicit */long long int) arr_23 [i_19 + 2] [i_19 - 1])), (((((/* implicit */_Bool) 2554679956U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-5425517992759588801LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_19 + 2] [i_19 + 2] [i_19 - 1] [i_19 + 1])) ? (var_2) : ((-(((/* implicit */int) var_13)))))))));
        var_42 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_41 [i_19 + 1] [i_19 + 1] [i_19 + 1])) ? (((/* implicit */unsigned long long int) arr_39 [i_19] [i_19] [(unsigned char)7] [i_19])) : (var_9)))))));
    }
}
