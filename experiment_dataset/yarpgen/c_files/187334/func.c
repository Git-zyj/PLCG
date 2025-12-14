/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187334
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
    var_11 = ((/* implicit */short) 886768172);
    var_12 = ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) var_7)), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50643)) ? (var_2) : (((/* implicit */int) (unsigned short)1970))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24802)) ? (1491088207) : (886768192))) < (-1491088206))))));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 1051593404U)))))))) | ((((!(((/* implicit */_Bool) -1491088207)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (714267817))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (unsigned short)7)))))) / (min((1491088188), (var_2)))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40759))), ((unsigned short)20)))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)10563)))), (((((/* implicit */_Bool) 9187343239835811840LL)) ? (-1628282100) : (((/* implicit */int) var_8))))))) : (((((/* implicit */long long int) 3817679072U)) / (((((/* implicit */long long int) var_0)) - (var_3)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 2427963948U)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) 1628282099)), (var_3)))))) ? (((1871778083U) | (var_6))) : (((/* implicit */unsigned int) var_2))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_22 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((816552217) & (var_2)))) ? (((/* implicit */int) (_Bool)1)) : (max((-1491088206), (((/* implicit */int) var_4))))))) == ((-(4294967295U)))));
                                arr_23 [(unsigned short)3] [i_2] [(unsigned short)3] [(unsigned short)3] [i_3] = ((/* implicit */signed char) var_10);
                                arr_24 [1] [i_2] [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_3] = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)84))))));
                            }
                        } 
                    } 
                    arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) min((var_5), (min((min((((/* implicit */long long int) (short)29833)), (var_5))), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) -2147483632)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_28 [i_6] = ((/* implicit */short) ((4294967291U) - (((/* implicit */unsigned int) var_0))));
        /* LoopSeq 4 */
        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            arr_31 [19] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)19674))));
            arr_32 [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65230))) - ((~(2561880917U))));
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_39 [i_9] [i_6] [i_8] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? (var_0) : (((/* implicit */int) var_4)))) >= ((~(((/* implicit */int) var_4))))));
                    arr_40 [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_4))));
                    arr_41 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49876)) && (((/* implicit */_Bool) var_0))));
                }
                for (long long int i_10 = 2; i_10 < 21; i_10 += 3) 
                {
                    arr_45 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) : (var_3))) == (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_46 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1879)))))) && (((/* implicit */_Bool) (short)-22317))));
                    arr_47 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)574))));
                    arr_48 [12] [i_6] [i_6] [10] |= ((/* implicit */long long int) (+(3067215731U)));
                }
                for (int i_11 = 3; i_11 < 20; i_11 += 3) 
                {
                    arr_51 [(unsigned char)8] [10] [i_7] [i_6] [10] = ((/* implicit */long long int) ((2456391348U) * (((/* implicit */unsigned int) (-(-622965430))))));
                    arr_52 [i_6] [18U] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)4094))) ^ (var_6))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                    arr_53 [(signed char)21] [(signed char)21] [(signed char)20] [(signed char)20] [(signed char)21] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -9187343239835811837LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (353147891129711421LL)));
                }
                arr_54 [i_7] [7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) + (var_6)));
            }
            for (int i_12 = 1; i_12 < 19; i_12 += 3) /* same iter space */
            {
                arr_59 [i_6] [i_6] [20U] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)9201))));
                arr_60 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_4))))) ^ (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_9)) - (34703)))))));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    arr_63 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)49858))));
                    arr_64 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18] [i_6] [(unsigned short)18] [(unsigned short)18] |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_1) : (9187343239835811865LL)));
                }
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_68 [i_7] [i_7] = ((/* implicit */short) ((var_3) - (var_5)));
                    arr_69 [i_6] [i_7] [i_12] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (short)28672))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 2) 
                    {
                        arr_76 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)34894)))))) % (var_3)));
                        arr_77 [i_16] [i_16] [(short)8] [(short)8] [i_7] [(unsigned short)4] = ((/* implicit */signed char) (~(((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    }
                    arr_78 [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 9187343239835811837LL)))) || ((!(((/* implicit */_Bool) (unsigned short)9201))))));
                    arr_79 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                }
            }
            arr_80 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9187343239835811865LL)) ? ((+(((/* implicit */int) (unsigned short)49862)))) : (((/* implicit */int) (short)32090))));
        }
        for (int i_17 = 2; i_17 < 20; i_17 += 4) 
        {
            arr_85 [11] = ((/* implicit */int) ((((/* implicit */_Bool) 3468113823U)) ? (3468113822U) : (((((/* implicit */_Bool) var_5)) ? (0U) : (0U)))));
            arr_86 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (2583534755U)));
            arr_87 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) >> (((/* implicit */int) (unsigned short)5))));
        }
        for (int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            arr_92 [11LL] = ((/* implicit */int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47811)))));
            arr_93 [i_6] [i_6] [i_6] = ((/* implicit */short) ((3621542879U) / (((/* implicit */unsigned int) -2065149619))));
        }
        for (int i_19 = 1; i_19 < 19; i_19 += 4) 
        {
            arr_98 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)23))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                for (short i_21 = 2; i_21 < 19; i_21 += 4) 
                {
                    {
                        arr_105 [0U] [0U] [i_19] [(unsigned char)15] [i_19] = (+(((((/* implicit */_Bool) 2272045811U)) ? (((/* implicit */int) (unsigned short)37937)) : (((/* implicit */int) var_8)))));
                        arr_106 [(signed char)9] [i_19] [i_19] [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) (signed char)-31))))));
                        arr_107 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                        arr_108 [i_19] = ((/* implicit */unsigned char) ((1591955625600341588LL) << (((((/* implicit */int) (unsigned short)1879)) - (1877)))));
                        arr_109 [(unsigned short)2] [i_19] [(unsigned short)2] [i_21] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -14LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8000848171108614443LL))) < (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    }
                } 
            } 
            arr_110 [11U] [i_19] = ((/* implicit */unsigned short) (+(4503599627370496LL)));
        }
        arr_111 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 3030837972U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)127)))));
    }
    var_14 = ((/* implicit */unsigned short) var_5);
}
