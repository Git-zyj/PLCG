/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110848
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((var_6), (((/* implicit */short) var_8)))))));
    var_14 = ((/* implicit */short) (signed char)71);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                                var_16 *= ((/* implicit */unsigned int) arr_2 [i_0] [i_3] [i_3]);
                                var_17 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_12)))));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) arr_1 [i_2 + 1] [i_1])))))));
                    arr_13 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 17; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                {
                    var_18 = var_4;
                    arr_22 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_5] [i_6 + 3] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_29 [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_38 [i_10] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_17 [i_0] [i_9])))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
                        var_21 = ((/* implicit */_Bool) ((((arr_7 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 2]) + (2147483647))) >> (((arr_7 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 2]) + (298820832)))));
                        arr_39 [i_11] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) 4294967290U);
                        var_22 = arr_27 [i_0] [i_9] [i_10] [i_10] [i_11];
                    }
                } 
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_12] [i_12] [i_12] [i_12])), (-6095942774146308961LL)))) || (((((/* implicit */_Bool) (short)31270)) || (((/* implicit */_Bool) 1555146357)))))), ((_Bool)1)));
        arr_42 [i_12] [i_12] = ((/* implicit */short) 6729530231248415212LL);
    }
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) -2855810653336975135LL);
        arr_47 [i_13] [i_13] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (unsigned short)1792)) ? (7495382063944884449LL) : (2404036076149337416LL)))));
        arr_48 [i_13] = ((/* implicit */unsigned char) (signed char)55);
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-32)))) + (((/* implicit */int) ((_Bool) var_5))))))));
            var_26 = ((/* implicit */long long int) var_6);
        }
        for (signed char i_16 = 4; i_16 < 16; i_16 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((unsigned char) var_0));
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 16; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_67 [i_14] [i_14] = var_12;
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_3))));
                        }
                    } 
                } 
            } 
            arr_68 [i_14] = ((/* implicit */unsigned int) ((var_7) % (((/* implicit */int) var_9))));
        }
        for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) var_9);
            var_30 ^= ((/* implicit */long long int) ((signed char) arr_53 [(signed char)6] [i_14] [i_20]));
            arr_72 [i_14] [i_14] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) << (((var_4) - (5379390848747574697LL)))))) ? ((+(((/* implicit */int) var_0)))) : (-2131897855)));
            arr_73 [i_14] [i_14] [i_14] = var_0;
        }
        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
            {
                for (signed char i_23 = 0; i_23 < 18; i_23 += 1) 
                {
                    {
                        arr_82 [i_14] = ((/* implicit */short) (+(arr_45 [i_22] [i_21])));
                        var_31 = ((/* implicit */unsigned char) arr_30 [i_14] [i_21] [i_21]);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10582286308092580919ULL)) && (((/* implicit */_Bool) arr_79 [i_14] [i_22]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (long long int i_26 = 0; i_26 < 18; i_26 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) arr_2 [i_14] [i_14] [i_24]);
                            arr_90 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_87 [i_14] [i_14] [i_26] [i_14] [i_14] [i_14]))) & (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_26] [i_26] [i_26] [i_26]))) : (-8789202435656962242LL)));
                        }
                    } 
                } 
            } 
        }
        var_34 = 14866943036282413509ULL;
    }
    var_35 = ((/* implicit */int) var_9);
}
