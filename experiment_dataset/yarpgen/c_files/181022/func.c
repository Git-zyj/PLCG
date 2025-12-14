/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181022
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max(((-((+(var_14))))), (((((var_7) - (var_15))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (32767)))))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4))))) : (arr_0 [3] [i_0])))) ? (max((var_5), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) (unsigned char)116))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_11)));
                            var_19 -= ((/* implicit */unsigned short) ((14396030170446890762ULL) < ((+(var_12)))));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] = (unsigned char)128;
            var_20 = ((/* implicit */unsigned short) ((var_14) < (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_2 [i_1] [i_1])))))))));
        }
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_1)) | (min((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_1] [i_1] [i_1]) : (var_15))), (var_12)))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(var_1)))), (((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))));
    }
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_2))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1690098458))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_6]))) : (var_15)))))));
        var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10)))));
        var_25 *= var_12;
    }
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_8])) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), ((-(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        var_28 = min((((arr_26 [i_8] [(unsigned char)2]) ^ (arr_26 [i_8] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(arr_24 [(unsigned short)10] [i_8])))) < (min((var_5), (var_15)))))));
                        arr_33 [i_8] [i_8] = ((/* implicit */int) var_4);
                        arr_34 [i_7] [i_8] = ((/* implicit */int) var_5);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_39 [i_8] [i_8] [i_9] [i_11] = (-(max((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_11] [i_11] [i_8]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_24 [i_9] [i_9])) <= (arr_35 [i_7] [i_8] [i_8] [i_11] [i_8] [i_7])))))));
                        arr_40 [i_8] [i_11] [(unsigned char)1] [11ULL] [i_8] = ((/* implicit */unsigned short) (+((-(var_5)))));
                        var_29 = var_0;
                    }
                    arr_41 [i_7] [i_8] [i_8] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_26 [i_8] [i_8])))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) arr_30 [i_7] [10ULL] [i_7] [i_7] [i_8])))))))), (var_12)));
                    var_30 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_38 [i_7] [14] [i_8] [i_8] [i_9])), (arr_24 [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_24 [i_8] [i_8]))))))) : ((~(((/* implicit */int) (unsigned short)28634))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_13);
        /* LoopSeq 4 */
        for (int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
        {
            var_32 += ((/* implicit */unsigned short) (-(((((/* implicit */int) var_4)) << (((max((((/* implicit */unsigned long long int) (unsigned char)8)), (var_2))) - (3249415523272187132ULL)))))));
            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39981)) != (((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (14396030170446890762ULL)))))))));
            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
        }
        for (int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
        {
            var_35 = ((((/* implicit */int) (unsigned char)15)) + ((-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_0))))))));
            var_36 = ((/* implicit */unsigned long long int) (((~(arr_26 [i_14] [i_14]))) >= (((/* implicit */unsigned long long int) ((597355041) & (arr_16 [i_14] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
        }
        for (int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
        {
            arr_55 [i_15] [i_15] [i_15] |= min((((/* implicit */int) var_3)), (max((((((/* implicit */_Bool) arr_47 [(unsigned char)10] [i_15])) ? (arr_16 [i_12] [i_12] [i_12] [i_15] [i_12] [(unsigned short)10]) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_17 [i_12] [i_12] [i_15])))));
            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_1))));
            arr_56 [i_15] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_32 [(unsigned short)10] [i_12])), (arr_16 [i_12] [i_12] [i_12] [i_15] [i_15] [i_15]))) == ((~(((/* implicit */int) arr_32 [i_12] [i_15]))))));
        }
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) max((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7341306881152806583ULL)))))))), (((/* implicit */unsigned long long int) var_9)))))));
            var_39 = var_1;
            var_40 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12]))) - (((12249952888250756590ULL) + (((/* implicit */unsigned long long int) var_1))))))) ? (((var_1) - (((/* implicit */int) ((arr_23 [i_16]) < (((/* implicit */int) var_8))))))) : (((/* implicit */int) var_4)));
        }
    }
    var_41 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) < (var_12))))) : (var_7))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_6))))))));
}
