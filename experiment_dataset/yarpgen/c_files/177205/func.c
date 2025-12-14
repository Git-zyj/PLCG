/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177205
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
    var_20 = (unsigned short)15360;
    var_21 = ((/* implicit */short) max(((((_Bool)0) ? ((~(((/* implicit */int) (signed char)-52)))) : (((/* implicit */int) (unsigned short)59802)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)115))) : (var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (4287149227U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)26184)) >= (((/* implicit */int) var_1)))))))) : (min((((unsigned int) var_9)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4227858432U)) && (((/* implicit */_Bool) var_17)))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    var_22 = (signed char)43;
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_23 &= ((/* implicit */unsigned int) min((((arr_3 [5U] [i_3 + 3] [15LL]) / (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((int) arr_7 [i_0] [(short)10] [i_1] [i_3] [i_3 - 2] [(_Bool)1])))));
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0] [i_2 - 2] [i_3 + 3]))));
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (short)26184)))))), (var_7))))));
                        var_26 = ((/* implicit */_Bool) (-((~((+(((/* implicit */int) (unsigned char)217))))))));
                        arr_13 [i_2] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3980785141240623680LL)) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1])))))) : (((/* implicit */int) ((unsigned short) var_15)))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))))), ((~(109693873U))))))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_27 += ((/* implicit */unsigned int) (~(((((/* implicit */int) ((unsigned short) (short)-10657))) >> (((((/* implicit */int) arr_1 [i_0])) - (46059)))))));
                    var_28 = min((((/* implicit */long long int) ((_Bool) (~(-1465098179))))), (arr_7 [i_0] [i_0] [i_5] [i_1] [(unsigned short)15] [i_5]));
                    var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((short) var_19))))));
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 3393022940497390228LL))) ? (min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (arr_11 [i_6 + 1] [i_6] [i_6] [i_6 - 1])))) >= (min((((arr_6 [i_0] [i_1] [i_6]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5734))))), (((long long int) arr_19 [i_0] [i_1] [i_1] [i_6]))))));
                    arr_21 [i_6] [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)33705), (((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [21] [i_1] [6]))) : (((unsigned int) arr_18 [(unsigned short)19] [i_0] [i_1] [i_6]))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_0] [(unsigned short)17])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                    arr_22 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */signed char) ((long long int) (unsigned short)59801));
                }
                for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_26 [i_7] [(unsigned char)16] [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-10657))))) + (((/* implicit */int) arr_20 [(unsigned short)8] [i_1] [i_0]))))) ^ (8856992632739816348LL)));
                    var_31 += ((/* implicit */long long int) ((unsigned int) min((min((var_14), (((/* implicit */unsigned int) arr_5 [i_1] [i_1])))), (((/* implicit */unsigned int) var_10)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((signed char) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)194))))), (max((((/* implicit */long long int) (unsigned short)59801)), (arr_3 [i_0] [i_0] [15])))))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(-8549765735083164722LL))) / ((-(8549765735083164721LL)))))) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [i_8] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (signed char)44))) * (((((/* implicit */_Bool) (unsigned short)1354)) ? (((/* implicit */int) (short)-9737)) : (((/* implicit */int) (_Bool)1))))))))))));
                    }
                    for (short i_9 = 4; i_9 < 21; i_9 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) min((((/* implicit */int) max((max(((unsigned short)64181), (((/* implicit */unsigned short) (signed char)-60)))), (((/* implicit */unsigned short) arr_19 [i_9 - 3] [i_9 - 2] [i_9] [i_9]))))), (((((/* implicit */int) (unsigned short)59792)) >> ((((~(871908325U))) - (3423058941U))))))))));
                        arr_32 [i_9] &= ((/* implicit */signed char) (short)-28636);
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_35 = ((/* implicit */long long int) 1825622225U);
                            arr_35 [i_10] [i_7] [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)41862)))), (((((/* implicit */_Bool) arr_16 [i_7] [i_9])) ? (((/* implicit */long long int) 2469345071U)) : (-7133544254091805237LL))))) >> (((max((((/* implicit */int) ((unsigned char) 0LL))), (((((/* implicit */int) arr_2 [i_9] [i_1] [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_1])) - (26878))))))) - (56623076)))));
                            var_36 = ((/* implicit */unsigned char) (~((+((+(var_8)))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            var_37 *= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) var_1)))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_7] [2LL]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5733)))))) ? (((/* implicit */int) (short)9855)) : (((((/* implicit */int) (unsigned short)1338)) ^ (((/* implicit */int) arr_0 [i_7] [i_11]))))));
                            var_39 = ((/* implicit */signed char) var_19);
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)46)) : ((-(((/* implicit */int) var_4)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            arr_40 [i_7] [i_9] [i_7] [i_1] [i_1] [i_0] [i_7] = ((((/* implicit */_Bool) ((9115955854779236928LL) >> (((/* implicit */int) arr_17 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12 + 1] [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12] [i_12]))) : ((~(-8549765735083164740LL))));
                            var_41 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18916))))) < (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57261))))))));
                            var_42 = ((/* implicit */short) arr_30 [i_1] [i_9]);
                            var_43 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) var_15))))));
                        }
                        arr_41 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)-21763)))) ? (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_7] [i_9] [(unsigned short)9] [i_7])) : (((((/* implicit */_Bool) arr_19 [i_9] [i_7] [i_1] [i_0])) ? (arr_8 [i_0] [i_1] [i_7] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33815)))))))) ? (((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0]))) ? ((-(arr_18 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)59)) ? (arr_3 [i_9] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1338))))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_18)), (arr_7 [i_0] [i_7] [i_7] [0LL] [(short)17] [i_7]))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)236)))))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 3590045008U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46680))) : (0LL))) / (arr_29 [i_7] [i_7] [i_1] [i_7]))))));
                        arr_45 [(_Bool)1] [i_1] [(short)20] [i_7] = ((/* implicit */unsigned short) (~(max((arr_3 [i_1] [i_7] [i_13]), (arr_3 [i_13] [i_1] [i_0])))));
                        arr_46 [i_7] [i_7] [10U] [(unsigned short)15] [i_7] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_30 [i_0] [i_7]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) (unsigned short)12898)) : (((/* implicit */int) (unsigned short)52619)))) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0] [i_1])), (var_7))))))) : (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (2916895181U)))) > (3LL))))));
                        var_45 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)216)) : (var_11))))))) == (((((/* implicit */_Bool) max(((short)24265), (((/* implicit */short) arr_17 [i_1]))))) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_1] [i_1] [i_7] [i_13])) : (((/* implicit */int) ((((/* implicit */_Bool) 884492129)) && (((/* implicit */_Bool) (signed char)63)))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) var_13);
                        arr_50 [i_0] [i_7] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-20LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_14]))))) : (((((/* implicit */int) arr_6 [i_1] [17U] [(signed char)9])) >> (((7062659673262864775LL) - (7062659673262864763LL)))))));
                        var_47 = ((/* implicit */_Bool) (unsigned char)212);
                        arr_51 [i_0] [i_7] = ((/* implicit */unsigned char) var_11);
                    }
                    arr_52 [i_7] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-44)) ? (min((((/* implicit */unsigned int) (unsigned char)32)), (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_1] [i_7] [i_7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_7] [(signed char)20] [i_1]))))))) >> ((((~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)39842)) : (((/* implicit */int) arr_9 [i_0] [i_1])))))) + (96)))));
                }
            }
        } 
    } 
}
