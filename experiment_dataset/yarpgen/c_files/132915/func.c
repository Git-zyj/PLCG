/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132915
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_5))));
    var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65104)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))), (var_15)))), (var_3)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (max((7389474865720233324LL), (((/* implicit */long long int) (signed char)0))))))), (((unsigned long long int) ((signed char) arr_1 [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((((long long int) (_Bool)1)), ((+(max((-3139127355369922357LL), (-7389474865720233316LL)))))));
                        var_24 = ((/* implicit */signed char) ((((unsigned long long int) (+(((/* implicit */int) (short)27630))))) ^ (((/* implicit */unsigned long long int) 1136861722))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_1 + 2] [i_4] [i_3 - 3] [i_1 + 2])) | (((/* implicit */int) ((arr_0 [i_3 + 1] [i_3 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_17) : (var_9))))));
                            arr_14 [i_3] [i_3] [i_2] [i_3 - 3] [i_4] = ((/* implicit */unsigned int) min((max((arr_2 [i_3 - 3]), (arr_2 [i_3 + 1]))), (max((arr_2 [i_3 + 1]), (arr_2 [i_3 + 1])))));
                        }
                        var_25 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_4 [i_0])), (-7073187309279558282LL))) | (var_8))))));
                        var_26 = ((/* implicit */unsigned long long int) max((-7389474865720233326LL), (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)59931)) : (max((arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 1]), (arr_16 [i_5 - 1] [i_5 - 1] [i_5 + 2])))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_6] = ((/* implicit */unsigned long long int) min((arr_17 [i_0] [i_0] [i_6 - 1] [i_5 - 1]), (arr_17 [i_0] [i_0] [i_6 - 1] [i_5 + 1])));
                var_28 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            }
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_5 + 2] [i_7 - 1] [i_7 - 1] [i_8 + 2] [i_8 - 1] [i_9 + 2]);
                            var_29 += ((/* implicit */long long int) (-(((unsigned long long int) var_7))));
                            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) | (arr_16 [i_0] [i_0] [i_0]))) | (((/* implicit */int) ((arr_22 [i_0] [i_0] [i_7 - 1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5]))))))));
                            var_31 = arr_3 [i_7 - 1] [i_7 - 1] [i_7 - 1];
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_8 + 1] [i_8 + 1] [i_9 + 2] [i_9 + 2]);
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_5 - 1] [i_5 + 2] [i_0] [i_7 - 1] [i_5 - 1])))))));
                arr_33 [i_0] [i_0] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned short) var_5);
                arr_34 [i_0] [i_0] [i_0] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6681582869693740246LL)) ? (((((/* implicit */_Bool) 7389474865720233324LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5599))) : (7389474865720233304LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_0] [i_0] [i_0]))))));
            }
        }
        for (long long int i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
        {
            arr_37 [i_0] [i_0] [i_0] = ((int) max((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (unsigned short i_12 = 1; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_33 = (!(((/* implicit */_Bool) 4894531438649479890LL)));
                        var_34 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_11] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_11] [i_11] [i_11] [i_0] [i_12 + 1]))))) != (((/* implicit */long long int) max((1366434807), (((/* implicit */int) ((_Bool) arr_24 [i_10]))))))));
                    }
                } 
            } 
            var_35 += ((/* implicit */int) max((-1LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10 + 2] [i_0])))))));
        }
        for (long long int i_13 = 1; i_13 < 22; i_13 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_43 [i_13 + 2] [i_13 + 2] [i_13 + 1]), (((/* implicit */short) ((-7389474865720233309LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5593)))))))))) ^ (min((arr_44 [i_13 + 1] [i_13 - 1]), (arr_44 [i_13 - 1] [i_13 + 2])))));
            var_37 += ((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned long long int) var_18);
            var_39 = (+(-7574288404910087856LL));
            var_40 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_41 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_0])) ^ (((/* implicit */int) (unsigned short)59929))))))) ^ (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) (unsigned short)59940)), (-7574288404910087856LL))) : (var_8)))));
        }
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0]))) | ((~(((/* implicit */int) (unsigned short)57259))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_15 = 3; i_15 < 19; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 19; i_16 += 2) 
            {
                for (short i_17 = 3; i_17 < 19; i_17 += 2) 
                {
                    {
                        var_42 += ((/* implicit */unsigned int) (~(((-5975959067799941382LL) | (arr_54 [i_14] [i_14] [i_14] [i_16 - 1] [i_16 - 1] [i_14])))));
                        arr_55 [i_14] [i_14] [i_14] [i_17 - 2] [i_14] = ((/* implicit */_Bool) var_13);
                        arr_56 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) 1768468309);
                    }
                } 
            } 
            var_43 = ((((/* implicit */_Bool) arr_9 [i_14] [i_14])) ? (((((/* implicit */_Bool) 1366434807)) ? (((/* implicit */unsigned long long int) -7574288404910087856LL)) : (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_14]))));
            /* LoopNest 2 */
            for (signed char i_18 = 3; i_18 < 20; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 4; i_19 < 20; i_19 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((unsigned short) arr_63 [i_15 + 3] [i_15 - 3] [i_15 + 3] [i_15 + 2] [i_15 + 3]));
                        arr_65 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)5595))))) | ((((_Bool)1) ? (-7389474865720233317LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5586)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5297904876474858055LL)))) : (arr_39 [i_14] [i_15 + 2] [i_15 + 2] [i_15 - 2])));
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                for (int i_21 = 3; i_21 < 21; i_21 += 3) 
                {
                    for (unsigned long long int i_22 = 2; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7574288404910087856LL)))))));
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_8))) ? (((var_0) | (7389474865720233343LL))) : (arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_24 = 4; i_24 < 20; i_24 += 3) 
            {
                for (long long int i_25 = 0; i_25 < 22; i_25 += 3) 
                {
                    {
                        var_48 += ((/* implicit */_Bool) ((arr_10 [i_14] [i_23 + 1] [i_14] [i_23 + 1]) | (arr_10 [i_14] [i_23 + 1] [i_23 + 2] [i_23 + 2])));
                        var_49 = ((/* implicit */signed char) var_17);
                        var_50 = ((/* implicit */long long int) (!((_Bool)1)));
                    }
                } 
            } 
            arr_81 [i_14] [i_14] = var_9;
        }
        var_51 = ((unsigned long long int) arr_77 [i_14] [i_14] [i_14] [i_14]);
        arr_82 [i_14] [i_14] = ((signed char) ((long long int) var_19));
        /* LoopNest 3 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (short i_27 = 3; i_27 < 21; i_27 += 3) 
            {
                for (unsigned long long int i_28 = 2; i_28 < 19; i_28 += 3) 
                {
                    {
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_27 - 3] [i_27 - 3] [i_27 - 2] [i_27 - 2] [i_27 - 3])) ? (((/* implicit */int) arr_63 [i_27 + 1] [i_27 + 1] [i_27 - 1] [i_27 - 1] [i_27 + 1])) : (((/* implicit */int) arr_63 [i_27 - 2] [i_27 - 2] [i_27 - 3] [i_27 - 1] [i_27 - 2]))));
                        arr_92 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 975063809085058832LL)) ? (((/* implicit */long long int) 1312720788)) : (975063809085058839LL)));
                    }
                } 
            } 
        } 
    }
}
