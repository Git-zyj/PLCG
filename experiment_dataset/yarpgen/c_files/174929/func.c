/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174929
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+((~(((/* implicit */int) var_4)))))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_10)) : (((((var_1) >= (var_1))) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 620318454)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_5] [i_5] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_6 [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) > (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-54)) ? (201326592) : (((/* implicit */int) (_Bool)1))))))));
                                arr_18 [i_4] [i_5] [i_5] [i_5] [i_6] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)5702))));
                                var_15 = (i_4 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_6]))) & (((51659412U) << (((var_6) - (1454518762))))))) ^ (((/* implicit */unsigned int) ((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_5] [i_6 - 1] [i_0])) - (23854))))))))) : (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_6]))) & (((51659412U) << (((var_6) - (1454518762))))))) ^ (((/* implicit */unsigned int) ((((var_11) + (2147483647))) >> (((((((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_5] [i_6 - 1] [i_0])) - (23854))) + (34804)))))))));
                                var_16 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                                arr_19 [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)28716))))) ? (arr_8 [i_5]) : ((+(arr_4 [i_6 + 1] [i_4] [i_1 - 2]))))) % (arr_8 [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_1] [i_7] [i_8] [i_0]))))) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) : ((+(((/* implicit */int) arr_23 [i_8] [i_8] [i_7] [i_1] [i_0])))));
                            var_18 = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_20 [i_7 - 1] [i_7] [i_7] [i_1 + 1])))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 - 1] [i_8] [i_7]))) >= (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_7 - 1])) ? (arr_1 [i_8] [i_7 - 1]) : (((/* implicit */unsigned int) var_6)))))))));
                            var_20 = ((/* implicit */signed char) arr_11 [i_8] [i_7] [i_7] [i_7] [i_1] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 4; i_9 < 18; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (signed char i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_31 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_9 + 1] [i_9 - 1] [i_10] [i_11])) ? (((/* implicit */int) arr_9 [i_9 - 1] [i_10] [i_1 - 1])) : (((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) % (87519177))) & (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_16 [i_0] [i_1 - 2] [i_10] [i_10] [i_11 - 1]))))))));
                                arr_32 [i_10] [i_1 - 1] [i_10] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_43 [i_15] [i_14] [i_13] [i_12] = ((/* implicit */short) var_7);
                            arr_44 [i_12] = ((/* implicit */_Bool) ((((unsigned int) var_9)) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_15 + 1] [i_15 + 3] [i_15 - 1] [i_15 + 4])) + (((/* implicit */int) arr_20 [i_15] [i_14] [i_14] [i_15 + 3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) (+(((((/* implicit */int) arr_11 [i_12] [i_13] [i_17] [i_16] [i_17] [i_17])) << (((((((/* implicit */int) arr_10 [i_12] [i_12])) + (28719))) - (30)))))));
                            arr_49 [i_12] [i_12] [i_13] [i_16] [i_17] = ((/* implicit */signed char) (short)-21176);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        for (short i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            {
                                arr_57 [i_20] [i_19] [i_18] [i_13] [i_12] = ((/* implicit */signed char) var_10);
                                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_20] [i_13] [i_12])) : (arr_13 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) % (((/* implicit */int) (signed char)43))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (signed char i_22 = 2; i_22 < 14; i_22 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 16; i_23 += 2) 
                {
                    for (int i_24 = 2; i_24 < 14; i_24 += 1) 
                    {
                        {
                            arr_70 [i_21] [i_22] [i_22] [i_23] [i_24 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_22 - 2])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)11610)))) : (((/* implicit */int) arr_20 [i_24 - 1] [i_23] [i_23] [i_24 + 1])))) < (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_59 [i_21] [i_24 + 2])))) % (((/* implicit */int) (short)32746))))));
                            arr_71 [i_21] [i_23] [i_24 + 2] = ((/* implicit */int) (-(4294967275U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_25 = 3; i_25 < 14; i_25 += 1) 
                {
                    for (short i_26 = 1; i_26 < 15; i_26 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_26] [i_25] [i_22])))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (259717432U)))) ? (((((/* implicit */_Bool) arr_24 [i_21] [i_21])) ? (((/* implicit */unsigned int) arr_72 [i_25] [i_22 - 2] [i_25 - 1] [i_26])) : (8184U))) : (((/* implicit */unsigned int) var_11))))));
                            var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_26] [i_25] [i_22] [i_22] [i_22 - 2] [i_21])) ? (((/* implicit */int) arr_11 [i_21] [i_21] [i_22] [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_11 [i_21] [i_21] [i_22] [i_22 + 1] [i_25] [i_26 + 1])))) + ((-(((/* implicit */int) arr_11 [i_26 - 1] [i_22] [i_22] [i_26] [i_26] [i_21]))))));
                            var_25 -= ((/* implicit */_Bool) var_2);
                            var_26 = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_60 [i_22 - 2])), (var_12)))) < ((+(18U))))))) : (((((arr_4 [i_21] [i_22 + 2] [i_25]) ^ (((/* implicit */unsigned int) var_12)))) * (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    for (int i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (~((+(-924861277)))));
                            arr_82 [i_21] [i_22] [i_22] [i_28] &= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (short)-1152)) ? (((/* implicit */int) arr_20 [i_21] [i_22 + 2] [i_22] [i_28])) : (((/* implicit */int) var_4)))))) | ((~(((((/* implicit */_Bool) arr_67 [i_28] [i_27] [i_22 - 2] [i_22 - 2] [i_21])) ? (arr_13 [i_21] [i_22 - 1] [i_22 + 2] [i_28] [i_21] [i_21]) : (((/* implicit */int) (short)-12123))))))));
                            arr_83 [i_21] [i_22] [i_22] [i_27] [i_27] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_28] [i_27 - 1] [i_21])) ? (arr_72 [i_28] [i_22 - 1] [i_27 - 1] [i_22 - 1]) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((arr_4 [i_21] [i_22] [i_27 - 1]), (((/* implicit */unsigned int) arr_72 [i_28] [i_22] [i_27 - 1] [i_27 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
