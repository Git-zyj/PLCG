/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125458
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
    var_10 = var_7;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((int) (-(var_3)))) - (((/* implicit */int) var_7))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((_Bool) ((_Bool) var_7))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_9) : (((var_3) / (var_9))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */_Bool) ((var_5) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (var_5) : (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((1709881677) < (3)))))))));
                        var_14 &= ((var_3) >= (var_0));
                    }
                    var_15 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (-935084920)));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_18 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (var_9)))) || (((/* implicit */_Bool) var_5))));
                    var_16 -= ((/* implicit */_Bool) ((int) -1744089514));
                    /* LoopSeq 1 */
                    for (int i_6 = 4; i_6 < 11; i_6 += 4) 
                    {
                        var_17 += ((int) var_5);
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((arr_17 [i_6] [i_6] [i_6 - 3] [i_6 - 3] [i_6] [i_6]) >= (((/* implicit */int) ((_Bool) var_7))))))));
                    }
                }
                arr_21 [i_0] [i_1] [i_0] = ((((var_4) ? (((/* implicit */int) (_Bool)1)) : (var_2))) ^ (9));
                var_19 = ((var_1) ? (((/* implicit */int) (_Bool)1)) : (1907107540));
                var_20 ^= ((/* implicit */_Bool) ((-1179686200) / (65535)));
            }
            var_21 = var_3;
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_0] [i_1] [i_1] [i_1] = ((int) ((int) var_9));
                var_22 = var_1;
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            var_23 += ((/* implicit */_Bool) ((((_Bool) var_2)) ? (arr_16 [i_8 - 1] [i_9 + 3] [i_9 - 2] [i_10 + 1]) : (((((/* implicit */_Bool) var_9)) ? (935084942) : (-701446611)))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1997365632)) ? (((/* implicit */int) var_4)) : (1773522608)));
                            arr_31 [i_8] = ((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8 - 1] [i_9 + 3] [i_8]);
                            var_25 *= ((/* implicit */int) ((((/* implicit */int) var_1)) != ((+(var_9)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */int) ((_Bool) (_Bool)0));
                            arr_34 [i_11] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_9 - 3] [0] [i_9 + 3] [i_9 - 2] [i_9])) ? (arr_30 [i_9] [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 3]) : (701446616)));
                        }
                        var_27 ^= ((var_4) ? (((int) var_4)) : ((~(var_0))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_39 [i_12] [(_Bool)0] [i_12] [i_9] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            var_28 = ((/* implicit */_Bool) var_9);
                        }
                        var_29 = ((((/* implicit */_Bool) ((int) 637817617))) ? (arr_6 [i_1] [i_9] [i_9]) : (((((/* implicit */_Bool) 31)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_0] [i_1] [11] [i_0] [i_0])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
        {
            arr_42 [7] [i_13] |= ((/* implicit */int) var_1);
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 28))) ? (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) 1443714934))))) : (((var_0) + (((/* implicit */int) (_Bool)1))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((var_5) & (65535))) / (arr_22 [i_0] [i_0] [i_0]))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            arr_45 [i_0] = (-(1464678511));
            arr_46 [i_0] = ((/* implicit */_Bool) var_3);
            arr_47 [i_0] [i_14] = 1538074250;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    {
                        var_32 -= ((/* implicit */_Bool) -805310813);
                        arr_56 [i_17] [i_16] [5] [9] [i_16] [i_0] = ((int) (_Bool)0);
                        arr_57 [i_16] [i_17] = ((/* implicit */int) var_4);
                        arr_58 [i_0] [i_0] [i_16] [8] [i_0] [i_15] = ((((/* implicit */_Bool) 1024)) ? (var_3) : (29363747));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_18 = 4; i_18 < 12; i_18 += 4) 
            {
                for (int i_19 = 3; i_19 < 12; i_19 += 3) 
                {
                    {
                        var_33 = -1262615525;
                        /* LoopSeq 1 */
                        for (int i_20 = 2; i_20 < 11; i_20 += 2) 
                        {
                            var_34 = ((arr_6 [i_19 - 3] [i_15] [i_18 - 1]) | (arr_9 [i_18 - 4] [i_18] [i_18] [i_18] [i_18] [i_18]));
                            var_35 |= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (var_6));
                        }
                    }
                } 
            } 
        }
    }
    var_36 = var_2;
}
