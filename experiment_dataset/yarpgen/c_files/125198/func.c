/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125198
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4))) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-18155)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))));
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
            arr_15 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
            var_13 = ((/* implicit */long long int) ((arr_9 [i_1] [(signed char)2] [i_1] [3]) + ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_0]))))));
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1070195003)) ? (4177419728857481521ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (15168012696557914216ULL) : (17024479562493060033ULL))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
                    {
                        {
                            var_16 += max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9293)))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), (var_9));
                            var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (arr_14 [i_7 + 1] [i_7] [i_7 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_7] [i_7] [i_7] [i_7 + 1]))))), (((/* implicit */long long int) (_Bool)1))));
                            arr_30 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_9)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14213728484368774596ULL)) ? (((((/* implicit */int) (unsigned short)5897)) ^ (((/* implicit */int) (unsigned short)23733)))) : ((-(((/* implicit */int) (signed char)12))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((signed char) arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1] [i_0])))));
                    var_20 ^= var_2;
                    arr_33 [i_9] [(unsigned short)0] [i_5] [(_Bool)1] = var_1;
                    var_21 = ((/* implicit */int) (unsigned short)13700);
                    arr_34 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)6] [i_9] [i_6]))))))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) 4742305572312458265ULL);
                var_23 -= ((/* implicit */int) ((unsigned char) (~(424918840))));
                arr_38 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (signed char)9);
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 6; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            arr_45 [i_12] [i_12] [8] [i_5] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(unsigned short)2] [i_11]))));
                            var_24 = ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (2782665568757180554ULL)))));
                var_26 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_5] [i_0]);
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 8; i_14 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((unsigned long long int) var_4)) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))));
                arr_48 [7LL] [(unsigned short)9] [i_14] [7LL] = ((/* implicit */short) ((unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            }
            arr_49 [i_0] [(signed char)6] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (unsigned char)238))), (((((/* implicit */_Bool) arr_47 [i_5])) ? (((/* implicit */int) arr_47 [i_5])) : (((/* implicit */int) var_6))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-88))));
            var_29 = min((((/* implicit */unsigned long long int) (unsigned short)57437)), (max((max((6573730512766060388ULL), (((/* implicit */unsigned long long int) (unsigned char)22)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)11))))))) : (11259746583522804988ULL)));
        }
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)233))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (-4678416221913362575LL) : (6549740671919309772LL))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (signed char)8))))))))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 3; i_17 < 6; i_17 += 1) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (arr_13 [i_17 + 2] [0] [i_16] [i_17] [i_17 + 2])));
                    var_33 ^= ((/* implicit */long long int) arr_40 [i_0]);
                    var_34 += ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)75)))), (((/* implicit */int) arr_54 [i_17 + 3] [i_17 - 3] [i_17 - 3])))), (((/* implicit */int) (unsigned short)31168))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) var_1);
                                var_36 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || (((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) arr_21 [i_16] [7ULL] [i_18]))))))));
                                arr_62 [i_0] [i_0] [9ULL] [i_0] [i_16] = ((/* implicit */long long int) max((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12182843973403277362ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_20 = 1; i_20 < 9; i_20 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 2; i_23 < 8; i_23 += 2) 
                    {
                        {
                            arr_72 [i_0] [i_0] [i_0] [i_20] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0]))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_9)) - (31720)))))))) > (((unsigned long long int) (unsigned short)24943)));
                            arr_73 [i_0] [i_20] [i_0] = ((-542985389) ^ (-424918841));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_22 [i_23 + 1] [i_23] [i_23 + 1])) : (((/* implicit */int) arr_17 [i_21 - 1]))))) ? (((/* implicit */int) (!(var_6)))) : (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned short)31168)) : (((/* implicit */int) (unsigned short)9520))))));
                        }
                    } 
                } 
            } 
            arr_74 [i_20] [i_20 - 1] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) | ((-(((/* implicit */int) var_5)))))) < ((~((-(((/* implicit */int) var_9))))))));
            var_38 = ((/* implicit */int) min((var_38), ((+(((/* implicit */int) ((unsigned char) arr_63 [0LL] [i_0] [0LL])))))));
            var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) (signed char)-89))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4283041503949231449LL)) && (var_6)))) : (((/* implicit */int) (!(var_6)))))) - (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (((unsigned char) 11259746583522804988ULL)))))));
        }
    }
    for (short i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
    {
        var_40 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
        var_41 = ((/* implicit */int) min((var_41), ((-(((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (875468450))) == (((/* implicit */int) (short)30842)))))))));
        var_42 = ((((/* implicit */_Bool) (-(12332060232775839786ULL)))) ? (min((max((18415412553866979635ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)213))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(var_8)))))));
        var_43 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])), (2065010989)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_9)) + (((/* implicit */int) var_1)))))))));
    }
    for (long long int i_25 = 0; i_25 < 21; i_25 += 1) 
    {
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_9))) && (((/* implicit */_Bool) ((((/* implicit */long long int) arr_78 [i_25])) / (var_8))))));
        /* LoopNest 2 */
        for (signed char i_26 = 1; i_26 < 20; i_26 += 2) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    var_45 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3338))) : (1506498532996973270ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7850)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (short)18154))))))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) ((_Bool) var_6))))))));
                    var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) var_4))))))));
                }
            } 
        } 
    }
    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (-1432298009) : (((/* implicit */int) (unsigned short)24953))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46026))))) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)0)))))))))))));
}
