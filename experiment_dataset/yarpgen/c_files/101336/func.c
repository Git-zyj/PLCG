/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101336
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */long long int) 4294967295U))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_4))));
                            var_16 = ((/* implicit */signed char) var_12);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) var_9)))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned char) var_13)))));
                            arr_15 [i_5] [i_0 - 1] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32643)) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7804))) < (var_1))))));
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))))) : (((unsigned int) ((unsigned int) var_1)))));
                        var_20 -= ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43259))) | (var_12))) % (((((/* implicit */unsigned long long int) 9U)) * (var_9))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) ((unsigned short) (unsigned char)57))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        var_21 |= ((((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (25326))))) << ((((~(532676608U))) - (3762290687U))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((36028247263150080LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12458)))))) << (((/* implicit */int) var_8)))))));
                        var_24 = ((((/* implicit */_Bool) ((short) 0U))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 779575593)) : (-2835107933040986015LL)))));
                    }
                    var_25 = ((/* implicit */int) (((+(((long long int) (unsigned char)218)))) - (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-66)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((var_3) + (1292737316450836074LL)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (140737488355327LL)))))));
                    var_26 = ((/* implicit */short) (~(min((max((((/* implicit */long long int) 779575593)), (-36028247263150091LL))), (((/* implicit */long long int) (-(375767925))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)83)))), (((/* implicit */int) (short)-28615)))), (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned char)60)))))));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) 4294967279U)) ? ((+(((((/* implicit */_Bool) (signed char)4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) max((((-327651363695557755LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_9))))))))))));
                var_29 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((-5705860032636420392LL) ^ (((/* implicit */long long int) 1690811154U))))) ? (((/* implicit */int) var_6)) : (var_5))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_10)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) -5705860032636420375LL))) - (max((((/* implicit */unsigned long long int) 962469797)), (var_9))))))));
        arr_25 [(short)19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) >= (((var_9) >> (((((/* implicit */int) var_0)) - (4990)))))));
        arr_26 [i_9] [i_9] = var_2;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_31 *= ((/* implicit */short) (-(var_12)));
            arr_29 [i_9] = ((/* implicit */int) (short)-32391);
        }
        /* LoopNest 3 */
        for (short i_11 = 1; i_11 < 17; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 19; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 1512204671U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (((int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)196))))));
                        arr_38 [i_9] [i_13] [i_13] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1105808129113490953LL)) == (var_9)))) : (((/* implicit */int) ((4294967278U) < (1690811131U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_11)))))) : (max((((((/* implicit */_Bool) var_7)) ? (var_3) : (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (1357286987))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) var_5)) / (169170306U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 711684705)) || (((/* implicit */_Bool) 2604156155U)))))) - (((((/* implicit */_Bool) (signed char)1)) ? (169170303U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                for (signed char i_17 = 2; i_17 < 19; i_17 += 4) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) 274861129728LL)), (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)65261)))))))));
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((-274861129723LL), (((/* implicit */long long int) (short)-6459)))) ^ (((/* implicit */long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((711684705) - (((/* implicit */int) var_4))))) ? (var_13) : (((((/* implicit */int) (signed char)0)) / (var_5)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
    {
        var_35 += ((/* implicit */signed char) (+(min((var_5), (((/* implicit */int) (short)-2))))));
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            arr_56 [i_19] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned char)39)) + (var_5))) : (((/* implicit */int) ((short) var_8)))))));
            var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 364800523)) ? (((/* implicit */int) (unsigned short)26158)) : (var_13))))) ? (((/* implicit */long long int) ((var_13) & (((/* implicit */int) var_8))))) : ((~(var_3)))));
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((long long int) var_2)) - ((+(((var_1) % (((/* implicit */long long int) 4125796981U)))))))))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 908816067U)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_10))))) : (((var_1) % (((/* implicit */long long int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)));
        }
    }
}
