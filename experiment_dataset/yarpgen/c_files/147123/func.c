/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147123
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 + 3]))))));
        arr_2 [i_0] = min((var_14), (((/* implicit */short) (signed char)(-127 - 1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_17 = ((/* implicit */signed char) ((short) (signed char)-77));
                    var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (signed char)48)) | (((/* implicit */int) (_Bool)1)))));
                    var_19 ^= ((/* implicit */short) (-((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_4] [i_4]))))));
                }
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)7168))))) ? (((/* implicit */int) var_14)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16402))))));
                    var_21 = ((/* implicit */signed char) var_10);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_8))));
                    var_23 = ((/* implicit */signed char) ((_Bool) (signed char)59));
                    arr_21 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_2] [(_Bool)1] [i_2] [(_Bool)1]))))) ? (((((/* implicit */int) var_6)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)1))));
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_24 = ((/* implicit */short) (signed char)98);
                    arr_25 [i_2] [i_7] [i_7] [(signed char)8] [i_7] = (_Bool)0;
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_1] [i_1] [i_2] [i_8] = ((short) var_10);
                    arr_29 [i_1] [(short)11] [i_2] [i_1] [(_Bool)1] = ((/* implicit */signed char) (((~(((/* implicit */int) var_3)))) | (((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) var_1)))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        var_25 ^= (_Bool)1;
                        arr_33 [(signed char)5] [i_2 - 1] [i_3] [(_Bool)1] [i_2] = ((/* implicit */short) (_Bool)1);
                        var_26 = arr_18 [i_1] [i_2] [i_3] [i_9];
                        var_27 = var_7;
                    }
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)123))));
                }
            }
            var_29 ^= arr_13 [(short)9] [i_2] [(_Bool)1] [(_Bool)1];
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        {
                            arr_46 [(_Bool)1] [i_10] [i_11] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18184)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-55))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_30 [i_1] [i_10] [i_11] [i_12] [(_Bool)0])))) : (((/* implicit */int) (signed char)121))))) ? (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) var_1)))))) : ((-(((/* implicit */int) var_13))))));
                            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_0), (((/* implicit */short) arr_7 [i_1])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_15] [i_15 - 1]))))));
                            var_32 ^= ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_42 [(signed char)2] [(short)10] [i_16] [i_15 - 1])))));
                            arr_57 [i_1] [(_Bool)1] [i_15] [i_14] [i_16] = arr_30 [(signed char)5] [i_10] [i_10] [i_15] [i_10];
                            var_33 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (signed char)0)))), (((((/* implicit */int) var_2)) > (((/* implicit */int) arr_8 [i_15] [i_16] [i_16] [i_16]))))));
                            var_34 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        var_35 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)27082))))));
        var_36 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_44 [i_1] [(_Bool)1] [i_1] [(signed char)17] [i_1] [(_Bool)1] [i_1])))) | ((+(((/* implicit */int) arr_44 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_37 = ((/* implicit */_Bool) var_7);
        var_38 ^= ((/* implicit */signed char) max((max((arr_1 [(signed char)8] [(signed char)22]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((((/* implicit */int) (signed char)16)) >= (((/* implicit */int) arr_7 [i_1])))))));
    }
}
