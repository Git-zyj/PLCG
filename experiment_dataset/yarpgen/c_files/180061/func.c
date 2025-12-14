/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180061
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9569)) ? (((/* implicit */int) min((var_1), (var_10)))) : (((((/* implicit */int) (unsigned short)59337)) & (((/* implicit */int) (signed char)-4))))))) ? (((/* implicit */int) (unsigned short)63743)) : (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (+(-2523782896014692899LL)));
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(1105209528U)))) ? ((-(4294967267U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 3] [i_1 - 1] [i_2 - 2] [i_2 + 3])))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_3 [i_2 + 3] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_2 + 3] [i_0 - 2]))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    arr_10 [i_3 - 2] [i_3] [i_3] [i_0 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 2]))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])))) : (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) -8149733444248795298LL)))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-((~(4294967267U))))))));
                    var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_2] [8])) ? (((/* implicit */int) var_5)) : (arr_8 [i_0] [i_0]))) ^ (((/* implicit */int) arr_4 [i_2] [i_2] [i_3 - 2]))));
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1] [(short)12])) | (((/* implicit */int) arr_1 [i_1] [i_1])))))));
                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54770))));
            }
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_1 - 2] [i_1] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2523782896014692899LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0))))) : (((arr_0 [i_0] [i_1 - 2]) ? (arr_7 [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) 579109030))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) -564725937228546649LL);
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_6 [i_0 - 4] [i_0 - 3] [i_0 - 4] [i_0 - 3]))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 3])))) : ((+(((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 3]))))));
                        var_26 = ((/* implicit */short) (~(((29U) | (((/* implicit */unsigned int) 579109030))))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_27 = var_2;
                            var_28 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (579109030) : (((/* implicit */int) arr_19 [i_0] [i_7])))) % (arr_21 [i_0 - 4] [i_7] [i_8]))), (var_13)));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) min((arr_9 [i_0 + 1]), (((/* implicit */int) arr_3 [i_0 - 2] [i_8 + 1]))))) ? (((((/* implicit */int) (!(var_6)))) << ((((-(arr_21 [i_7] [i_9] [i_9]))) + (154883869))))) : (((/* implicit */int) arr_16 [i_0] [i_7] [i_8] [i_11]))))));
                            var_30 = ((/* implicit */long long int) ((_Bool) (signed char)-8));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30364)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3032258455550482576LL)) ? (((/* implicit */int) arr_4 [i_9] [i_9] [(_Bool)1])) : (((/* implicit */int) (_Bool)0))))) : (3357205841793913266LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49191)) ? (arr_7 [i_0] [i_9]) : (((/* implicit */unsigned int) 2074396548))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 - 4] [i_0 - 4])))))) : (((((/* implicit */unsigned int) arr_9 [(unsigned short)16])) | (4294967267U))))) : (((/* implicit */unsigned int) ((arr_25 [i_11] [i_0 - 1] [i_9] [i_8] [i_8 - 1] [(_Bool)1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_8] [i_8] [i_8 - 1] [i_9])))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)16363))));
                            var_33 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]))) : (arr_18 [i_0 - 2] [i_0 + 2] [i_0 + 2])));
                            var_34 = ((/* implicit */_Bool) ((short) arr_16 [i_8 - 1] [i_8 + 1] [i_12 - 1] [i_12 - 1]));
                        }
                        var_35 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2074396548))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        arr_33 [i_0] [i_8] [i_8 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) 1033122249U)) / (((((/* implicit */_Bool) -3622803594416061302LL)) ? (8209232912714269164LL) : (((/* implicit */long long int) 524756635))))));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (arr_7 [i_0 - 4] [i_8 + 1]))), (((/* implicit */unsigned int) max((arr_5 [i_0 - 4] [i_8 + 1]), (arr_5 [i_0 - 4] [i_8 + 1])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_13 = 1; i_13 < 16; i_13 += 1) 
            {
                var_37 = ((/* implicit */_Bool) var_12);
                arr_36 [i_0] [i_0] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1415794723)) ? (((/* implicit */int) (unsigned short)19718)) : (((/* implicit */int) (signed char)-10)))) / (((/* implicit */int) (signed char)-12))));
            }
        }
        var_38 = (!(((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (var_3) : (((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            arr_41 [i_15] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_14]))));
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))));
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_14] [i_14])) ? (arr_37 [i_14]) : (arr_39 [i_14] [i_14])));
        }
        for (unsigned short i_16 = 1; i_16 < 21; i_16 += 2) 
        {
            var_41 ^= ((/* implicit */int) -7926042062555370666LL);
            /* LoopSeq 1 */
            for (long long int i_17 = 1; i_17 < 21; i_17 += 3) 
            {
                var_42 &= ((/* implicit */long long int) (signed char)93);
                /* LoopSeq 1 */
                for (unsigned short i_18 = 1; i_18 < 20; i_18 += 1) 
                {
                    arr_50 [i_14] [i_14] [i_14] [i_17] [i_14] [16U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_14] [i_17 + 1] [i_18])) ? (arr_39 [i_16 + 1] [i_18 - 1]) : (((long long int) var_5))));
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((unsigned int) arr_47 [i_18 + 1] [i_17 - 1] [i_16 - 1])))));
                    arr_51 [i_17] = ((/* implicit */unsigned int) arr_46 [i_17] [(unsigned short)12] [i_16] [i_17]);
                }
                var_44 = ((/* implicit */unsigned int) (unsigned short)39713);
            }
        }
        var_45 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) arr_42 [i_14]))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_54 [i_19] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) & (min((arr_49 [0] [(_Bool)1] [i_19] [(unsigned short)0]), (((/* implicit */long long int) (_Bool)0)))))));
        var_46 -= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_17 [i_19] [i_19] [i_19] [i_19] [i_19])))), (((((/* implicit */_Bool) arr_17 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_17 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_17 [i_19] [i_19] [i_19] [i_19] [i_19]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
        {
            var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_15 [i_20] [i_20] [i_19] [i_19]) : (arr_15 [i_19] [i_19] [i_19] [i_19])))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_19])))))));
            arr_57 [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_48 [(unsigned short)4] [(unsigned short)4] [i_20] [i_20]))))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63743))) > (arr_49 [i_19] [(signed char)20] [i_19] [i_20]))))));
        }
        for (int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
        {
            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) arr_11 [i_19] [i_21] [i_19]))));
            var_49 = ((/* implicit */_Bool) arr_35 [i_19] [i_19] [i_19] [i_19]);
        }
        for (int i_22 = 1; i_22 < 9; i_22 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_23 = 1; i_23 < 9; i_23 += 2) 
            {
                var_50 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)71)))) ? (((((/* implicit */_Bool) (unsigned short)23968)) ? (((/* implicit */int) arr_29 [i_19] [i_22 + 2] [i_23] [i_23] [i_23] [(short)11])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0))))), (max((arr_5 [i_19] [i_19]), ((short)-4241))))))));
                var_51 = ((/* implicit */unsigned short) var_0);
                var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) (+(((arr_62 [i_23 - 1]) ? (((/* implicit */int) arr_62 [i_23 - 1])) : (((/* implicit */int) arr_62 [i_23 - 1])))))))));
            }
            var_53 += ((/* implicit */short) ((((/* implicit */_Bool) -7926042062555370663LL)) || (((/* implicit */_Bool) (signed char)50))));
        }
        arr_68 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) ^ (838505044531213713LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : ((-(arr_39 [i_19] [i_19])))));
        arr_69 [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1025857484618138178LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-13)))))));
    }
}
