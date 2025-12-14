/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105476
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
    var_17 = ((_Bool) min((min((((/* implicit */unsigned long long int) -1418487071581198934LL)), (1450009927060891558ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */_Bool) ((int) 18437736874454810624ULL));
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 17971700482832309634ULL)))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((((10400957587225514615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((475043590877242002ULL) & (((/* implicit */unsigned long long int) 1418487071581198948LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0 + 1] = ((/* implicit */_Bool) 2947578352483254856LL);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 15ULL)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) 9007199254740992ULL);
                            arr_14 [16] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((475043590877241995ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((18446744073709551605ULL) / (5587124776489558506ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_14))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_19 [i_5] = max((9007199254740978ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 + 1])), (var_5)))));
            arr_20 [(_Bool)1] [(signed char)19] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_5])) ? (((((/* implicit */_Bool) (signed char)-16)) ? (var_4) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15ULL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4362741973738721625LL))))) : ((~(arr_3 [i_0 - 1] [i_0] [i_0 + 1])))));
            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_5]), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((14ULL) / (13991594218804939853ULL)))))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)0), ((signed char)-18)))))));
        }
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0] [i_0 - 1])) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) : (12ULL))))))));
            arr_25 [i_6] [i_6] [i_6] = 288221580058689536ULL;
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (2794937553664249833ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) & (15972132994058614135ULL))) : (((((/* implicit */_Bool) arr_23 [i_0])) ? (arr_22 [i_6]) : (var_4))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(67108863))))));
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) 7552009682306570889ULL));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0]))) / (var_6)))))))));
                    var_26 = ((/* implicit */long long int) arr_17 [i_0 + 1]);
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_40 [(_Bool)1] [i_7] [i_7] [i_10] [i_11] [i_10] [i_0] |= (signed char)-16;
                            arr_41 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_0 + 1] [(signed char)3] [i_6] [i_6] [i_6]))) : (var_11)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15651806520045301773ULL)))) : (((unsigned long long int) var_16)))))));
            }
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) min((arr_2 [i_0 + 1]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_0] [i_0] [i_0] [i_0]))) == (15LL))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            arr_46 [i_0] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_12] [i_0])) ? (min((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (3743659729553935911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (arr_36 [i_0 + 1] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) 0LL)))))) : (((/* implicit */unsigned long long int) 2147483647))));
            var_29 = ((/* implicit */signed char) var_2);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((7249539098232955403ULL), (((/* implicit */unsigned long long int) 11LL)))) >= (((((/* implicit */_Bool) 22ULL)) ? (1680183960861454536ULL) : (((/* implicit */unsigned long long int) -536194133096614544LL)))))))) >= (17093675810190945638ULL)));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((max(((~(arr_36 [i_13] [i_0] [i_0 - 1]))), ((+(14523260608961510547ULL))))) == (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 - 2])) ? (arr_36 [i_13] [i_0 - 2] [i_0 - 2]) : (arr_15 [i_0] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << ((-(18446744073709551615ULL)))));
            var_33 = ((/* implicit */unsigned long long int) var_14);
            var_34 = ((((/* implicit */_Bool) arr_7 [i_0] [i_14] [i_0])) ? (2474611079650937499ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0 + 1]))))));
        }
    }
    for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            var_35 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15]))))));
            arr_56 [i_15] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)-24))) >= (4ULL))))) & (max((((/* implicit */unsigned long long int) arr_42 [i_16] [i_15] [i_15 - 2])), (var_4)))));
            /* LoopSeq 2 */
            for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                arr_60 [i_15] [i_15] [4LL] = ((/* implicit */_Bool) var_12);
                var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                var_37 = ((/* implicit */_Bool) min((var_37), ((_Bool)1)));
                var_38 = ((/* implicit */unsigned long long int) (+((~(arr_32 [i_15] [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_18])))));
                arr_64 [i_16] [i_16] [i_16] [i_15] &= ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        {
                            arr_69 [i_15] [i_20] [i_15] [i_19] [i_20] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (17235488174629953355ULL))))))), ((~(var_5)))));
                            var_39 -= ((/* implicit */_Bool) min((((/* implicit */int) ((max((arr_32 [i_19] [i_19] [i_19] [i_19] [i_15]), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-94)))))))), (((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
            arr_70 [i_15] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
        }
        arr_71 [i_15] [i_15] = (((~(17013337959440407177ULL))) < (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))), (((((/* implicit */_Bool) (signed char)31)) ? (var_16) : (12927250853028672131ULL))))));
    }
    var_40 = 27021597764222976ULL;
    var_41 = ((/* implicit */long long int) var_14);
}
