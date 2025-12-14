/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108727
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (var_3)));
                var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)5))))) / (13ULL)))));
                var_12 *= ((/* implicit */signed char) var_4);
                var_13 = ((/* implicit */short) ((((/* implicit */int) (short)10571)) == (((/* implicit */int) min(((short)-23775), ((short)-10558))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (+(min((((/* implicit */int) min((arr_1 [i_2]), ((short)23774)))), (((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) arr_0 [i_2]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    arr_11 [i_4 + 2] [3LL] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1482371307)) ? (max((((/* implicit */long long int) (signed char)23)), (5605565503318137849LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1919025253)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [4]))) : (23U))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)38))))))))) : (((arr_6 [i_2]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (0ULL))) : (((/* implicit */unsigned long long int) 7796424940019342787LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) > (-2083939839)))) * (((/* implicit */int) (unsigned char)0))));
                                arr_18 [i_2] [i_6 - 1] [i_4 - 1] [i_6 - 1] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (-2947034134057916259LL));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23769)) ? (12147933656258716044ULL) : (((/* implicit */unsigned long long int) 1509917535))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_17 *= ((/* implicit */unsigned int) (unsigned char)124);
            var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) || (((/* implicit */_Bool) (((_Bool)1) ? (0) : (arr_19 [i_8]))))))), (((((((/* implicit */_Bool) -7796424940019342788LL)) ? (15815510019914481419ULL) : (((/* implicit */unsigned long long int) 984192722)))) - (((((/* implicit */_Bool) 68497336U)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))))));
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 18; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 4) 
                {
                    {
                        var_19 += ((((/* implicit */_Bool) max((((/* implicit */long long int) min((68497336U), (((/* implicit */unsigned int) 9))))), (arr_21 [i_8 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) || (((/* implicit */_Bool) (unsigned short)21610)))))) : (min((((/* implicit */unsigned long long int) 7796424940019342762LL)), (arr_22 [i_7 - 1] [i_8 + 1] [i_9]))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-111))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1374326577) : (-2052768434)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_28 [i_10 + 1] [3] [(_Bool)1] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31896)))))) ? (min((arr_22 [i_8 - 1] [i_8 - 1] [(unsigned short)14]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_21 = ((/* implicit */long long int) (~((~((+(arr_24 [i_9] [i_9])))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_27 [i_7 + 1] [i_8 + 1] [i_8 - 1] [6U] [(_Bool)1] [i_7]))), (((/* implicit */unsigned short) var_9))))))))));
        }
        var_23 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)0)), (var_7)))), (((((/* implicit */_Bool) arr_24 [(unsigned short)2] [8LL])) ? (((/* implicit */unsigned long long int) -1374326571)) : (2022798098747125534ULL)))))));
    }
    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        arr_31 [3U] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_6)) ? (-25LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */long long int) min((var_5), (((/* implicit */int) arr_1 [i_11])))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_11])) % (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) -30)) : (14ULL)))))) ? (((/* implicit */unsigned int) (~(0)))) : (((((/* implicit */_Bool) ((14ULL) * (((/* implicit */unsigned long long int) -10))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3391139932U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned short)43926)) : (((/* implicit */int) (signed char)4))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            for (signed char i_13 = 3; i_13 < 9; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_25 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [6])) ? (((/* implicit */unsigned long long int) -8961597749596562868LL)) : (8ULL)))) ? (((((/* implicit */_Bool) 0ULL)) ? (7011083340177678715LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (-4265275774928780506LL))) & (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)60)), (var_7)))) | (((/* implicit */int) (signed char)-9))))));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) ((15192641291866485747ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12]))))))))) / ((-(((((/* implicit */_Bool) (unsigned short)10683)) ? (3391139938U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4065)))))))));
                        var_27 = 3391139918U;
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [(unsigned char)7] [i_15 + 1]))))))));
            var_29 += ((/* implicit */unsigned short) (signed char)-103);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 3266351684801778145LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */unsigned short) arr_9 [3LL]);
            arr_45 [i_16] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (short)23774)), (((((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_16])) ? (877015038U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))));
            arr_46 [8] [i_11] [i_16] = ((/* implicit */unsigned char) (unsigned short)65513);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)7)), (5199291423067027479ULL)))) ? (3562303167U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))));
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
            {
                var_33 += ((/* implicit */signed char) (!(((((/* implicit */int) var_8)) <= (((/* implicit */int) (_Bool)1))))));
                var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_39 [(short)0] [i_18] [i_11] [i_11])) ? (732664114U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))))) <= (((/* implicit */unsigned int) -1758279035))));
                var_35 = ((/* implicit */int) (signed char)104);
            }
            for (signed char i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned short) (signed char)37);
                arr_55 [i_11] [(signed char)1] [i_19] [i_19] = ((/* implicit */int) var_7);
                arr_56 [i_11] [i_17] [i_11] = ((/* implicit */unsigned short) (!(arr_3 [i_11] [i_19] [i_19])));
                arr_57 [i_11] [6U] [(short)9] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [(short)0] [1ULL])) : (((/* implicit */int) arr_9 [i_11]))));
            }
            for (signed char i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
            {
                arr_60 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3391139932U)) ? (arr_33 [i_11]) : (((/* implicit */int) arr_30 [i_11]))))) && (((/* implicit */_Bool) var_6))));
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 6; i_21 += 4) 
                {
                    for (unsigned short i_22 = 1; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_2))));
                            arr_67 [i_11] [i_17] [i_22] [(unsigned char)8] [i_21] [i_21] = ((/* implicit */unsigned long long int) (signed char)0);
                        }
                    } 
                } 
            }
            for (signed char i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
            {
                var_38 = var_7;
                var_39 = ((/* implicit */int) min((var_39), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (_Bool)1))))));
            }
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_2)) ? (-6688315611710023025LL) : (-8961597749596562871LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
            arr_72 [i_11] [i_11] [7] = (~(((/* implicit */int) (unsigned short)12)));
            var_41 = ((/* implicit */int) var_9);
        }
    }
    var_42 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */_Bool) (~(1310831382U)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
}
