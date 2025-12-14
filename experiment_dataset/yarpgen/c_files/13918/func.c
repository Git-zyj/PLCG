/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13918
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) (((~(min((-707077321), (((/* implicit */int) (signed char)-32)))))) & ((((~(((/* implicit */int) (signed char)24)))) & (((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) (unsigned char)79))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 += ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((-(((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [17ULL]))))))), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1819768322)))) : (((((/* implicit */_Bool) (unsigned char)79)) ? (5293377981921014401LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_3])))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) ((var_2) ? (((/* implicit */int) arr_0 [15LL])) : (609170828)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_9 [i_0] [(unsigned short)5] [i_3] [i_3]))))))));
                            var_12 += ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1] [16]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1] [i_0 - 1] [i_4 - 3]), (arr_4 [i_0 - 1] [i_1] [i_4 + 2])))) ? (((arr_4 [i_0 - 1] [i_4] [i_4 - 1]) >> (((var_6) + (1747012108284260847LL))))) : (arr_4 [i_0 - 1] [i_1] [i_4 + 2])));
                    arr_14 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_4] [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (1924597208021055345LL))))) : (max((-5293377981921014402LL), (((/* implicit */long long int) (_Bool)1))))))) & ((-(((((/* implicit */_Bool) (signed char)-1)) ? (arr_8 [(short)16] [i_1] [i_4] [i_4 - 4] [13LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_4 [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((((/* implicit */long long int) arr_2 [i_4])) - (5293377981921014401LL)))))) ? (((/* implicit */int) arr_12 [i_4 - 4] [15ULL] [15ULL] [i_4 - 2])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)55332)) : (((/* implicit */int) arr_0 [i_4 - 4]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_5]))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)177)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                            arr_20 [i_0] [i_1] [i_1] [i_4] [i_6] [i_6 + 1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [14ULL] [i_6])) ? (var_8) : (var_8))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_6] [22LL] [i_4] [22LL] [i_0 - 1])))))));
                        }
                        for (short i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_15 = ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (arr_1 [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79)))))));
                            var_16 ^= (unsigned char)231;
                        }
                        for (short i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (609170831) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_21 [(_Bool)1] [i_5] [i_0 - 1] [i_5] [i_8])))) : (((/* implicit */int) (short)1294))));
                            var_18 = ((/* implicit */_Bool) arr_10 [i_0] [14] [i_4] [i_8]);
                            var_19 ^= ((/* implicit */short) (~((-(((/* implicit */int) (signed char)-32))))));
                            arr_26 [i_8] [i_5] [i_5 + 2] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) arr_8 [i_8 + 1] [i_5 - 2] [i_4] [(signed char)12] [i_0]);
                        }
                        var_20 += arr_21 [i_0] [i_5 - 2] [i_5] [i_5] [17LL];
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)154))))) : ((+(18446744073709551615ULL)))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 19; i_9 += 1) 
                {
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)247)) != (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_5 [i_9] [i_9]))));
                }
                for (long long int i_10 = 4; i_10 < 22; i_10 += 4) 
                {
                    var_24 += ((long long int) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_1] [3U] [i_10]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        var_25 += arr_10 [i_11] [i_11] [i_10] [i_10];
                        arr_34 [(_Bool)1] [i_1] [i_10] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (var_9)))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-26029)), (5293377981921014401LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((((/* implicit */_Bool) 35073820549680589LL)) ? (134217727) : (((/* implicit */int) (signed char)35)))) : (((/* implicit */int) (signed char)-44))))) : (max((7461237199226293118ULL), (((/* implicit */unsigned long long int) -5293377981921014405LL))))));
                        var_27 = ((/* implicit */_Bool) (+(((long long int) arr_22 [(signed char)5] [i_11] [(signed char)5] [i_11 + 3] [(short)3] [i_10] [8ULL]))));
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) max((arr_23 [i_0] [(signed char)6] [i_10] [i_0 - 1] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_10]))))) / (max(((+(arr_17 [i_10 + 1] [i_0 - 1] [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1924597208021055338LL)))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) (~(min((arr_8 [i_0] [i_1] [i_10 - 1] [(unsigned short)17] [i_13]), (((/* implicit */unsigned long long int) -1924597208021055334LL))))))) ? (-134217732) : (max((((/* implicit */int) var_3)), (max((-1441728515), (((/* implicit */int) arr_22 [i_0] [i_1] [(_Bool)1] [i_12] [i_13] [i_12 + 2] [i_1])))))));
                                arr_40 [i_0] [i_1] [i_1] [i_12] [i_13] |= ((/* implicit */unsigned int) ((signed char) ((int) (-(-5900021038728646422LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) ((((5293377981921014401LL) | (((arr_16 [i_14] [i_14 - 1] [i_14] [i_14] [i_14]) ? (35073820549680589LL) : (((/* implicit */long long int) 329444126U)))))) & (((/* implicit */long long int) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 3; i_15 < 20; i_15 += 2) 
        {
            for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
            {
                {
                    arr_50 [i_15] [i_16 + 2] [i_15 - 1] [i_15] = ((/* implicit */unsigned long long int) min((1924597208021055338LL), (1924597208021055345LL)));
                    var_31 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) 134217722)), (1924597208021055332LL))) << (((((((/* implicit */_Bool) (short)-7034)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-1)))) - (121))))) << (((arr_8 [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14]) - (2092790028364667580ULL)))));
                    var_32 = ((/* implicit */unsigned long long int) 1924597208021055338LL);
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (var_0)));
    }
    for (short i_17 = 2; i_17 < 11; i_17 += 3) 
    {
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_5))))))), (min((max((((/* implicit */long long int) var_2)), (5293377981921014413LL))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)0))))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_18 = 4; i_18 < 12; i_18 += 4) 
        {
            var_35 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)-6)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_17] [(unsigned short)20] [i_17] [i_17] [i_17] [i_17] [i_17])) ? (arr_13 [i_17] [0U] [i_18 - 4] [14]) : (((/* implicit */int) var_2))))) >= (min((((/* implicit */unsigned long long int) var_9)), (var_0))))))));
            arr_57 [i_18 - 2] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-24542)))), (((/* implicit */int) arr_30 [i_18] [i_18] [(unsigned char)7] [i_17]))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 6240318836800205573LL)) : (arr_9 [i_18 + 1] [i_18] [i_18] [i_17]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24542)) * (((/* implicit */int) arr_29 [i_17] [i_17] [i_18] [i_17]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_35 [i_17 + 2])), (-1924597208021055338LL))))));
        }
    }
    for (unsigned long long int i_19 = 4; i_19 < 13; i_19 += 1) 
    {
        arr_61 [12LL] [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [(_Bool)1] [i_19 - 3]))));
        var_36 = ((/* implicit */unsigned long long int) 35073820549680589LL);
    }
    var_37 ^= ((/* implicit */int) (+(((var_1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_38 = ((/* implicit */signed char) ((unsigned int) ((short) var_1)));
    /* LoopNest 2 */
    for (signed char i_20 = 4; i_20 < 21; i_20 += 2) 
    {
        for (unsigned char i_21 = 3; i_21 < 22; i_21 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_23 = 3; i_23 < 21; i_23 += 4) 
                    {
                        for (int i_24 = 3; i_24 < 22; i_24 += 4) 
                        {
                            {
                                arr_74 [i_20] [i_21] [12U] [i_20] [i_24 - 2] [i_24] [i_24] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) 134217727)) / (var_9))));
                                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_22]))) : (1924597208021055352LL))))) >> ((((-(((var_6) + (((/* implicit */long long int) arr_69 [i_24])))))) - (1747012109491713787LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 2; i_25 < 20; i_25 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_20 + 2] [i_20 + 2] [i_20 + 2] [i_20 + 2]))))))))));
                        var_41 = ((/* implicit */int) arr_46 [i_20] [i_20] [i_20 - 3] [i_21 - 3]);
                    }
                    for (unsigned char i_26 = 2; i_26 < 21; i_26 += 3) 
                    {
                        arr_80 [i_20] [i_22] [i_22] [i_26] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) & (((/* implicit */int) ((short) arr_41 [i_22]))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_21] [10ULL] [i_26])))))) ? (((/* implicit */unsigned long long int) var_6)) : (9832027155397982406ULL))) - (16699731965425290751ULL)))));
                        var_42 ^= ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [i_20] [i_20])) : (((/* implicit */int) (short)24542)))))), (max(((+(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_30 [i_20] [i_20] [i_22] [i_26]))))))));
                    }
                    var_43 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24522)) ? (134217734) : (-889394407)))) ? (((((/* implicit */_Bool) (unsigned char)81)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_20 - 2]))))));
                }
                /* vectorizable */
                for (signed char i_27 = 2; i_27 < 20; i_27 += 2) 
                {
                    var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_20 + 1]))));
                    arr_85 [i_20] [(short)20] [(short)20] = ((((((/* implicit */int) (short)24541)) | (-889394407))) == (-557399112));
                    arr_86 [i_20] [i_20] [i_20] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) -889394402)))));
                    var_45 = ((/* implicit */short) (-(4236825956U)));
                }
                var_46 |= (+(max((arr_8 [i_20 + 1] [i_21] [i_21 - 1] [i_21] [i_20 + 1]), (((/* implicit */unsigned long long int) arr_73 [i_20] [i_21] [i_21 + 1] [i_20] [i_20])))));
            }
        } 
    } 
}
