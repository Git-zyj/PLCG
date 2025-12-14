/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134478
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */int) var_0);
                    var_11 += ((min((((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_2 + 2])), (((((/* implicit */_Bool) arr_4 [i_0] [(short)19] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)11] [18U] [18U]))));
                    arr_7 [i_0] [i_2] [i_2] = var_7;
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_12 = ((max((var_4), (((/* implicit */int) ((_Bool) arr_10 [i_4] [i_4] [(short)13]))))) + (((/* implicit */int) var_8)));
                        var_13 &= ((/* implicit */short) arr_2 [(short)12] [(short)20] [9]);
                        arr_17 [i_3] [i_4] [(short)13] [i_3] = ((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 2] [i_3]);
                        var_14 = ((unsigned int) arr_12 [i_3]);
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */int) var_8);
        arr_18 [i_3] = arr_8 [i_3];
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [13U]))) & (((var_6) / (((/* implicit */unsigned int) var_7))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] [i_7 - 2] = ((/* implicit */short) arr_5 [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    var_17 = arr_4 [(short)4] [i_8] [(short)4];
                    var_18 ^= ((/* implicit */unsigned int) arr_0 [i_8]);
                    arr_29 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) arr_20 [i_9]);
                    var_19 -= ((((_Bool) arr_2 [(short)1] [i_8] [i_9])) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_8] [6] [i_8])));
                }
            } 
        } 
    }
    for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
    {
        arr_34 [i_10] = ((/* implicit */unsigned int) ((int) var_7));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) arr_6 [i_10] [i_11] [i_10] [i_10]);
                        arr_43 [i_10] [i_11] [7] [i_12] [(_Bool)1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10255))) : (2641376814U)))) ? (((/* implicit */int) ((((var_5) + (((/* implicit */unsigned int) var_1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((int) min(((short)7853), (((/* implicit */short) (_Bool)1)))))));
                        arr_44 [i_11] [i_13] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_39 [1] [i_13] [i_11])) : (((var_4) * (((/* implicit */int) arr_0 [i_10]))))));
                        arr_45 [i_10 - 1] [i_11] [i_11] = arr_28 [i_11] [i_11];
                    }
                } 
            } 
        } 
        arr_46 [i_10] = ((/* implicit */unsigned int) var_1);
        arr_47 [(short)0] = ((/* implicit */_Bool) ((arr_30 [i_10]) ^ (arr_41 [i_10] [i_10] [i_10])));
    }
    var_21 = ((2047) - (-1702844755));
    /* LoopSeq 3 */
    for (int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        arr_51 [i_14] = ((/* implicit */short) var_5);
        arr_52 [i_14] = ((/* implicit */unsigned int) ((_Bool) ((short) arr_1 [i_14])));
        arr_53 [i_14] = ((/* implicit */_Bool) arr_6 [i_14] [i_14] [i_14] [i_14]);
    }
    for (short i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 18; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_62 [i_17 + 1] [i_17] [i_17] [i_16] = var_0;
                        var_22 *= ((/* implicit */unsigned int) arr_58 [i_15] [i_15] [i_18]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 21; i_19 += 4) 
        {
            arr_66 [16] [i_19 - 1] = ((/* implicit */short) arr_55 [i_15] [(_Bool)1]);
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    {
                        arr_72 [i_15] [i_15] [i_19 - 1] [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) var_4);
                        arr_73 [i_21] [14] = ((/* implicit */int) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_57 [i_15] [i_21]))))));
                        arr_74 [i_21] = var_4;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 19; i_22 += 4) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_54 [i_15] [i_15])) ? (((/* implicit */int) arr_81 [i_24] [i_24] [i_23] [(short)10] [i_24])) : (((/* implicit */int) arr_75 [i_23] [i_23] [i_15])))));
                            arr_84 [i_15] [i_23] [i_22] [i_15] [i_24] = ((/* implicit */unsigned int) ((short) arr_55 [i_23] [i_23]));
                            var_24 |= arr_78 [i_15];
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_56 [i_15] [i_15]))) * (((/* implicit */int) ((short) arr_58 [11] [i_19] [i_19]))))))));
        }
    }
    for (int i_25 = 3; i_25 < 18; i_25 += 4) 
    {
        arr_87 [i_25] [i_25] |= ((/* implicit */short) arr_63 [i_25] [i_25]);
        arr_88 [(_Bool)1] = ((/* implicit */_Bool) var_2);
        var_26 = arr_82 [i_25];
    }
}
