/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123800
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_16 = var_0;
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -1423095194))) ? (((/* implicit */int) (short)-16795)) : (1177609728)))) ? ((-(max((var_1), (((/* implicit */unsigned int) -1423095190)))))) : (((((/* implicit */_Bool) (-(67108864)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (-1423095182) : (1423095198)))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (var_1)))))));
                        var_17 -= var_14;
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_21 [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((var_12) == (((((/* implicit */_Bool) (+(var_4)))) ? (max((682270799U), (var_7))) : (((/* implicit */unsigned int) (+(1423095209))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1423095194))));
                            var_19 = 1483717486U;
                            arr_24 [i_4] [i_5] [i_5] [i_6] [i_4] = (~((~(-101318691))));
                            var_20 = ((/* implicit */short) (+(var_12)));
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                        }
                        var_22 = ((/* implicit */short) (-(((unsigned int) var_3))));
                        arr_25 [i_4] [i_6] [i_6] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-1)), (4294967295U)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))) ? (((/* implicit */int) ((-1423095182) != (1177609753)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)22894)))))))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) -1252581299))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 208346514U)) ? (1177609708) : (var_4)))) : (max((10870351121120038288ULL), (((/* implicit */unsigned long long int) (short)25348)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (4107425758U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1)))))) : (var_7)))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_24 *= ((/* implicit */unsigned int) (short)25348);
                        var_25 -= ((/* implicit */unsigned long long int) var_14);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            arr_36 [i_12] [i_12] [i_11] [i_10] [i_9 + 1] [i_9 - 2] [i_4] = (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_4)) : (var_1))));
                            arr_37 [i_4] [i_9 - 2] [i_4] [i_11] [3ULL] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)57)), (max((((/* implicit */unsigned int) var_14)), (var_3)))))) : (max((max((var_15), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_8))))))));
                            arr_38 [6U] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)6437))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22877))))) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (var_11)))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_26 = (+(4107425786U));
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) -1177609752)) ? (((((/* implicit */_Bool) 15925211754209050734ULL)) ? (1547196469994346228ULL) : (((/* implicit */unsigned long long int) 22U)))) : (((/* implicit */unsigned long long int) 528482304))));
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_28 = ((((/* implicit */_Bool) var_15)) ? (var_6) : (var_8));
                arr_44 [0] [0] [i_14] = ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_29 += ((((/* implicit */_Bool) var_4)) ? (var_0) : (187541532U));
                            arr_49 [i_4] [i_4] [i_14] [i_14] [i_16] = ((/* implicit */int) var_11);
                        }
                    } 
                } 
                var_30 = var_9;
            }
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                arr_52 [i_17] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (4294967295U) : (var_12)))));
                arr_53 [i_4] [8U] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 32505856U))));
            }
            for (short i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                var_31 = ((((/* implicit */_Bool) var_15)) ? (var_5) : (var_13));
                var_32 = ((/* implicit */int) var_6);
                var_33 = ((/* implicit */int) (-(((((/* implicit */_Bool) 3U)) ? (2484348185U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32760)))))));
            }
        }
    }
    var_34 = ((/* implicit */unsigned long long int) var_11);
}
