/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137133
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 &= ((long long int) (!(var_8)));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_11 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_1] [i_1 + 3]) : (arr_4 [i_0] [i_0] [i_1 + 1])))));
            var_12 = ((/* implicit */long long int) max((var_12), (arr_1 [i_1 - 1])));
            var_13 = ((((/* implicit */_Bool) (~(min((-5242202270383334345LL), (arr_4 [i_1] [i_1] [i_0])))))) ? ((+((~(arr_4 [i_0] [i_0] [i_1]))))) : (var_4));
            var_14 = ((((/* implicit */_Bool) (~(((var_6) + (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -5242202270383334345LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((_Bool) var_2)))))) : (var_1));
            arr_5 [i_0] = ((var_3) ? (min((arr_2 [i_1 + 3] [i_1]), (-5242202270383334345LL))) : (min((arr_2 [i_1 + 3] [i_1 + 1]), (var_0))));
        }
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) ((4294678308933253921LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_19 [i_0] [i_3] [i_5] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_23 [i_4] [i_4] [i_6] [i_4] [i_6] = -2029344071846565404LL;
                            var_16 = 124775348376654020LL;
                        }
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (var_1))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16383LL)) ? (((max((((/* implicit */long long int) (_Bool)0)), (arr_25 [i_0] [i_0] [i_3] [i_4] [i_3] [i_4]))) * (min((arr_16 [i_0]), (((/* implicit */long long int) arr_3 [i_7])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1] [i_2 - 3])))));
                            var_19 = ((long long int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        arr_28 [i_0] [i_2 + 1] [i_3 - 1] [i_4] = max((arr_3 [i_0]), (max((arr_3 [i_2 + 2]), (var_3))));
                    }
                } 
            } 
            arr_29 [i_0] [i_0] [i_2 + 1] |= ((/* implicit */_Bool) max((((((var_0) | (131071LL))) / (var_5))), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2])) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_4)))))))));
            var_20 = ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_13 [i_0] [i_0]))))) ? (min((arr_1 [i_2 + 1]), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((long long int) -4294678308933253938LL)) < (((long long int) 3218884260076762557LL)))))));
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (~(-16384LL)));
                        var_22 *= ((long long int) arr_17 [i_0]);
                        arr_34 [i_9] [i_9] = arr_24 [i_0] [i_2 - 2] [i_2] [i_8] [i_9];
                        var_23 = ((long long int) min(((-(var_4))), (-3721424392233970493LL)));
                        arr_35 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_8] [i_0] [i_0]);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min(((~(var_6))), (var_6)));
                            arr_50 [i_13] [i_10] [i_13] [i_13] [i_10] [i_0] = var_7;
                        }
                    } 
                } 
                arr_51 [i_10] = ((/* implicit */_Bool) min((1238604973801582521LL), (((/* implicit */long long int) (_Bool)0))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                arr_54 [i_0] [i_0] [i_0] = arr_20 [i_0] [i_14];
                arr_55 [i_0] [i_0] = ((var_4) + (arr_6 [i_14]));
                /* LoopSeq 4 */
                for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_11 [i_0] [16LL] [(_Bool)1] [i_0]))));
                    var_26 = var_7;
                    arr_58 [(_Bool)1] [i_14] [i_15] = ((/* implicit */_Bool) (((~(arr_39 [i_0] [i_0] [i_15]))) + (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_15])) ? (var_9) : (var_4)))));
                }
                for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    var_27 *= ((((/* implicit */_Bool) arr_2 [i_0] [i_10])) ? (((long long int) var_8)) : (var_5));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((1238604973801582521LL) | (var_2))))))));
                    arr_62 [i_16] = ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_10] [i_0] [i_16] [i_16]))));
                    /* LoopSeq 2 */
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_67 [i_16] [i_16] [i_0] [i_16] = arr_46 [i_0] [i_0] [15LL] [i_0];
                        var_29 ^= ((((/* implicit */_Bool) -16381LL)) ? (-5242202270383334345LL) : (-8046281256214679820LL));
                        var_30 |= ((/* implicit */_Bool) (+(((-4243477596648907482LL) - (arr_33 [i_0] [i_0] [i_14] [i_0] [i_0] [i_14])))));
                        var_31 = ((/* implicit */_Bool) (+(4294678308933253929LL)));
                    }
                    for (long long int i_18 = 3; i_18 < 19; i_18 += 1) 
                    {
                        arr_70 [i_0] [i_10] [i_16] [8LL] [i_14] [i_16] [i_18 - 2] = ((/* implicit */long long int) ((var_7) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_8))));
                        arr_71 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_10] [i_14] [i_16] [i_18 + 1])) ? ((+(var_1))) : ((~((-9223372036854775807LL - 1LL))))));
                    }
                }
                for (long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        arr_76 [i_0] [i_0] [i_20] [i_19] [11LL] = ((/* implicit */_Bool) -16383LL);
                        arr_77 [i_0] [i_0] [i_20] = var_2;
                        var_32 *= ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6));
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_33 = (~((+(-8664515319513755199LL))));
                        arr_80 [i_21] [i_14] [i_21] [i_14] = ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10] [i_14] [i_14] [i_10] [i_21 - 1] [i_21]))) - (var_5));
                        var_34 = (~(4243477596648907481LL));
                    }
                    for (long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_35 = (~(var_4));
                        arr_83 [i_22] [i_22] [i_14] [i_22] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0]) : (arr_7 [i_0])));
                        var_37 = ((/* implicit */long long int) ((var_1) == (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_6)))));
                        var_38 = ((/* implicit */long long int) (_Bool)0);
                    }
                    var_39 = -8680154361932487456LL;
                    var_40 = ((/* implicit */long long int) arr_12 [i_0] [i_10] [i_14] [i_0] [i_14]);
                }
                for (long long int i_23 = 1; i_23 < 18; i_23 += 2) 
                {
                    arr_86 [i_10] [i_14] [i_10] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_87 [i_0] [i_10] [i_0] [i_23 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [(_Bool)1] [i_10] [i_14] [(_Bool)1] [i_23] [i_23 + 2]))));
                    arr_88 [i_0] [i_10] [i_10] [i_10] [i_23] [i_10] = ((arr_48 [i_23] [i_23] [i_23] [i_0] [i_0] [i_0] [i_10]) - (((/* implicit */long long int) ((/* implicit */int) var_7))));
                }
            }
            var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) ((_Bool) arr_36 [i_10]))) : (((/* implicit */int) var_8))))) ? (var_1) : (((var_6) << (((arr_16 [i_0]) - (6840125725496752797LL))))));
            var_42 = ((/* implicit */_Bool) (~(min((min((arr_21 [i_0] [i_10] [17LL] [i_10] [i_10] [i_0]), (((/* implicit */long long int) var_3)))), (4243477596648907462LL)))));
        }
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        var_43 *= arr_89 [i_24];
        var_44 = ((((/* implicit */long long int) ((/* implicit */int) arr_89 [i_24]))) < (8689191874034364647LL));
    }
    var_45 = var_4;
    var_46 = ((/* implicit */long long int) var_7);
    var_47 = min((((min((5242202270383334344LL), (var_2))) + (((/* implicit */long long int) ((/* implicit */int) ((1238604973801582530LL) < (-4243477596648907462LL))))))), (var_6));
}
