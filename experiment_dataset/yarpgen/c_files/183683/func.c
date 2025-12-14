/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183683
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */_Bool) var_2);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3662)) ? (2147483642) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [i_4] [i_3 - 1] [11] [i_1])) : (((/* implicit */int) arr_8 [i_4] [i_0]))))) ? (((/* implicit */int) max((max(((short)-32459), (((/* implicit */short) arr_2 [i_1])))), (arr_3 [(_Bool)1])))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)30565)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_7)))))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4])))), (((((/* implicit */int) arr_2 [(short)12])) - (((/* implicit */int) var_1))))))) ? (((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)30576)))) : (((((/* implicit */_Bool) min((var_10), (var_0)))) ? (((((/* implicit */_Bool) 4194240)) ? (var_6) : (((/* implicit */int) (short)-29589)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_4] [(_Bool)1] [i_4] [i_3 + 1] [(_Bool)1] [(_Bool)1] [i_1])) : (var_7)))))));
                                arr_15 [8] [i_1] [i_2] [(short)20] [i_0] = arr_4 [(short)19] [(_Bool)1] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (short)-29589))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)29581))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_17 = ((/* implicit */short) min(((+(((/* implicit */int) arr_6 [i_5] [i_6])))), (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) min(((_Bool)1), (arr_26 [i_8] [(_Bool)1] [i_6] [i_5])))) : (((/* implicit */int) ((((var_9) ? (var_7) : (((/* implicit */int) var_1)))) != ((((_Bool)0) ? (((/* implicit */int) arr_21 [i_5])) : (arr_22 [i_5] [i_5] [i_7] [i_5])))))));
                        arr_27 [i_7] [i_7] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(arr_16 [i_6]))) : (((((/* implicit */_Bool) arr_24 [i_8] [i_7] [i_7] [(short)9] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_5] [i_6] [(short)14] [i_7] [i_8]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_16 [i_5]) <= (((/* implicit */int) (short)11181))))) : (((/* implicit */int) arr_3 [i_6])))) : (((((/* implicit */_Bool) 783938536)) ? (arr_16 [i_6]) : (var_11)))));
                        arr_28 [i_8] [i_7] [i_5] [(_Bool)1] [i_5] = min((((_Bool) min((1905124566), (4194303)))), (((((/* implicit */int) var_12)) != (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [14])))));
                        arr_29 [(_Bool)1] [i_5] [i_5] [(short)10] = ((/* implicit */short) arr_17 [i_5]);
                    }
                } 
            } 
            var_19 = ((/* implicit */int) var_0);
        }
        var_20 = ((/* implicit */_Bool) arr_3 [i_5]);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((arr_7 [i_5] [i_5] [i_5] [i_5]) && (arr_17 [i_5]))))));
    }
}
