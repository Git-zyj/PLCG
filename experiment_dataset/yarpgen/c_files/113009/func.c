/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113009
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) % (var_9)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1] [i_0] = ((/* implicit */long long int) ((6044137709988152675ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12208)))));
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((short) 5907913158404384754ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_14 = ((int) (short)21816);
                        arr_26 [i_5] [i_5] = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_7)), (6044137709988152675ULL))), (((((/* implicit */unsigned long long int) -598523855)) | (6044137709988152669ULL)))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_11))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_12))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 3; i_10 < 23; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_10)));
                                arr_43 [i_10] = ((unsigned long long int) var_11);
                                arr_44 [i_10] [i_10] [i_10] [i_10] [(signed char)14] [i_10] = ((/* implicit */long long int) var_9);
                                arr_45 [i_10] = (short)(-32767 - 1);
                                arr_46 [i_9] [i_9] [i_11] [i_10] [i_13] = ((/* implicit */int) (signed char)93);
                            }
                        } 
                    } 
                    arr_47 [i_10] = ((var_7) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) -581201736)))));
                    var_18 = ((1073741760) >> (((810821415893830203ULL) - (810821415893830201ULL))));
                    var_19 = ((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) -1150545636))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((int) var_9)))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 24; i_17 += 1) 
                        {
                            {
                                arr_60 [9U] [9U] [i_17] [(unsigned char)22] [9U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 856297824)) < (((unsigned long long int) var_0))));
                                var_21 -= var_11;
                            }
                        } 
                    } 
                    arr_61 [i_9] [i_9] [i_9] |= ((/* implicit */unsigned int) ((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) ((-1150545618) != (1150545635))))));
                }
            } 
        } 
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    {
                        var_22 = min((((unsigned long long int) 12151417956455637665ULL)), (((/* implicit */unsigned long long int) max((((int) (unsigned char)19)), (((/* implicit */int) ((unsigned char) var_10)))))));
                        arr_72 [i_18] = ((/* implicit */long long int) -1887106346);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 3; i_22 < 21; i_22 += 1) 
                        {
                            arr_76 [i_18] = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) 1204315593)), (15071224905478917804ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) var_7))));
                            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) 2330119526U));
                            arr_77 [i_18] [(_Bool)1] = ((int) ((_Bool) -4146963732261633624LL));
                        }
                        /* vectorizable */
                        for (unsigned char i_23 = 1; i_23 < 20; i_23 += 1) 
                        {
                            arr_81 [13] [13] [i_18] [i_21] [i_21] [(unsigned short)10] [i_19] = ((short) ((unsigned int) 3754398904U));
                            arr_82 [i_18] [i_19] [i_19] [i_19] [i_19 - 1] = ((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_5))));
                        }
                        arr_83 [(unsigned char)2] [(unsigned char)2] [i_21] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) var_6)))));
                    }
                } 
            } 
        } 
        arr_84 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (6785040331846184874ULL)))))))) & (min((min((((/* implicit */unsigned int) (short)21530)), (540568392U))), (((/* implicit */unsigned int) ((var_7) == (((/* implicit */long long int) 747376892U)))))))));
    }
    var_24 = ((/* implicit */_Bool) max((3754398908U), (((/* implicit */unsigned int) ((signed char) ((unsigned int) (_Bool)1))))));
}
