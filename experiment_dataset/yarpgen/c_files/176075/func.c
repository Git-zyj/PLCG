/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176075
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 8; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0] [i_0] [i_0])) ? (((unsigned long long int) -1)) : (14810571470849734032ULL)));
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) 1040187392));
                        var_21 = ((/* implicit */int) ((unsigned short) (signed char)120));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)7)))))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 2; i_5 < 8; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    var_23 -= ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_6 - 1] [i_6] [i_0 + 4]));
                    var_24 *= ((/* implicit */short) ((int) arr_10 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5] [i_6 - 1]));
                    arr_21 [i_0] [i_5] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) % (18)));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : ((-9223372036854775807LL - 1LL)))))));
                }
                for (int i_7 = 3; i_7 < 8; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_0)));
                    var_27 = ((/* implicit */_Bool) (~(-18)));
                }
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned short)0))));
            }
            for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) /* same iter space */
            {
                arr_27 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)13800)) - (((/* implicit */int) (unsigned short)36816)))))));
                arr_28 [i_0] [i_0] [i_0] [i_8 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (17ULL)));
            }
            for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_10 = 4; i_10 < 7; i_10 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_15)) ^ ((~(var_11)))));
                    var_30 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32753)) ? (var_15) : (((/* implicit */int) ((unsigned char) var_4)))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((_Bool) 9223372036854775807LL))));
                        var_31 += ((/* implicit */long long int) ((signed char) (signed char)-7));
                        arr_40 [i_0] [i_0] [i_9] [i_11] [i_12] = ((/* implicit */signed char) var_4);
                    }
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_7))));
                }
                for (long long int i_13 = 4; i_13 < 7; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        arr_45 [i_13] [i_0] [i_13] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-37))));
                        arr_46 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)86);
                        arr_47 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] [i_14 - 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)78)) ? (-719394902510000892LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 9; i_15 += 1) 
                    {
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-9052650300060166939LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(7286547005101277711ULL)))));
                        arr_50 [i_0] [i_4] [i_0] [i_13] [i_15] = ((/* implicit */unsigned char) ((int) arr_36 [i_15 - 2] [i_0] [i_0] [i_0] [i_0]));
                        arr_51 [i_0 - 2] [i_4] [i_9] [i_13] [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_17))))));
                    }
                    var_34 = ((/* implicit */int) (short)32767);
                    arr_52 [i_0 + 1] [i_13] [i_13] [i_13] [i_4] [i_13] |= ((((/* implicit */_Bool) (-(8795958804480ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9)))))) : (arr_5 [i_13] [i_9 - 1] [i_13 - 1]));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) 0U))));
                }
                for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    arr_57 [i_0] = ((/* implicit */int) (short)-13801);
                    var_37 = ((/* implicit */unsigned short) var_17);
                }
                var_38 = ((/* implicit */unsigned long long int) ((long long int) (signed char)15));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 3; i_17 < 9; i_17 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
                    arr_60 [i_0] [i_0] [i_9 + 1] [i_17 - 3] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)960));
                    var_40 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22105))) >= (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 4; i_18 < 9; i_18 += 2) 
                {
                    var_41 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_18]))))) / (((((/* implicit */_Bool) (signed char)-32)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                    var_42 -= (-(((/* implicit */int) var_3)));
                }
            }
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) var_5))));
        }
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_19 = 2; i_19 < 11; i_19 += 4) /* same iter space */
    {
        var_45 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) (signed char)-32))) && (((/* implicit */_Bool) arr_66 [i_19 - 1] [i_19 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_0)))) || (var_14))))));
        arr_67 [i_19] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((~(1032192)))))), (max((((/* implicit */unsigned long long int) (-(4294967167U)))), (17526435335344313439ULL)))));
    }
    for (unsigned short i_20 = 2; i_20 < 11; i_20 += 4) /* same iter space */
    {
        arr_70 [i_20] = ((/* implicit */short) max((((unsigned long long int) -2367192978803955476LL)), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)4))))));
        var_46 |= ((/* implicit */unsigned short) 9007199254740991ULL);
    }
    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) 17526435335344313465ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (max((((2367192978803955475LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41173))))), (((/* implicit */long long int) ((short) (signed char)0)))))));
}
