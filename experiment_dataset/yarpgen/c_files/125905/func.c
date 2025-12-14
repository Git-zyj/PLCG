/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125905
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((var_8) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))))))), (((_Bool) 567504469U))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [(unsigned short)15] [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_5 [i_1])) | (((/* implicit */unsigned long long int) 1495133353U))));
            var_19 = ((arr_4 [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (var_17)))) ? (((/* implicit */int) (unsigned short)65534)) : (((((/* implicit */int) (short)-16920)) ^ (((/* implicit */int) (unsigned short)4791))))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (unsigned short)21133))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((long long int) arr_4 [i_4])) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) + (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2870064348U))))))));
                        var_20 = ((/* implicit */short) (((~(((/* implicit */int) (short)-29202)))) & (((/* implicit */int) arr_9 [i_3 - 1] [i_4 + 3] [i_4 + 3]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_20 [i_5] [i_6] [i_6]), (var_10)))), (min((((/* implicit */long long int) (unsigned char)112)), (-1LL)))))), (min((((((/* implicit */_Bool) arr_19 [i_6] [12U] [12U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [(short)11]))) : (17081714467655117162ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)5894)), (296886700U))))))));
            var_22 = ((/* implicit */_Bool) var_4);
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_8 = 2; i_8 < 20; i_8 += 4) 
            {
                var_23 = ((((((/* implicit */_Bool) var_4)) ? (17081714467655117155ULL) : (((/* implicit */unsigned long long int) 0U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2452))));
                arr_26 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */long long int) var_8);
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
                        arr_34 [i_5] = ((short) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)26950)) : (((/* implicit */int) (signed char)-92))));
                        arr_35 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned short)0))));
                        var_24 = ((/* implicit */unsigned short) ((6569683533071995747ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))));
                        arr_36 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)44748);
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
                        arr_40 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))));
                    }
                    for (unsigned int i_13 = 4; i_13 < 20; i_13 += 2) 
                    {
                        arr_45 [i_5] [i_7] [i_9] [i_5] [(unsigned short)8] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_5] [i_5]))))) ^ (arr_16 [i_5]));
                        arr_46 [i_5] [i_7] [i_5] [i_10 - 1] [i_5] [i_5] = var_11;
                    }
                    var_26 = ((/* implicit */long long int) (-(((unsigned int) (unsigned short)21110))));
                    arr_47 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-5197859944336099524LL)))) ? (((((/* implicit */long long int) 1113481909U)) | (5103804171465348118LL))) : (-5103804171465348120LL)));
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) (-(((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))));
                    arr_52 [11] [11] [i_9] [11] [i_5] = var_13;
                }
                arr_53 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)123))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_56 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(15461730682185622123ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) + (arr_31 [i_5 - 2] [i_7] [i_5 - 2] [i_5] [i_15] [i_15]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)54119)))))));
                /* LoopSeq 1 */
                for (signed char i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    arr_60 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_7);
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_18 [i_5]), (((/* implicit */unsigned long long int) (short)427)))), (((/* implicit */unsigned long long int) ((_Bool) 1113481929U)))))) ? (max((min((819777705U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_5] [i_7] [i_16 + 3]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44399)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_51 [i_5] [i_5 + 1] [i_7] [(signed char)11])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_17 = 2; i_17 < 21; i_17 += 1) 
                    {
                        arr_64 [i_5] [i_5] = var_13;
                        arr_65 [i_5] [18U] [8U] [18U] [i_16 + 3] [i_17] = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)65535));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        arr_68 [i_7] [(signed char)15] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5])) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)44417))))));
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_48 [i_16 + 3] [i_16 + 3] [i_18 + 1]))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((unsigned int) (-(15279288798867307144ULL)))))));
                        arr_69 [i_5] = ((/* implicit */unsigned short) ((int) (signed char)-77));
                    }
                    arr_70 [i_5] [i_5] [i_7] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_37 [i_5])) ? (arr_57 [i_5 - 1] [i_16 + 3] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)104)))))));
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_74 [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) max(((unsigned short)61705), (((/* implicit */unsigned short) (short)12765))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((min((3167455274842244455ULL), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) (-(arr_67 [i_5] [i_5 - 3])))))))));
            }
            arr_75 [i_5] = (unsigned short)9;
            var_32 += ((/* implicit */unsigned int) 16692370919426356102ULL);
            var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_15)));
            arr_76 [i_5] [i_5] [(signed char)7] = ((/* implicit */unsigned short) var_3);
        }
        arr_77 [i_5 - 2] [i_5] = ((/* implicit */short) (((~(1314688657U))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))));
    }
    var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
    var_35 = ((/* implicit */unsigned short) min((max((max((var_14), (var_10))), (((/* implicit */short) var_2)))), (var_17)));
}
