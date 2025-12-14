/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128623
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~((~(arr_6 [i_0 - 1]))))))));
                    var_16 = ((/* implicit */unsigned long long int) 0LL);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (451673432)))))) ? (((/* implicit */int) var_0)) : (var_6)));
        arr_8 [i_0] = var_7;
    }
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)6)), (var_14)))) ? ((+(((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) var_7)))))));
        arr_13 [i_3] = ((/* implicit */_Bool) var_11);
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        {
                            var_18 |= var_0;
                            var_19 = ((/* implicit */short) (-(max((arr_11 [(signed char)2] [i_4 + 3]), (((/* implicit */int) var_9))))));
                            var_20 += ((/* implicit */long long int) var_5);
                            arr_23 [i_3] [i_3] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) ((min((arr_3 [i_4 + 1]), (arr_11 [i_3 - 1] [i_4 + 4]))) < ((+(arr_3 [i_4 + 1])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_28 [i_3 + 3] [i_4 + 2] [i_4 + 4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) arr_22 [16U] [i_4]);
                        var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(var_8)))))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_9 [i_4 + 4] [i_3 + 1])) - (1988))))) : ((~(((/* implicit */int) arr_12 [i_4]))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 19; i_10 += 4) 
        {
            for (signed char i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                {
                    var_22 = (+((+(((/* implicit */int) arr_4 [(short)14] [i_10] [(short)14])))));
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned short) (unsigned char)103))))))));
                }
            } 
        } 
    }
    for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) min(((short)5), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) (signed char)60))))) ? (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)103)))) ? (((/* implicit */unsigned long long int) min((65011712U), (var_1)))) : (11095031937968187129ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_12] [i_12 + 2])))))));
        arr_38 [i_12 + 2] [18U] |= ((/* implicit */signed char) var_9);
        arr_39 [8] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_9), ((unsigned char)254)))) ? (max((-5305107779202523105LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8)))))))), (((/* implicit */long long int) ((((arr_37 [6U]) ? (var_10) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12 - 1]))))))));
    }
    var_25 ^= ((/* implicit */signed char) ((var_4) ? (((((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) var_14)))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_4)))))))));
    /* LoopSeq 2 */
    for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_26 = min((min((((/* implicit */int) (_Bool)1)), (var_6))), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_13])) > (((/* implicit */int) arr_26 [i_13]))))));
        var_27 = ((/* implicit */signed char) (((((!(arr_24 [i_13] [i_13] [i_13]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_17 [i_13] [i_13] [i_13] [i_13])) / (arr_29 [i_13] [9U])))) : (arr_10 [i_13] [i_13]))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))));
        var_28 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(5944180796305527744ULL)))) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_13))))) ? (min((((((/* implicit */long long int) var_1)) / (arr_33 [2ULL] [2ULL] [2ULL]))), (((/* implicit */long long int) (short)29749)))) : (((long long int) ((((/* implicit */_Bool) arr_32 [i_13])) ? (((/* implicit */unsigned long long int) -4220607617076162167LL)) : (arr_21 [i_13] [12LL] [i_13] [i_13]))))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((-4741324998259248204LL), (((/* implicit */long long int) var_14)))))) ? (((int) min((((/* implicit */short) arr_35 [i_13])), ((short)29752)))) : (((/* implicit */int) ((signed char) arr_3 [i_13]))))))));
    }
    for (short i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-2147483647 - 1)))));
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            arr_47 [(short)13] = ((/* implicit */_Bool) min((min((1022586469546502059LL), (243099358067416999LL))), (((/* implicit */long long int) var_7))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) - (-25LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_14] [i_15] [i_15] [i_15]))))))) : (((((/* implicit */_Bool) -2270103342729860752LL)) ? (4220607617076162177LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            arr_48 [i_14] [i_14] = arr_36 [i_14] [i_14];
            arr_49 [i_14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_15] [i_14] [i_14])), (var_10)))) ? (((long long int) (signed char)25)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)9751)))))));
        }
        /* vectorizable */
        for (long long int i_16 = 3; i_16 < 18; i_16 += 2) 
        {
            arr_53 [i_14] [i_16] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_4)))))));
                        arr_60 [i_14] [i_16 - 3] [i_17] [i_19] [i_16 - 3] &= ((/* implicit */unsigned int) var_6);
                        arr_61 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 - 2] = ((/* implicit */unsigned long long int) var_14);
                        arr_62 [i_14] [i_16] [i_14] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16169)) ? (((/* implicit */int) (unsigned short)34591)) : ((+(8380416)))));
                        var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-5941)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (0LL))) % (((/* implicit */long long int) arr_11 [i_16 - 3] [i_16 + 1]))));
                    }
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16174)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_18] [i_16] [i_16 - 3] [i_16] [16U])))))));
                    arr_63 [i_14] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */long long int) var_14);
                }
                for (short i_20 = 0; i_20 < 19; i_20 += 3) /* same iter space */
                {
                    arr_66 [i_17] [i_16 + 1] [i_16] [i_16] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_16 - 2] [i_16 - 1] [i_16 - 3]))));
                    var_35 = ((/* implicit */short) var_3);
                    /* LoopSeq 2 */
                    for (signed char i_21 = 1; i_21 < 18; i_21 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) arr_3 [i_21]);
                        var_37 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))));
                    }
                    for (short i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        arr_71 [i_16] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [12] [i_16 - 1] [i_16 - 3])) || (((/* implicit */_Bool) (signed char)104))));
                        var_38 ^= ((/* implicit */long long int) (_Bool)1);
                        arr_72 [(short)4] [i_16] [i_17] [i_20] [i_22] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_70 [i_16 - 2] [i_16 - 3] [i_16 + 1] [i_16 - 2] [i_16] [i_16 - 3]))));
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_12)))) ? (-4220607617076162177LL) : (((((/* implicit */_Bool) var_6)) ? (-4220607617076162177LL) : (arr_65 [i_14] [i_16 - 1] [i_17] [i_20] [i_22]))))))));
                    }
                    var_40 = ((/* implicit */int) (((-(11292867946848082879ULL))) << ((+(4)))));
                }
                arr_73 [i_16] [i_16] [(signed char)12] [i_16] = (+(((unsigned int) var_8)));
            }
        }
    }
    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) -6116761121544004162LL)) ? (min((((/* implicit */unsigned long long int) 25165824)), (1855951662245758447ULL))) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-14)), ((unsigned char)89)))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
}
