/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104138
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1927014433)) ? (3266617612U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))))) ? (((/* implicit */int) (unsigned short)28967)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (5141807206750202530ULL) : (((/* implicit */unsigned long long int) 2040496550135463441LL))))) ? (((/* implicit */int) ((signed char) -922862727))) : (((/* implicit */int) var_6))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 |= var_8;
        var_12 = ((/* implicit */unsigned int) ((unsigned short) ((int) var_5)));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) arr_1 [(_Bool)1] [i_0])) : (var_0)));
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == ((~(16950391196160625900ULL)))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 3065886823U)) ? (var_0) : (((/* implicit */long long int) arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(18027130808907049745ULL))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_2] [(short)6] [i_3] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_5 [i_1] [i_4])))), (((/* implicit */int) arr_12 [i_3 - 1] [i_3] [12] [(signed char)11]))));
                        var_15 = ((/* implicit */unsigned int) var_1);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 4; i_5 < 12; i_5 += 2) 
                        {
                            var_16 = var_8;
                            arr_18 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) min((11022741380247417504ULL), (18446744073709551612ULL)));
                            var_17 = ((/* implicit */unsigned long long int) ((3353320838U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-2147483647 - 1)))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) -47213652680956301LL)) ? (((/* implicit */unsigned long long int) 7006634544004954529LL)) : (419613264802501872ULL))) != (min((((/* implicit */unsigned long long int) ((arr_13 [(unsigned short)4] [i_2]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63)))))), ((-(9344894992066076897ULL))))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) var_5);
                            var_20 -= ((/* implicit */unsigned char) ((arr_13 [i_2 + 1] [i_3 - 1]) ? (922862721) : (var_8)));
                            var_21 = ((/* implicit */unsigned short) var_9);
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_13 [i_1] [i_2 + 1]))));
                            arr_24 [i_3] [(unsigned char)11] = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) max((-2147483627), (arr_9 [i_2 + 1] [i_7]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        arr_29 [(signed char)0] [i_1] [i_2] [i_3] [i_8] &= ((((/* implicit */int) arr_16 [i_2 + 1] [(signed char)2])) < (((/* implicit */int) arr_16 [i_2 - 1] [0U])));
                        var_23 = ((/* implicit */int) (+(var_2)));
                        arr_30 [(short)0] [(short)0] [i_3 + 1] [i_3] = ((/* implicit */int) arr_4 [i_1]);
                    }
                    for (int i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        arr_33 [i_2] [i_3] [i_9] = ((/* implicit */unsigned int) (-(0LL)));
                        var_24 = max((((/* implicit */int) ((-1927014433) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [(unsigned char)10] [i_1] [i_2] [i_3 - 1] [i_9] [10])))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_2)))) ? (((/* implicit */int) arr_22 [(_Bool)1])) : (((/* implicit */int) (signed char)-42)))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(var_2))))));
                        var_26 = ((/* implicit */signed char) (short)16012);
                    }
                    arr_37 [i_3] = ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4))), (var_4))));
                    var_27 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_4 [(short)2]), (((/* implicit */unsigned int) (unsigned char)71))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_23 [(signed char)12] [i_2 + 1] [i_2] [(signed char)12] [(unsigned char)3] [i_2 + 1]), (((/* implicit */unsigned char) arr_5 [0ULL] [i_3 - 1]))))))) : (min((min((((/* implicit */unsigned int) (signed char)-30)), (arr_28 [(short)6] [i_1] [i_2] [12ULL]))), (((/* implicit */unsigned int) min(((short)9746), ((short)-7024))))))));
                    var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (arr_17 [i_3] [12ULL] [i_3] [12ULL])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-42)) : (-493894478))) : (((/* implicit */int) max((var_5), (((/* implicit */short) (signed char)88)))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */short) min((arr_19 [i_1] [(signed char)2] [i_1] [11] [i_1] [i_1]), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) <= (3210855634U)))));
        var_30 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_16 [i_1] [(signed char)10])))))))));
    }
    for (unsigned char i_11 = 3; i_11 < 15; i_11 += 4) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1))), (((/* implicit */long long int) (!(arr_38 [i_11 + 1]))))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */unsigned long long int) 4096)), (10ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (15655396107997164438ULL))))))));
    }
    for (unsigned char i_12 = 3; i_12 < 8; i_12 += 3) 
    {
        var_32 = ((/* implicit */short) (~(max((((-913159616) ^ (((/* implicit */int) (signed char)-42)))), (min((((/* implicit */int) (short)24510)), (7)))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            for (signed char i_14 = 1; i_14 < 10; i_14 += 3) 
            {
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((5564763146912517799LL), (var_0)))) ? (((/* implicit */int) arr_20 [i_14])) : (((((/* implicit */_Bool) arr_17 [i_14] [i_14] [i_12 - 3] [12ULL])) ? (((/* implicit */int) arr_45 [i_13] [i_14])) : (((/* implicit */int) arr_25 [i_14] [i_14] [i_13] [i_13] [i_13] [i_14 + 1]))))))) ? (((/* implicit */unsigned long long int) min((arr_10 [i_12 - 1] [i_14 - 1]), (arr_10 [i_12 + 2] [i_14 + 1])))) : (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)123))))) : ((~(15089121609297529676ULL)))))));
                    var_34 = ((/* implicit */int) min((var_34), ((-(((/* implicit */int) min((arr_22 [(short)6]), (arr_22 [2]))))))));
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)161))))) <= ((-(((/* implicit */int) var_3)))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            for (unsigned char i_16 = 4; i_16 < 10; i_16 += 1) 
            {
                {
                    arr_56 [(unsigned char)7] [i_15] [i_16] = ((/* implicit */int) (~(((14525448277070698344ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-24502), ((short)-6176)))))))));
                    var_36 *= ((/* implicit */signed char) (+(((unsigned int) var_8))));
                    arr_57 [i_16] = ((/* implicit */short) arr_17 [i_12] [i_15] [i_15] [i_16 - 1]);
                    var_37 = ((/* implicit */unsigned int) arr_21 [i_12] [i_12 - 1] [i_15] [i_15] [i_16]);
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) 
    {
        var_38 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_60 [i_17])) << (((((/* implicit */int) var_6)) - (199))))));
        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(var_9))), (min((-4), (((/* implicit */int) arr_60 [(unsigned char)14])))))))));
        arr_62 [i_17] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)27586)))) != (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)36577)) < (869449565)))), (arr_58 [i_17]))))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_67 [i_18] [i_17] [i_19] [i_20]))))))));
                        arr_69 [i_17] = ((/* implicit */short) min((min(((~(-2796552768924107742LL))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (+(480))))));
                        var_41 = ((/* implicit */long long int) arr_63 [7] [i_18] [i_20]);
                        var_42 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)63595), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */int) (unsigned short)62105)) + (((/* implicit */int) arr_67 [i_17] [i_18] [4] [i_20])))) : (min((var_8), (((/* implicit */int) var_5))))))), ((+(((unsigned long long int) var_9)))));
                        arr_70 [i_17] [11] [i_18] [i_17] [i_17] = ((/* implicit */long long int) 164046144U);
                    }
                } 
            } 
        } 
    }
    for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
    {
        var_43 = ((/* implicit */int) (unsigned char)255);
        /* LoopSeq 1 */
        for (long long int i_22 = 0; i_22 < 20; i_22 += 3) 
        {
            var_44 = ((/* implicit */int) min((var_44), ((~(((/* implicit */int) ((unsigned char) -8023097515641328227LL)))))));
            arr_76 [i_21] [i_21] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(770786530)))))) / (var_1)));
        }
        var_45 = var_8;
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_71 [i_21] [i_21])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1586317379)) ? (((/* implicit */unsigned int) arr_71 [i_21] [i_21])) : (164046144U))))));
    }
    for (signed char i_23 = 0; i_23 < 17; i_23 += 1) 
    {
        arr_81 [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) (unsigned char)15)), ((short)19249)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -494)))))) : (var_2)));
        var_47 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_1))))), (((/* implicit */long long int) var_9))));
        var_48 = ((/* implicit */int) ((var_0) % (((/* implicit */long long int) ((((_Bool) 839694523U)) ? ((-(4153103828U))) : (((/* implicit */unsigned int) (-(90276004)))))))));
    }
    for (int i_24 = 2; i_24 < 24; i_24 += 1) 
    {
        var_49 = ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_83 [i_24])) ? (9101849081643474699ULL) : (((/* implicit */unsigned long long int) arr_82 [i_24 - 1])))))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_9), (1068368688)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 742456994U)) : (var_2))))))));
        arr_84 [i_24 - 2] [i_24] = ((/* implicit */unsigned char) min((((int) min((-2043851234), (-1514272822)))), (max((((((/* implicit */_Bool) 4130921170U)) ? (((/* implicit */int) (short)-27606)) : (arr_83 [i_24]))), (((/* implicit */int) (short)-27578))))));
        var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) var_1))));
        var_51 |= ((((/* implicit */int) (unsigned short)56956)) % (((/* implicit */int) (unsigned char)8)));
    }
    var_52 = ((/* implicit */unsigned short) var_2);
}
