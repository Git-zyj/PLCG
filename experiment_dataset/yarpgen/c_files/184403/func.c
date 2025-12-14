/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184403
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) var_5);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) <= (((/* implicit */int) arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_14))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_18);
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((arr_5 [i_1]) || (((/* implicit */_Bool) (~(arr_6 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) 6657316097091175402LL);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)56)), (max((((/* implicit */short) (unsigned char)255)), (arr_12 [i_5] [i_5])))))) ? (arr_16 [i_1] [(unsigned short)11] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            var_23 ^= ((/* implicit */unsigned short) (signed char)95);
                            var_24 = ((/* implicit */short) ((signed char) var_0));
                            var_25 = ((/* implicit */short) ((unsigned int) min((((/* implicit */long long int) arr_9 [i_1] [i_1])), (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [(signed char)2] [i_5] [i_5])) ? (-6657316097091175402LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))))))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-105))))));
        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])) : (((/* implicit */int) max((arr_15 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_9 [0U] [0U])))))));
        var_27 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) (~(((/* implicit */int) var_1))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) 443951224)) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7685)) ? (arr_20 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_7] [i_7]))))))));
            var_29 = ((/* implicit */unsigned int) ((arr_19 [i_6]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        var_30 = ((/* implicit */short) 17766050582920365307ULL);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 = ((/* implicit */signed char) var_2);
            var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [13U]))) : (6657316097091175402LL)))) | (arr_23 [i_6])));
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)8)))))));
            arr_25 [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_23 [i_8])));
        }
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_32 [i_9] [i_10] = ((/* implicit */unsigned char) (+(var_7)));
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))));
            arr_33 [i_10] = ((/* implicit */_Bool) ((8567507617819187516ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 2ULL))))))));
            arr_34 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((unsigned int) min(((short)13457), (((/* implicit */short) (_Bool)1)))));
            arr_35 [i_9] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_3)))))), (var_10)));
        }
        arr_36 [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_9] [i_9]))))));
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned int) max((((unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)12271))))), (((/* implicit */unsigned short) ((unsigned char) arr_8 [i_9] [i_9])))));
    }
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_35 = ((/* implicit */int) arr_17 [i_11] [i_11] [(unsigned short)0] [i_11] [(_Bool)1]);
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (0U)))))), (9879236455890364085ULL))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                arr_45 [i_11] [i_11] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_6 [i_11] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)84)))) + (2147483647))) << (((((/* implicit */int) arr_15 [i_13] [i_12] [(signed char)6])) - (37310)))));
                arr_46 [(short)8] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((short) 8554058233240252571ULL));
                var_37 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_42 [i_11] [(signed char)4] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)53265)) : (((/* implicit */int) (signed char)-66)))));
            }
            var_38 = ((/* implicit */_Bool) min((var_38), (arr_24 [(short)12] [i_12])));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    arr_52 [i_12] [i_12] [i_12] [i_14] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)785))) >= (-335471389301936432LL)))), (min((((/* implicit */unsigned long long int) 7243954324473987526LL)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_14] [i_14])) : (((/* implicit */int) arr_12 [i_14] [i_12])))))));
                    arr_53 [i_14] [i_15] [i_14] [i_14] [i_11] [i_14] = ((/* implicit */unsigned int) arr_29 [i_12] [i_14] [i_15]);
                    var_39 = arr_24 [i_12] [i_14];
                    arr_54 [i_14] [i_14] [i_14] = ((/* implicit */short) ((((0) != (((/* implicit */int) ((arr_29 [i_15] [i_12] [9U]) && (((/* implicit */_Bool) arr_50 [i_15] [i_14] [i_12] [i_14] [i_11]))))))) || (((/* implicit */_Bool) ((unsigned int) var_0)))));
                }
                arr_55 [i_14] [i_12] [i_14] = ((/* implicit */_Bool) arr_7 [i_11]);
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_60 [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (3563308993322863747LL) : (((/* implicit */long long int) arr_17 [i_11] [i_12] [i_14] [i_16] [i_17]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_22 [i_11] [(signed char)15])) : (var_10)))) : (min((((/* implicit */long long int) arr_44 [i_11])), (arr_19 [i_16])))))) : (min((((/* implicit */unsigned long long int) var_1)), (((var_15) & (var_11)))))));
                            arr_61 [i_11] [i_11] [i_14] [i_11] [i_11] [i_14] = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */long long int) arr_20 [i_11])), (3563308993322863747LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_17])) : (((/* implicit */int) arr_39 [i_17]))))))), (((/* implicit */long long int) max((((/* implicit */int) var_17)), ((+(((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
                var_40 -= ((/* implicit */long long int) var_3);
                arr_62 [i_14] [i_14] = (-(((/* implicit */int) var_9)));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                for (long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    {
                        var_41 = arr_65 [i_11];
                        arr_70 [i_11] [i_11] [i_18] [i_11] [i_20] = ((/* implicit */unsigned char) arr_20 [i_20]);
                    }
                } 
            } 
            var_42 = arr_29 [i_18] [i_18] [i_11];
            arr_71 [10U] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) arr_44 [i_18])) : (((/* implicit */int) (signed char)-68))))) ? (arr_23 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 13125994035167109184ULL))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_11])))));
            arr_72 [i_11] = ((/* implicit */_Bool) arr_58 [i_11]);
        }
    }
    var_44 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (short)-7686)), (min((((/* implicit */unsigned int) var_1)), (var_13)))))));
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-6657316097091175385LL)));
    var_46 = ((/* implicit */short) ((unsigned long long int) var_3));
}
