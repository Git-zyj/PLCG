/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168573
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)65509))))));
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65516))))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_10 [(unsigned short)21] [(unsigned short)21] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10386))))) != ((~(((/* implicit */int) (unsigned short)65516))))));
            arr_11 [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)3] [i_2])))))));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_21 [(unsigned short)12] [(unsigned short)12] [i_3] [i_4] [i_5] = max((((unsigned short) arr_20 [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 3])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (unsigned short)13927)) : (((/* implicit */int) arr_2 [i_5] [i_0])))))))));
                            arr_22 [i_0] [i_2] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_4]))))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5 - 3] [(unsigned short)14] [i_5] [i_5] [i_5 - 2]))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((unsigned short) ((((/* implicit */int) (unsigned short)51608)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13927))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65521)) != (((/* implicit */int) (unsigned short)13918))));
                            arr_28 [i_7] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)13926))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13927)) ? (((/* implicit */int) (unsigned short)42712)) : (((/* implicit */int) (unsigned short)0))))) ? ((+(((/* implicit */int) (unsigned short)13940)))) : (((/* implicit */int) (unsigned short)13918)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4111)))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_16 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1])) ? ((-(((/* implicit */int) (unsigned short)19337)))) : (((((/* implicit */_Bool) (unsigned short)35788)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (unsigned short)65532)))))), (((((/* implicit */_Bool) ((unsigned short) arr_29 [i_0] [i_8] [i_8] [i_9]))) ? (((/* implicit */int) arr_33 [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_10])) : (((/* implicit */int) min(((unsigned short)14878), ((unsigned short)1008))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)17227)));
                        }
                    } 
                } 
                arr_35 [(unsigned short)16] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)13909))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_39 [i_11] [i_2] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_11])))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            arr_46 [i_0] [i_2] [i_11] = arr_33 [(unsigned short)5] [i_12] [(unsigned short)18] [(unsigned short)5] [i_2] [i_0];
                            arr_47 [i_0] [i_2] [i_2] [i_2] [i_2] [i_13] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)21381)) : (((/* implicit */int) (unsigned short)4))))));
                            var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)65520))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_50 [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)16))));
                arr_51 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) ((unsigned short) (unsigned short)13918))), (((((/* implicit */int) arr_30 [i_2] [i_2] [i_2])) + (((/* implicit */int) (unsigned short)26))))))));
                arr_52 [i_14] [i_2] [i_0] [i_0] = min((max((min(((unsigned short)65504), ((unsigned short)65505))), ((unsigned short)6806))), ((unsigned short)20752));
            }
        }
        arr_53 [i_0] |= (unsigned short)0;
    }
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)58730))) ? (((((/* implicit */_Bool) (unsigned short)61563)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)6785)))) : ((~(((/* implicit */int) (unsigned short)59713)))))), (((/* implicit */int) var_12)))))));
}
