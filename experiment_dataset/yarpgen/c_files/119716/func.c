/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119716
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((_Bool) var_17)))) ? (((/* implicit */int) ((((var_16) << (((var_4) - (221132515))))) != ((~(((/* implicit */int) var_12))))))) : ((+((-2147483647 - 1))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = (~((~(((/* implicit */int) ((_Bool) (_Bool)1))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_8 [i_1] [i_1]));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_19 *= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 - 1]))))), ((+(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2]))))));
                        var_20 -= ((/* implicit */unsigned int) ((-1356041418) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_11))))))))));
                        arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(var_5)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_20 [i_0] [(_Bool)1] [i_0] [i_3] [i_4] = ((/* implicit */short) 8372224ULL);
                            arr_21 [i_3] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) (!(arr_14 [i_0] [i_3] [i_0] [i_0])));
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((0LL) | (((0LL) - (((/* implicit */long long int) arr_6 [i_0]))))));
                        var_22 += ((/* implicit */int) -11LL);
                    }
                }
            } 
        } 
        var_23 -= ((/* implicit */int) min((var_15), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) + (0LL))) >= (((/* implicit */long long int) (~(1016957170U))))))) << ((((+(887480993U))) - (887480989U)))));
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_28 [i_6] &= ((/* implicit */long long int) ((max((arr_26 [i_6]), (arr_26 [i_6]))) - (((int) arr_26 [i_6]))));
        arr_29 [i_6] = arr_26 [i_6];
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 15; i_7 += 3) 
    {
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [2])) | (((/* implicit */int) arr_25 [i_7 + 1]))));
        arr_33 [i_7] [i_7] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
        arr_34 [i_7] = ((/* implicit */short) arr_30 [i_7]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_40 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) arr_26 [i_7]);
                    arr_41 [i_7] = ((((/* implicit */_Bool) 17LL)) ? ((~(15LL))) : (arr_36 [(signed char)1] [i_8]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_56 [i_10] [i_10] [i_10] [i_10] [i_14] [i_10] = ((/* implicit */signed char) arr_48 [i_11]);
                                arr_57 [i_10] [i_10] [i_11] [i_11] [i_11] [i_10] &= ((/* implicit */_Bool) (+(arr_44 [i_10 + 2])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (short)-15792))));
                        arr_60 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */int) arr_37 [i_10 - 3] [i_10 - 3] [i_10 - 3])) != (((/* implicit */int) arr_25 [i_10 - 3]))));
                        var_26 *= ((/* implicit */short) (~(((/* implicit */int) arr_52 [i_12] [i_15]))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_63 [i_10] [i_10] [i_11] [i_12] [i_12] [i_16] = ((/* implicit */int) ((long long int) (_Bool)1));
                        var_27 = ((/* implicit */signed char) ((7436941528761386828LL) < (((/* implicit */long long int) (~(((/* implicit */int) (short)15795)))))));
                    }
                    for (unsigned long long int i_17 = 4; i_17 < 11; i_17 += 3) 
                    {
                        arr_67 [i_10] [i_10] [i_10] [i_10] [i_17] = (_Bool)1;
                        arr_68 [i_17 - 1] [i_17] [i_17] [i_10 - 2] = ((/* implicit */signed char) (short)10716);
                    }
                }
            } 
        } 
        arr_69 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_10] [(signed char)8])) || (((/* implicit */_Bool) 1884055998600528690LL)))))));
        arr_70 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22598)) << (((arr_64 [i_10 + 3] [(short)12]) - (8993097609424841610ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 3278010125U)))) : (((long long int) arr_39 [i_10] [i_10] [i_10 - 3] [(_Bool)1]))));
        arr_71 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_47 [i_10] [1] [i_10 + 2]) << (((var_4) - (221132474)))))) ? ((+(-2108414183))) : (((/* implicit */int) arr_62 [i_10] [i_10] [i_10 - 3] [i_10]))));
    }
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) -8LL))));
    var_29 = min((max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_7)))), ((~(((/* implicit */int) var_2)))))), (max((((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) (short)-15792)) : (((/* implicit */int) (short)15792)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
    var_30 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_4)) : (-4LL))))) ^ (((((-29LL) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) 966126560U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))) + (40))) - (13)))))));
}
