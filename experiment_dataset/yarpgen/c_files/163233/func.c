/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163233
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
    var_12 = ((long long int) var_5);
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_7)))))))) ? (((min((var_1), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_10))))))) : (((((/* implicit */_Bool) ((unsigned short) var_5))) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_9))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32760)) * (((/* implicit */int) (unsigned short)32775))));
        arr_4 [i_0] = min((((long long int) var_9)), ((~(var_0))));
        arr_5 [(_Bool)1] = ((((((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_4))) & (var_0))) | ((((-(var_8))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19366)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)88))))))));
        arr_6 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_11))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))) & (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) & (var_11))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_8))) : (max((max((((/* implicit */long long int) var_2)), (var_11))), (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))))));
            var_15 ^= ((/* implicit */long long int) var_9);
            var_16 = ((/* implicit */long long int) max((var_16), (((((((/* implicit */_Bool) ((signed char) var_1))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43023))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_10))))))) >> (((/* implicit */int) min((max((var_3), (var_3))), (((/* implicit */signed char) (!(((/* implicit */_Bool) -8570861989031933702LL))))))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)120))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)22)) & (((/* implicit */int) (unsigned short)32746))))), (-5894088788184586721LL)))));
            arr_14 [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((max((((var_7) ? (var_0) : (var_4))), (((/* implicit */long long int) var_10)))) >= (((/* implicit */long long int) (~((+(((/* implicit */int) var_3)))))))));
            var_18 = ((/* implicit */signed char) ((long long int) ((signed char) ((signed char) var_1))));
            var_19 += ((/* implicit */_Bool) ((signed char) max((min((var_1), (var_4))), (((/* implicit */long long int) min((var_5), (var_6)))))));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */long long int) ((signed char) var_2));
                            arr_25 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | (-2662852395606138067LL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_9 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_7)) << (((var_1) + (3087318050737506318LL)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_1))) / (((/* implicit */int) var_5))));
                    }
                } 
            } 
            arr_31 [i_4] [i_4] &= ((/* implicit */signed char) (+(((var_7) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) ((((/* implicit */int) (signed char)94)) + (((((/* implicit */int) (signed char)-71)) ^ (((/* implicit */int) (signed char)116))))))) * (-1LL)))));
            arr_35 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) (signed char)0)));
        }
        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) ? (((((long long int) var_7)) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))))) : (((/* implicit */long long int) ((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((var_8) / (var_8))))))))))));
        arr_36 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)26666)) >= (((/* implicit */int) (signed char)-1)))) ? (((((/* implicit */_Bool) ((unsigned short) -2101384335165312041LL))) ? (min((var_11), (((/* implicit */long long int) var_10)))) : (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_8))))) - (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    }
    for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
    {
        arr_40 [i_11] = ((((/* implicit */_Bool) (((_Bool)1) ? (-2495448216363916379LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))))));
        var_24 = ((long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_8))) - (var_1)));
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 9; i_12 += 2) 
        {
            for (signed char i_13 = 2; i_13 < 6; i_13 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 2; i_14 < 8; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_15 = 1; i_15 < 9; i_15 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_0)))));
                            var_26 += ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) ((signed char) var_6))))));
                        }
                        arr_53 [i_11] [i_12] [i_11] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))) + (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_16 = 2; i_16 < 7; i_16 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)25))))) / (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) * (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_0)))));
                        }
                        for (long long int i_17 = 1; i_17 < 9; i_17 += 3) 
                        {
                            var_29 = ((signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_8)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_2)) + (21)))))))) ^ (max((((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_0))), (min((var_8), (((/* implicit */long long int) var_5))))))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_8)))))))));
                        }
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            arr_62 [i_11] [i_11] [i_11] [i_14 - 1] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) : (min((((/* implicit */long long int) var_2)), (var_11)))));
                            arr_63 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */long long int) var_3)))), (var_0)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_10)))))) : ((+(((/* implicit */int) var_9))))));
                            var_32 = ((((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_2))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))));
                            arr_64 [i_11] [i_12] [i_13] [i_14] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((((long long int) var_1)) >= (var_4)))) * (((/* implicit */int) max((var_7), (var_7))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_19 = 2; i_19 < 8; i_19 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) ((signed char) (+(var_8))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_8)));
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            var_35 *= ((signed char) var_1);
                            arr_70 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((var_7) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_6)))))));
                        }
                        var_36 = ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_11))) >> (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))));
                    }
                    var_37 = ((/* implicit */_Bool) var_5);
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned short i_22 = 4; i_22 < 9; i_22 += 1) 
                        {
                            {
                                var_38 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((long long int) var_4)))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) <= (var_1))))));
                                arr_78 [i_11] [(_Bool)1] [i_11] [i_11] [i_21] [i_22 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-10LL) + (6363830890281572228LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : ((+(-1LL)))));
                                var_39 |= ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_0))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) != (max((((/* implicit */long long int) var_7)), (var_8))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43023))) / (-9058802459147311467LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
                                arr_79 [i_11] [i_12] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_23 = 1; i_23 < 8; i_23 += 4) 
    {
        arr_83 [i_23] = ((/* implicit */long long int) ((_Bool) min((var_4), (((/* implicit */long long int) var_5)))));
        arr_84 [i_23] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((var_4) <= (var_4)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
    }
    var_40 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((var_11) * (((/* implicit */long long int) ((/* implicit */int) var_9))))))) > (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_7)))))))));
}
