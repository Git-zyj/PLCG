/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153298
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), ((((-(-3210257151784259662LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 700142283U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31066))) : (var_0))))))));
        var_11 = ((/* implicit */short) ((int) ((max((var_9), (((/* implicit */unsigned int) (unsigned char)140)))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    for (short i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((var_3) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21424))))) & (((var_5) ? (3745185439U) : (((/* implicit */unsigned int) var_8)))))) : (min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) var_8)) - (var_0)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) & (var_6)))) & (((var_0) << (((var_9) - (706904500U)))))));
                    var_14 = ((/* implicit */short) ((((var_3) ? (min((3163920935U), (((/* implicit */unsigned int) 1256764075)))) : (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) < (((/* implicit */unsigned int) ((1876549834) | (min((-1997088044), (((/* implicit */int) var_3)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >= (((var_6) << (((var_9) - (706904505U)))))))) / ((-(((/* implicit */int) max((((/* implicit */short) var_1)), ((short)-22355)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            var_16 -= (+(((/* implicit */int) (short)-32585)));
                            var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) var_1))))));
                            arr_15 [i_3] [i_4] [17LL] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) (-(var_8)));
                            var_18 = ((/* implicit */unsigned char) ((_Bool) var_4));
                        }
                        var_19 = ((/* implicit */_Bool) (~((+(var_4)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_21 [i_3] [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? ((-((~(((/* implicit */int) var_3)))))) : ((-(((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                                var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)156)) || (((/* implicit */_Bool) var_0))))) | (((/* implicit */int) ((var_6) <= (((/* implicit */int) var_2))))));
                                var_21 = ((/* implicit */short) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (+(var_9)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_9 = 3; i_9 < 23; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 24; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((var_0) >= (var_0)));
                            arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] = ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) || (var_3))))));
                            arr_38 [i_12] [i_11] [i_10] [i_9 - 3] [i_9 - 1] [13] = ((/* implicit */int) var_7);
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                        var_26 += ((/* implicit */short) ((((/* implicit */int) var_1)) & (var_6)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (int i_17 = 4; i_17 < 21; i_17 += 2) 
                    {
                        {
                            arr_51 [23U] [9LL] [i_8] [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_7)) / (((var_3) ? (45324665) : (var_4)))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */int) var_2)) <= (var_6)))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((-1669215170) % (((/* implicit */int) (short)-22355))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_3) ? (-5107489554152192324LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12069)))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(var_8))))));
                            arr_52 [i_17] [i_17] [(_Bool)0] [i_17] [i_17] [2LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-22340)) < (((/* implicit */int) var_5)))))) & (var_9)));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_18 = 1; i_18 < 24; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22354))) - (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) > (var_9))))) + (((-3210257151784259662LL) & (((/* implicit */long long int) 15743849U))))));
                            arr_59 [i_19] [i_19] [6] [i_18] [i_9] [i_8] [i_19] = ((/* implicit */_Bool) ((unsigned char) var_1));
                        }
                    } 
                } 
            } 
        }
        for (short i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            var_32 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)2891))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(var_0)))));
            /* LoopNest 2 */
            for (short i_22 = 1; i_22 < 24; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 1997088044)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (1053945310U)));
                        arr_71 [i_8] [i_21] [i_21] [i_21] [i_23] = ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)166)));
                        arr_72 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) % (var_9)));
                        var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-11667)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)26)) ^ (var_6)))));
                        var_35 = ((/* implicit */int) ((var_0) << (((-3210257151784259662LL) + (3210257151784259677LL)))));
                    }
                } 
            } 
        }
        var_36 = var_7;
    }
    /* LoopSeq 3 */
    for (long long int i_24 = 3; i_24 < 20; i_24 += 4) 
    {
        var_37 = ((/* implicit */short) ((((max((var_5), (var_3))) ? (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)16652))))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_0)))) ? (max((var_6), (((/* implicit */int) var_1)))) : (((var_6) | (var_8)))))));
        var_38 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))), (var_9)));
    }
    for (int i_25 = 0; i_25 < 14; i_25 += 2) 
    {
        arr_77 [i_25] = max((((int) (~(var_6)))), (((var_7) ? (-358782916) : (((((/* implicit */_Bool) 358782895)) ? (((/* implicit */int) (short)-26154)) : (1876549852))))));
        arr_78 [i_25] = ((/* implicit */long long int) (~((~(var_9)))));
    }
    for (short i_26 = 1; i_26 < 16; i_26 += 1) 
    {
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))))) << (((var_7) ? (var_8) : (((/* implicit */int) var_7)))))))));
        var_40 = ((/* implicit */_Bool) var_8);
        /* LoopNest 3 */
        for (short i_27 = 1; i_27 < 14; i_27 += 2) 
        {
            for (int i_28 = 2; i_28 < 16; i_28 += 2) 
            {
                for (long long int i_29 = 1; i_29 < 15; i_29 += 2) 
                {
                    {
                        arr_88 [i_27] [i_28 + 1] [i_29] = ((/* implicit */unsigned int) (!(((max((((/* implicit */int) (_Bool)1)), (-489220131))) < (((/* implicit */int) var_5))))));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((var_3) ? (var_6) : (var_8))) : ((+(((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_30 = 2; i_30 < 11; i_30 += 2) 
    {
        for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
        {
            for (long long int i_32 = 0; i_32 < 14; i_32 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((15743840U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) -231349058)) ? (((/* implicit */int) var_2)) : (var_8))))))));
                        arr_101 [i_33] [i_31] [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (~(var_0))))));
                        var_43 = ((/* implicit */int) (!(var_7)));
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
                    {
                        arr_105 [i_31] = ((/* implicit */short) (-(max((var_4), (var_6)))));
                        arr_106 [7LL] [i_31] [i_31] [i_31] [i_30] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        arr_107 [i_30] [i_31] [i_31] [i_30] = ((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)41), (((/* implicit */unsigned char) var_2)))))));
                    }
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)408)) ? (((/* implicit */int) (_Bool)1)) : (-461925045)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned char)77)) : (max((var_4), (((/* implicit */int) (short)16652)))))) : (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_35 = 1; i_35 < 16; i_35 += 1) 
    {
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((var_5) && (var_5))))));
        var_46 |= ((/* implicit */_Bool) 3210257151784259661LL);
    }
}
