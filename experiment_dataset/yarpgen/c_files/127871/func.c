/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127871
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) / (2433312018766511055ULL)));
    var_21 += ((/* implicit */unsigned char) var_4);
    var_22 = (~(((/* implicit */int) var_15)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (16013432054943040559ULL)))) ? ((-(((((/* implicit */_Bool) -1398023750)) ? (((/* implicit */int) (unsigned short)63009)) : (((/* implicit */int) (unsigned short)63010)))))) : (((/* implicit */int) max(((short)-29274), (((/* implicit */short) (unsigned char)0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((15911969992076391669ULL) ^ (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) (unsigned short)2528))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) var_17)) / (((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned short)18638)), (31ULL)))))));
            var_23 = ((/* implicit */int) ((_Bool) var_14));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_24 = ((/* implicit */int) var_10);
                var_25 ^= ((/* implicit */unsigned char) ((((arr_8 [i_0] [(signed char)5] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [11LL] [i_0]))) : (var_16))) + (((/* implicit */unsigned long long int) var_5))));
                var_26 = ((/* implicit */int) ((short) ((((/* implicit */int) (short)29271)) - (70241343))));
                var_27 = ((/* implicit */unsigned int) arr_5 [i_0]);
            }
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_11 [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -2005761082)) == (var_16))))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41)))))), (max((18446744073709551584ULL), (((/* implicit */unsigned long long int) 5931316699640384383LL))))))));
                /* LoopSeq 4 */
                for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_4 + 1] = ((/* implicit */_Bool) arr_0 [i_3] [(short)14]);
                    var_28 = ((/* implicit */unsigned char) 16013432054943040579ULL);
                }
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) var_16))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) var_4))))), (var_2)))));
                    arr_19 [i_1] [i_1] = (-(((((/* implicit */int) (unsigned short)7936)) + (((/* implicit */int) arr_1 [i_5 - 1] [i_5 - 1])))));
                    arr_20 [i_0] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */short) (unsigned short)15278);
                }
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_29 *= ((/* implicit */signed char) ((int) ((((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-25423)))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_3] [i_1] [4LL])) : (((/* implicit */int) arr_10 [i_3])))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) min((68719476735ULL), (var_16))))))))));
                        var_31 = ((/* implicit */int) ((((_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_7] [i_7])), (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_6 - 1] [(unsigned short)15] [i_6] [i_6] [i_6 + 1] [i_6 - 1])) << (((/* implicit */int) arr_8 [i_6 - 1] [i_6 - 1] [i_7]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_3] [i_1])) <= (var_11))))) : (var_16)))));
                    }
                }
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    arr_30 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */long long int) var_0);
                    var_32 = ((/* implicit */long long int) var_7);
                }
                var_33 = ((/* implicit */_Bool) max((max((((long long int) 31ULL)), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) arr_1 [i_0] [i_3])) : (var_0))))));
            }
            arr_31 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) max((var_10), (var_10))))), (max((min((((/* implicit */int) (_Bool)1)), (var_4))), (((/* implicit */int) arr_27 [i_0] [i_0]))))));
            var_34 = ((/* implicit */unsigned long long int) (-(((unsigned int) (-(arr_5 [i_0]))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) (short)25422))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (2147483619))) : ((+(var_1))))) >= (((((/* implicit */_Bool) var_15)) ? (((-2005761082) & (((/* implicit */int) (unsigned short)2526)))) : (((arr_9 [i_9 - 1] [8] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_23 [i_9 - 1] [i_9] [i_9] [i_0] [i_0] [i_0]))))))));
            arr_36 [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (4705900620518885474ULL)));
            var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_9] [i_9])) * (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                arr_40 [i_9 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [2] [i_9] [(_Bool)1]) / (((/* implicit */long long int) arr_13 [(unsigned char)14] [i_9] [(unsigned char)14] [i_0]))))) ? (2568830507207028037LL) : (((/* implicit */long long int) (((-(var_0))) + ((((_Bool)1) ? (var_18) : (((/* implicit */int) var_15)))))))));
                var_37 = ((/* implicit */short) ((int) (-(((/* implicit */int) (signed char)113)))));
            }
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                arr_43 [i_9] [i_9] [(unsigned char)1] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_13 [i_0] [i_0] [i_11] [i_9 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63010))))) : (((((/* implicit */_Bool) 2147483631)) ? (arr_38 [i_0] [i_9 - 1] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */long long int) max((-5), (((/* implicit */int) (unsigned char)107)))))));
                arr_44 [i_11] [i_9] [i_11] = ((/* implicit */int) ((unsigned long long int) (-(max((4194303), (((/* implicit */int) (unsigned short)53133)))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), ((-(min((((/* implicit */int) (unsigned char)213)), (((((/* implicit */int) arr_16 [i_0] [i_0] [3] [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1))))))))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2047)) << (((((-6030443289958475193LL) + (6030443289958475214LL))) - (13LL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_16 [i_11] [i_9] [(unsigned short)14] [i_0] [i_13] [i_11]))), (min((var_0), (arr_13 [i_0] [i_11] [i_11] [i_12])))))) : ((((-(var_16))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [0] [i_11])))))));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */int) min((var_40), (((int) max((arr_48 [i_0] [i_9 - 1] [i_14] [i_15] [i_16]), (arr_0 [i_9 - 1] [i_9 - 1]))))));
                            var_41 = ((/* implicit */_Bool) ((long long int) 264241152));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((short) arr_4 [i_0] [i_14])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_17])) % (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9] [6])) ? (arr_13 [i_0] [i_0] [i_14] [i_0]) : (((/* implicit */int) var_8))))) : (((long long int) 18446744073709551585ULL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) (_Bool)1)))))));
                    arr_62 [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_17] [i_17] [i_0]);
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    arr_66 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((int) (-(2147483647))))));
                    var_43 = ((/* implicit */unsigned short) max((268435200U), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) (short)-2058)), (var_15))), (((/* implicit */unsigned short) (short)5920)))))));
                    arr_67 [i_14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_50 [i_0] [i_14] [6U] [i_18] [i_18] [i_18]))))) >= (((unsigned int) var_17))))) >> (((var_6) - (3239439611U)))));
                }
            }
            for (long long int i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
            {
                arr_71 [i_0] [i_19] [i_19] [i_9] |= ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_14)))) & (((((/* implicit */_Bool) (short)21792)) ? (((/* implicit */int) (unsigned char)51)) : (264241156))))), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)96))))) <= (max((((/* implicit */unsigned int) arr_16 [i_0] [14LL] [i_9] [i_9] [i_19] [i_19])), (4294967275U))))))));
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) 6931786923066004356LL))));
                    var_45 = ((/* implicit */short) min((((unsigned int) (+(((/* implicit */int) (short)26520))))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) ((unsigned short) arr_50 [i_0] [i_0] [i_9] [i_9] [i_19] [1ULL]))))))));
                }
                for (long long int i_21 = 3; i_21 < 14; i_21 += 1) 
                {
                    arr_78 [i_21] [i_0] [i_9] [i_0] [i_0] |= ((/* implicit */int) var_8);
                    var_46 = ((/* implicit */short) (-(var_18)));
                    var_47 = ((/* implicit */short) ((((min((var_5), (-2005761082))) != ((-(((/* implicit */int) arr_69 [i_0] [i_0] [(_Bool)1] [i_0])))))) ? (-1094704992) : ((~(((var_12) * (((/* implicit */int) (signed char)-5))))))));
                    arr_79 [i_21] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */long long int) arr_28 [i_21] [i_21] [i_21] [i_0])) <= (-2852184859582426340LL)))))) << (((((/* implicit */_Bool) ((unsigned int) -2089978983))) ? (min((((/* implicit */int) arr_1 [i_21] [i_19])), (1106630607))) : (((/* implicit */int) arr_57 [(_Bool)1] [i_0] [i_0]))))));
                }
                arr_80 [i_9] [i_19] = ((/* implicit */long long int) (~(max(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 439103218)) ? (var_7) : (((/* implicit */int) arr_46 [i_0] [i_9]))))))));
            }
        }
        var_48 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -717669379)) ? (((/* implicit */int) ((unsigned char) 16776704))) : (((/* implicit */int) ((1658535773U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))))))))));
    }
}
