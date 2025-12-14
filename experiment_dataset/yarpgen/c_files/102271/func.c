/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102271
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
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) (short)24167)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) 10127822903637262211ULL)) && (((/* implicit */_Bool) (short)13433)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3911))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((10127822903637262224ULL), (((/* implicit */unsigned long long int) (unsigned short)51414)))))))) : (((/* implicit */int) ((arr_1 [i_0 - 2] [i_0]) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)60108))))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((unsigned short) min((min((((/* implicit */short) (unsigned char)7)), ((short)32767))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [13U]))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (-(arr_5 [i_1] [i_1])));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (short)23290)) >> (((10127822903637262211ULL) - (10127822903637262199ULL))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((arr_7 [i_1]) * (var_2))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            arr_14 [i_2 - 1] [i_1] = ((/* implicit */int) (unsigned char)216);
            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) -2025531480)) : (((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned long long int) -409768438)) : (8318921170072289405ULL)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((1400459233), (((/* implicit */int) (unsigned short)45845))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (short)3913);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */short) ((arr_0 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((8283856005800582060ULL), (((/* implicit */unsigned long long int) 579885184))))) && (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4] [i_4 - 1] [i_4] [i_4 - 2]))))))));
                            arr_21 [i_1] [i_1] [6LL] [i_3] [i_4] [6LL] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4 - 1] [i_2 + 1])) : (((/* implicit */int) (short)13437))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            arr_25 [i_6] [i_3] [i_3] [i_3] [i_1] = (+(((/* implicit */int) arr_22 [i_4 + 1] [i_2 + 2] [i_2] [i_1] [i_1])));
                            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))));
                            arr_26 [i_3] = 8102207723066739438LL;
                            arr_27 [i_2] [i_2] [i_3] [i_2] = ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-50))))) <= (((((/* implicit */_Bool) arr_17 [i_6] [i_4] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54780))) : (34359738367LL))));
                            arr_28 [i_1] [i_3] = ((/* implicit */short) arr_23 [i_3]);
                        }
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((min((13646053692401242028ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25979)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (-34359738367LL)))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((unsigned long long int) 1023ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                        var_22 = (~(((unsigned long long int) 16369437842186244683ULL)));
                        arr_29 [4U] [i_3] [i_3] [i_3] [i_1] [i_1] = 8102207723066739438LL;
                    }
                } 
            } 
        }
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        var_23 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)12819)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3913))) : (11424040457243458256ULL)))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)31)))) ? (((/* implicit */long long int) (~(4072587829U)))) : (((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (343612869895145890LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15818)))))))) < (((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7]))) : (min((((/* implicit */unsigned long long int) (unsigned short)15818)), (17738066367277194955ULL)))))));
        var_25 = ((/* implicit */signed char) 7022703616466093359ULL);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) min((var_14), (((/* implicit */short) var_6)))));
                        arr_41 [(signed char)8] [i_10] [i_9] [(signed char)8] [5] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9] [i_9 - 2] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_16 [i_9] [i_9 - 3] [i_9 - 1] [i_9 - 3])) : (((/* implicit */int) (short)22571)))))));
                        arr_42 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15534)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) < (507107409756266824ULL)))))) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3910))) : (17939636663953284802ULL)))))));
                        var_27 = ((/* implicit */unsigned char) min((((/* implicit */long long int) -1)), (14795845330302262LL)));
                        /* LoopSeq 3 */
                        for (short i_11 = 3; i_11 < 8; i_11 += 4) 
                        {
                            arr_45 [i_7] [i_8] [i_9 - 3] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(8065289042072107586LL)))) ? (((/* implicit */int) ((short) arr_24 [i_7] [i_8] [i_9 + 1] [i_10] [10LL] [i_10]))) : (((/* implicit */int) (unsigned short)33839))))));
                            arr_46 [i_7] [i_7] [i_8] [i_7] [i_10] [i_11 - 2] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-51))))) ? (((((/* implicit */_Bool) arr_36 [i_10] [i_11 - 2] [i_11 - 2])) ? (((/* implicit */unsigned long long int) arr_6 [i_11 - 2] [i_9 - 2])) : (5ULL))) : (((/* implicit */unsigned long long int) var_0))));
                            var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((arr_7 [i_7]) ^ (var_2)))) ? (742954101936126405ULL) : (arr_40 [i_11 - 1] [i_11] [i_10] [i_9 - 1] [i_7]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_11] [i_11 + 2] [i_11] [i_11 - 3] [i_11])))))));
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) var_12);
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(-1024976612413121069LL))))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_48 [i_7] [i_7] [i_9 + 1] [i_7] [i_7] [i_13] [i_13 + 1]), (((/* implicit */long long int) var_14))))) ? (max((1024976612413121069LL), (((/* implicit */long long int) (unsigned char)255)))) : ((-(arr_48 [i_7] [i_13] [i_9 - 2] [i_10] [1] [i_9] [i_13 + 1])))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(34359738354LL)))) ? (max((1494330632753029689ULL), (15461985598924956635ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13 + 1] [i_13 - 1] [i_9 + 1] [i_9 - 1])))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) min((1322331359U), (((/* implicit */unsigned int) -647015927))))) / (var_0))))))));
                            arr_52 [i_7] [i_7] [i_7] [i_7] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 1024976612413121068LL))) | (((/* implicit */int) (!(((/* implicit */_Bool) 2201677720U)))))));
                        }
                    }
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (+(579885157))))));
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)15552)) ? ((+(((/* implicit */int) ((unsigned short) var_7))))) : (((/* implicit */int) min((arr_19 [i_9 - 3] [i_9 + 1] [i_9 - 1]), (arr_51 [7LL] [i_9 - 2] [i_9] [i_8])))))))));
                        arr_55 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 579885177)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) -1LL))));
                    }
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        arr_58 [i_7] [i_8] [0] [i_15] [i_15] [i_9] = ((/* implicit */unsigned char) max((((17939636663953284792ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_8] [i_8] [1LL])) && (((/* implicit */_Bool) 2485208093002474445LL)))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (unsigned short)55268))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_1) & (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44580))))) ? (507107409756266809ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)4)) ? (var_2) : (arr_6 [i_7] [i_7])))))) : (((((/* implicit */_Bool) 17939636663953284791ULL)) ? (16815120670659808671ULL) : (((/* implicit */unsigned long long int) var_11)))))))));
                    }
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_61 [i_9 + 1] [i_8] [i_7] = ((/* implicit */short) max(((-(10373924292434562881ULL))), (((((/* implicit */_Bool) arr_47 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 2] [i_8] [i_7])) ? (16511855258967171995ULL) : (((((/* implicit */_Bool) (signed char)3)) ? (14850359481023357596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1470)))))))));
                        arr_62 [(short)5] [(short)5] [(short)5] [i_16] [i_16] = (((!(((/* implicit */_Bool) -8810390198722271392LL)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44577))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 1; i_17 < 7; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (12885323789206369554ULL))) % (((/* implicit */unsigned long long int) var_11))));
                        arr_65 [i_7] [i_8] [i_9] [(signed char)0] [(signed char)0] = ((/* implicit */unsigned int) var_5);
                        var_39 |= -8927640102124810766LL;
                        /* LoopSeq 3 */
                        for (int i_18 = 0; i_18 < 11; i_18 += 2) 
                        {
                            arr_68 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) var_10);
                            var_40 = ((/* implicit */_Bool) (+(17939636663953284796ULL)));
                            arr_69 [i_7] [i_8] [i_9] [(unsigned short)9] [i_17] [i_18] = ((/* implicit */long long int) (unsigned short)20969);
                            arr_70 [i_18] [(short)5] [i_9 - 2] [(short)5] [0LL] = (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (2378480441167529071ULL))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            arr_73 [i_19] [i_17] [i_9] [5ULL] [i_8] [i_7] [i_7] = ((/* implicit */int) 1113490012097803637ULL);
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((16815120670659808655ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79)))))));
                            arr_74 [i_17] [i_17] = ((/* implicit */unsigned long long int) (short)28958);
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 4) 
                        {
                            arr_77 [i_7] [i_20] [i_8] [i_9 - 2] [i_17] [i_20 - 1] = ((/* implicit */long long int) (-(arr_37 [i_9] [i_17 + 2])));
                            arr_78 [i_20] [i_8] [i_8] [i_8] [i_8] [(short)0] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_20] [i_17 + 3]))));
                        }
                    }
                    var_42 = ((/* implicit */int) max((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20097)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_60 [i_9 + 1] [i_9 - 1] [i_9 - 3] [i_9 - 3] [i_9 - 1])) ? (((/* implicit */int) arr_60 [i_9 - 3] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 3])) : (((/* implicit */int) arr_60 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 3] [i_9 + 1])))) : ((-(((/* implicit */int) arr_60 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 3]))))))));
                    var_43 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        arr_79 [i_7] = min((((((/* implicit */_Bool) (short)18346)) ? (((long long int) (signed char)-112)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))));
    }
    var_44 = ((/* implicit */unsigned char) var_3);
}
