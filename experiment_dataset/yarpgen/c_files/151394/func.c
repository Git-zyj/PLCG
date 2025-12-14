/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151394
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4335)) ? (-5192761805520808408LL) : (-5192761805520808400LL)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_0))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (arr_0 [i_0]))), (((785466783) % (785466783)))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_19 -= ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_4] [(short)21] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5] [i_4] [i_2]))));
                            var_20 = ((int) (_Bool)0);
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_1] [4] = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [17LL] [12U] [i_4] [0]))) - (-5192761805520808403LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 19296570137406126LL)) ? (1719750704) : (-1456487953))))));
                            var_21 &= ((/* implicit */int) var_13);
                            arr_25 [i_3] [0LL] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (arr_23 [i_6] [(unsigned char)9] [i_4] [(unsigned char)9] [i_2] [i_1]))) - (min((arr_23 [i_6] [i_4] [i_3] [i_3] [i_1] [i_1]), (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((var_1) >> (((5192761805520808415LL) - (5192761805520808397LL))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))))))));
                            arr_26 [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_4] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)1)) : (var_6))) >> (((((((/* implicit */_Bool) var_10)) ? (arr_18 [i_1] [i_1] [i_1]) : (arr_18 [i_1] [i_2] [i_6]))) - (641347255U)))));
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            arr_29 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (((unsigned char) (-(var_10))))));
                            arr_30 [i_1] [19ULL] [i_1] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [(unsigned char)6] [i_4] [6])) - (17946825270427509777ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                            arr_31 [21] [i_2] [i_3] [i_4] [i_7] = var_5;
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(4294967295U))))) ? (((/* implicit */int) arr_17 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12])) : (((/* implicit */int) ((17) < (-785466769))))));
                        var_24 = var_14;
                        var_25 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-491))) ^ (var_7)))), (((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_2] [(short)0] [i_3] [i_3] [i_4])) ? (2043730653232195479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_18 [8U] [i_2] [i_1]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_26 &= ((/* implicit */_Bool) 575353582);
                        var_27 = ((/* implicit */short) min((((unsigned int) (unsigned char)255)), (((/* implicit */unsigned int) max((max((((/* implicit */int) (signed char)-16)), (-785466782))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_2] [i_3] [i_8] [i_9] [i_3])) % (((/* implicit */int) arr_27 [i_1] [i_1] [i_2] [i_2] [i_3] [i_8] [i_2]))));
                            var_29 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_8] [i_9])) ? (var_13) : (((/* implicit */unsigned int) var_10)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1])))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            arr_42 [i_1] [i_2] [(unsigned char)6] [(unsigned char)6] [i_10] [i_8] = ((int) (!(((/* implicit */_Bool) 785466782))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (~(((((/* implicit */_Bool) -1)) ? (min((((/* implicit */unsigned int) -785466782)), (2831233228U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), ((((((~(arr_36 [i_1] [i_10] [i_3] [i_8] [i_10]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (4294967295U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                            arr_43 [i_1] [i_3] [i_1] [(unsigned char)22] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((arr_23 [i_1] [i_2] [i_2] [(unsigned char)20] [i_1] [i_10]) - (3434915703U)))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        arr_46 [i_1] [i_2] [i_3] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_3] [i_1] [1] [(_Bool)1] [16])) ? (arr_8 [(_Bool)0]) : (266661291)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 785466801))))))));
                        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -1086947717)) : (arr_9 [i_2])))) ? (((/* implicit */unsigned int) max((-885689774), (1086947731)))) : (arr_9 [i_1])));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_39 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [i_3] [i_2] [i_1] [i_1])) || (((/* implicit */_Bool) arr_40 [i_2] [i_2] [7U] [i_2] [11]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_38 [i_1] [i_2] [i_3] [i_11] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_2]))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)226)) * (((/* implicit */int) (unsigned short)17200))))))) | (min((((((/* implicit */_Bool) 4208114261U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) arr_23 [i_12] [i_11] [2] [i_2] [i_1] [i_1])))))))));
                            arr_49 [i_12] [i_1] = max(((-(((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (unsigned char)0)));
                            arr_50 [(short)12] [(unsigned char)11] [(short)12] [(short)12] [i_12] [i_1] |= ((/* implicit */int) max((min((((/* implicit */long long int) ((unsigned short) var_10))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_33 [i_1] [i_2] [i_3]))))), (((/* implicit */long long int) min((min((-654994355), (-785466800))), (654994354))))));
                            arr_51 [(_Bool)0] &= ((/* implicit */signed char) max(((_Bool)0), ((!((_Bool)1)))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_55 [i_13] [7U] [i_3] [(unsigned char)22] [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)79))))));
                        arr_56 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_41 [i_13] [(_Bool)1] [i_2] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_41 [i_1] [11] [i_2] [i_3] [i_13]))))));
                        var_35 = ((/* implicit */_Bool) var_12);
                    }
                    var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((259131489), (-1086947728)))) ? (((int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) -1086947728)) || (((/* implicit */_Bool) -1529668387)))))))));
                    arr_57 [i_3] [(unsigned char)11] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) ? (((arr_36 [i_3] [4U] [i_1] [i_1] [i_1]) ^ (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24115)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_18 [16] [i_2] [15]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) | (((unsigned long long int) arr_54 [17ULL] [3] [i_2] [i_1] [i_1] [i_1])))))));
                    arr_58 [i_3] [i_2] [(signed char)18] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_1] [(_Bool)1]))));
                    arr_59 [i_1] [i_1] [19] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (_Bool)0)))), ((+(((((/* implicit */int) (signed char)79)) << (((arr_8 [(unsigned char)3]) + (2094799321)))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)15848)))))));
        var_38 = ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_1] [(short)7] [5] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((-1909802596) > (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1086947740) : (((/* implicit */int) var_9)))))))));
    }
    var_39 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (134217727)));
}
