/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10069
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)25655)) ? (((unsigned int) (unsigned short)25655)) : (((/* implicit */unsigned int) -690018955)))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39873)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14ULL])) ? (arr_5 [i_0] [(unsigned short)1] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (((unsigned long long int) 536739840))));
            }
        } 
    } 
    var_20 = min((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_2)))))), (min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)30)))))));
    var_21 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) arr_8 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 49427818)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 3] [i_3 - 2]))) : (2389682595456539555ULL)))));
                        var_24 += ((/* implicit */_Bool) (+(2147483644)));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) var_10)), ((unsigned short)65510))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3 + 3])) > (((/* implicit */int) arr_0 [i_3 - 1]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_10)) - (3230)))))) > ((((_Bool)1) ? (arr_10 [2ULL]) : (((/* implicit */unsigned long long int) -536739840))))))) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)15474)) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) (unsigned short)13251)) : ((-(((/* implicit */int) (unsigned short)25652)))))) - (13224)))));
                                arr_20 [i_2] [i_2] [i_7] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (short)30720)), (arr_18 [i_2] [i_2] [i_2] [(unsigned short)11] [i_2] [i_2])))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6])) ? ((~(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_11))))))) : (max((((((/* implicit */int) (unsigned char)166)) << (((arr_5 [i_2] [i_3 + 2] [i_2]) - (11758525379174937846ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) 49427810)))))))));
                                var_28 = ((/* implicit */int) ((((10911799047549604546ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (var_6) : (((arr_5 [i_6] [i_6] [i_6]) * (((/* implicit */unsigned long long int) var_7))))));
                                arr_21 [i_2] [i_7] [3U] [i_6] [i_7] = ((/* implicit */unsigned short) min(((~(2283333224U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_4 [i_3 + 3] [i_6] [i_7])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)30709)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_2])), (2283333240U)))) : (max((((/* implicit */unsigned long long int) (short)-1)), (2431208275352410061ULL))))))))));
                    var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31795))) : (var_6)))) ? (((((/* implicit */int) var_4)) << (((18304281076171592373ULL) - (18304281076171592361ULL))))) : (((/* implicit */int) min((arr_11 [i_2]), (((/* implicit */unsigned short) (unsigned char)0)))))))) ? ((-(min((14487404494193455640ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                    var_31 = (unsigned char)0;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_8 = 2; i_8 < 18; i_8 += 2) 
        {
            arr_25 [i_2] = ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (var_6)));
                        var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41304)) * (((/* implicit */int) (unsigned char)0)))))))), (max((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0))), (arr_10 [i_9 - 1])))));
                    }
                } 
            } 
        }
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 2) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_11])) ? (min((((((/* implicit */int) var_13)) & (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) << (((arr_6 [i_2] [15ULL]) - (2709370416U))))))) : (((/* implicit */int) min(((short)-18993), (((/* implicit */short) arr_22 [i_2] [i_11 + 1] [i_11 - 1])))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_35 = ((int) (short)-28772);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_43 [i_14] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -980745845)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14] [i_12] [(unsigned char)12]))) : (arr_38 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_38 [i_2] [i_2] [i_2] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_33 [(unsigned short)19] [i_11] [(unsigned short)19])) ? (4045211097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_2] [i_2] [i_2]))))));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_34 [i_2] [i_11] [16]))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_28 [i_2] [i_11 + 2] [i_12] [i_2]) > (((/* implicit */unsigned int) -697329300))))))))));
                        var_38 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(17625381521099276352ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((5148697721038265477ULL) > (((/* implicit */unsigned long long int) 35568993U))))))) >> (((((min((3959339579516095975ULL), (arr_5 [i_2] [i_11] [i_13]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21056)) ^ (((/* implicit */int) arr_23 [i_11 + 1] [i_2]))))))) - (4588735864805124618ULL)))));
                        arr_44 [18U] [16ULL] [i_11] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) var_0)), (arr_42 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1])))) & (((/* implicit */int) max((arr_2 [i_2] [i_11 + 2]), (arr_2 [i_2] [i_11 + 2]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_15 = 3; i_15 < 19; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    {
                        arr_50 [19ULL] [(_Bool)1] [(_Bool)1] [i_16] = (-((-(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) 4259398302U)))))));
                        arr_51 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) 4259398302U))) == ((~(((/* implicit */int) arr_23 [9ULL] [i_15])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) (short)14029)) : (((/* implicit */int) arr_29 [i_2] [i_11] [(short)17] [i_16]))))) : (((unsigned long long int) var_15))));
                        arr_52 [i_2] [i_2] [i_15 + 1] [i_16] = ((/* implicit */short) (_Bool)0);
                        arr_53 [i_2] = max((552748971024748877ULL), (((/* implicit */unsigned long long int) 5U)));
                    }
                } 
            } 
        }
        arr_54 [(short)10] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((35569014U) > (4259398303U))))));
    }
}
