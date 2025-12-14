/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146898
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
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) arr_4 [16])) ? (5516503672479490324LL) : (arr_4 [(signed char)5]))), (((/* implicit */long long int) ((short) 1098637807667666568LL)))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_7))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_14 *= ((/* implicit */short) ((long long int) arr_3 [i_0] [i_1]));
                    var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (arr_7 [i_0] [(_Bool)1] [i_1] [i_0]))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) var_7))))), (((long long int) min((var_4), (((/* implicit */long long int) (unsigned char)33)))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_16 = ((/* implicit */short) ((unsigned short) arr_5 [i_1] [i_3]));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [13LL] [i_1] [i_0]);
                    var_17 |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_3])) % (((((/* implicit */int) var_7)) ^ (var_8)))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((var_3) ^ (((/* implicit */unsigned long long int) -1098637807667666569LL)))) | (((/* implicit */unsigned long long int) ((6141475740831251959LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                                var_19 = ((/* implicit */signed char) -8192);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((1202145995704290762LL) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) <= (1202145995704290762LL)))))));
                                var_21 = ((/* implicit */_Bool) (-((-(270215977642229760LL)))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 2; i_6 < 15; i_6 += 1) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1202145995704290762LL)) ? (arr_13 [i_6] [i_6] [i_6 + 2] [i_6 - 1]) : (arr_13 [i_1] [i_1] [i_6 + 1] [i_6 - 1])))) / (((long long int) max((3758096384U), (((/* implicit */unsigned int) var_8)))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [4] [i_6]))) : (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (arr_16 [i_1] [i_6]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_6] [(signed char)9] [i_6] [i_6 + 2] [i_6])) ? (((/* implicit */int) arr_0 [i_6 - 2])) : (((/* implicit */int) arr_18 [14U] [(unsigned short)10]))))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_24 += ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [12])) && (((/* implicit */_Bool) arr_20 [i_0] [i_1] [(unsigned short)6]))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */_Bool) arr_19 [i_9] [i_8 + 1] [i_8 - 3] [i_8 + 1])) && (((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (short)16352))))))));
                                var_27 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)88)) : ((+(762713017))));
                                var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) & (-80374446)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_1])) ? (((/* implicit */int) arr_18 [i_7] [i_1])) : (((/* implicit */int) var_2)))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            {
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((unsigned short) (short)3814))) : ((-(((/* implicit */int) (short)-24603))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_27 [2LL] [i_10]) >> (((((/* implicit */int) var_2)) - (36)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_10] [(unsigned char)12] [i_10] [i_10])))))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_33 &= arr_1 [i_10];
                            var_34 *= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_23 [i_10] [i_11 + 3] [i_10] [i_13] [i_12])) ? (((/* implicit */int) (unsigned short)2597)) : (((/* implicit */int) (short)24600)))))));
                            arr_40 [i_10] = min((max((((unsigned int) arr_8 [i_10] [i_11 + 2] [i_12] [i_13])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [0U] [i_11])) ? (((/* implicit */int) (unsigned short)31017)) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_12] [i_13] [i_12] [i_13])) - (((/* implicit */int) arr_2 [i_10] [i_12]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_15 = 3; i_15 < 15; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-1202145995704290758LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14 + 3] [i_11] [i_14 + 1] [16ULL])))));
                    }
                    for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_37 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (arr_22 [i_16] [17] [(unsigned short)17] [i_10])))) == ((+(((/* implicit */int) arr_21 [(signed char)1] [i_11] [10U]))))));
                    }
                    var_39 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) 1202145995704290776LL)))));
                    var_40 = ((/* implicit */signed char) var_1);
                    var_41 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) < (var_3)));
                    arr_48 [16] [16] = ((/* implicit */unsigned short) ((long long int) arr_41 [i_10] [i_11 + 2] [i_14]));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    var_42 += ((/* implicit */short) (+((+(6141475740831251942LL)))));
                    var_43 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (arr_22 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */int) (short)-4)))) >> (((((/* implicit */int) ((unsigned short) var_9))) - (54222)))));
                    arr_51 [i_17] [i_11 + 3] [i_11] [i_10] = ((/* implicit */int) arr_9 [i_10]);
                    var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_9))));
                }
                for (int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_33 [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) / (1202145995704290739LL)))) ? ((+(((/* implicit */int) (signed char)6)))) : (((/* implicit */int) (unsigned short)28255))));
                    var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((arr_55 [i_10] [i_11] [i_18] [i_11]) + (2383804733055614806LL))) - (23LL))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        for (int i_20 = 4; i_20 < 15; i_20 += 2) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((int) (short)1))))) * (((((/* implicit */_Bool) arr_47 [i_10] [6U] [i_19] [11])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_19] [i_11] [i_18] [i_19])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_20 [(_Bool)1] [3LL] [i_18]))))) : ((~(1202145995704290762LL)))))));
                                var_48 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) -2711534255120302081LL)) || (((/* implicit */_Bool) arr_37 [i_11 + 3])))));
                                var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_58 [i_20] [i_20 + 1] [i_20] [(unsigned short)12] [i_20])), (-1202145995704290762LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_11] [i_20 + 1] [i_20] [(signed char)0] [i_20])) && (((/* implicit */_Bool) 1202145995704290762LL)))))))))));
                                arr_63 [13ULL] [i_11] [i_18] [i_18] [(signed char)16] [i_19] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (var_4) : (var_4)))) ? (var_4) : (((/* implicit */long long int) arr_58 [(unsigned short)16] [i_11 + 1] [i_19] [i_20 - 3] [i_20 + 2])))) ^ (((/* implicit */long long int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (signed char)-6)))))));
                                arr_64 [i_20 - 4] [i_19] [i_19] [i_11] [(short)0] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_17 [i_19] [i_11 + 1] [10ULL] [i_19]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
