/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156159
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (signed char)-120))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_21 &= ((/* implicit */signed char) (+(min((((/* implicit */int) ((((/* implicit */unsigned long long int) -369290465)) > (3573195573597895084ULL)))), (369290464)))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 6; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 133955584LL)), (10ULL))) << (((min((var_11), (var_14))) + (4801267989441411378LL)))));
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_14 [i_0]);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_3 + 3]))))), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))) : (var_14))) & (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
                        }
                        for (short i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            arr_19 [(_Bool)0] [i_1] [i_1] [i_3] [(_Bool)0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)149))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [(_Bool)0] [4U] [i_5] [i_5] [i_2] [i_2]))) ^ (4748324973618948860LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((306662591) - (306662590))))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (signed char)-1))));
                        }
                        var_25 = ((/* implicit */short) var_13);
                    }
                } 
            } 
        } 
        var_26 |= ((/* implicit */long long int) var_5);
        arr_20 [8] &= ((/* implicit */unsigned long long int) 8642727727907953363LL);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) << (((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25937))) - (-4748324973618948861LL))) << (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) - (4748324973618974792LL)))));
        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((unsigned int) arr_6 [0]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) ((((arr_14 [i_7]) ^ (((/* implicit */unsigned long long int) ((long long int) var_9))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124))))) >= (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_13 [i_7])) : (((/* implicit */int) arr_24 [i_7]))))))))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15)))) ^ (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 = ((/* implicit */signed char) var_19);
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((signed char) arr_31 [i_8] [i_9]));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-90))))) & (((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65530))))) : ((+(var_11)))));
                                arr_40 [i_8] [i_9] [i_11] [i_11] [i_8] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_8] [i_8])) && ((_Bool)0))));
                                var_33 = ((/* implicit */int) arr_36 [i_8] [i_10] [i_9] [i_8]);
                            }
                        } 
                    } 
                    arr_41 [i_8] = ((/* implicit */short) (-(((/* implicit */int) var_18))));
                    arr_42 [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) arr_31 [i_8] [i_9])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)95)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 18; i_13 += 3) 
    {
        arr_46 [i_13] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) % (((var_5) / (-369290465)))));
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
            {
                {
                    var_34 &= arr_35 [i_14] [i_15] [i_14];
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_34 [i_15 - 2] [i_14] [i_13 + 2])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) ((arr_31 [i_13] [i_13 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_16] [i_16] [(unsigned char)14] [(signed char)6] [i_13 + 2])))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_60 [(signed char)18] [i_16] [i_17] [i_18] |= ((/* implicit */unsigned short) arr_30 [i_13] [22LL] [i_13]);
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((4018472158253864091ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_13] [i_13 - 1] [i_16 + 1] [i_18]))))))));
                        var_38 = ((/* implicit */int) ((long long int) arr_29 [i_16]));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            var_39 += ((/* implicit */short) ((long long int) arr_62 [i_16 + 3] [i_13 + 1] [(unsigned short)6]));
                            arr_66 [i_13] [i_16] [(unsigned short)6] [i_19] [i_20] [i_20] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_49 [(unsigned char)8] [i_13 + 1] [i_19])) | (((/* implicit */int) arr_49 [i_17] [i_13 + 1] [i_17]))));
                        }
                        arr_67 [i_19] [i_16] [i_17] [i_17] [i_16] [i_16 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1083566483U)) * (arr_53 [i_16] [i_16])))) && (((/* implicit */_Bool) 0ULL))));
                        var_40 = ((/* implicit */short) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((_Bool) arr_34 [i_17] [i_16] [i_17])))));
                    }
                }
            } 
        } 
        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12500517056458599551ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [(signed char)16] [i_13]))) : (arr_30 [i_13] [(_Bool)1] [i_13 - 1])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-32))))));
    }
    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((4018472158253864076ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))))))))) & (max((((/* implicit */unsigned long long int) 19U)), (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551595ULL)))))))));
}
