/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149341
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_1] |= min((min((var_13), (((/* implicit */int) arr_2 [i_2 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_2 + 1]))))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) min((3045886258U), (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) ((((var_11) != (var_13))) ? (((((/* implicit */_Bool) 1249081037U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0])), (var_7))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_14 |= ((/* implicit */short) arr_5 [i_3] [i_3] [i_3]);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(arr_6 [i_3] [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_16 = ((((/* implicit */_Bool) arr_6 [i_5 + 3] [i_5 + 1] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13716))) : (arr_5 [i_5 + 3] [i_5 + 3] [i_6 - 1]));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1249081038U))) & (((((/* implicit */unsigned int) var_7)) | (arr_5 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2]))))))));
                        var_18 |= ((/* implicit */unsigned int) (~(arr_6 [i_4] [i_5 - 1] [i_6 - 1])));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) != (arr_3 [i_3] [i_4]))))));
            var_20 ^= ((((/* implicit */_Bool) arr_5 [i_3] [i_4] [7])) ? (((1249081011U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
        }
        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_7])) ? (var_11) : (((/* implicit */int) arr_2 [i_7 + 3]))))) > (arr_21 [i_3] [i_7])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (var_5)))) ? (max((arr_12 [i_7 + 1]), (((/* implicit */int) var_8)))) : (max((-1018026933), (var_10)))))));
            arr_24 [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [2])) ? (max((((/* implicit */unsigned int) min((1763425194), (arr_12 [i_7 + 3])))), (min((1249081038U), (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */int) (unsigned char)26)), ((-2147483647 - 1)))) < (((((/* implicit */int) (_Bool)1)) << (((1662403632) - (1662403625)))))))))));
            var_22 = ((/* implicit */int) var_9);
            arr_25 [i_3] [i_7] = ((/* implicit */int) ((min((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [18] [18] [i_3])) ? (var_0) : (var_0)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) arr_2 [24U]))))) ? (((1979681786U) - (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_7] [i_3])))) : (arr_3 [i_7 + 3] [i_7 - 1])))));
        }
        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_30 [i_3] |= ((/* implicit */int) (short)-1);
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_15 [i_3] [i_3] [i_3]), (arr_15 [i_3] [i_8] [i_3])))) ? (((((((/* implicit */int) (unsigned short)21300)) & (arr_10 [i_8]))) | (((((/* implicit */int) (signed char)-105)) | (-740316011))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_6 [i_3] [i_3] [i_3]) : (arr_6 [i_3] [i_8] [i_8]))))))));
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((((var_7) - (arr_12 [i_9 + 1]))) / (min((arr_12 [i_9 - 1]), (arr_12 [i_9 - 1])))))));
                        arr_36 [i_3] [i_8] [i_9 - 1] [i_10] = ((/* implicit */_Bool) (~(var_5)));
                        arr_37 [i_3] [i_8] [i_3] [7U] = ((((/* implicit */_Bool) (+(min((var_9), (((/* implicit */unsigned int) var_12))))))) ? (((((((-2214419623465909287LL) + (9223372036854775807LL))) << (((arr_28 [i_3] [i_3]) - (2040654765U))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3])) ? (arr_33 [i_3] [i_8] [i_9 - 1] [i_10]) : (((/* implicit */int) (unsigned char)109))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((370391916), (var_12)))) ? (((/* implicit */unsigned int) min((arr_35 [i_3] [i_3]), (((/* implicit */int) var_4))))) : (arr_23 [i_3] [i_8] [16])))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (arr_38 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_11]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_11])) / (((/* implicit */int) arr_4 [i_11] [i_11])))))));
        var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((min((var_13), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_11] [i_11]))))), (((max((((/* implicit */unsigned int) var_5)), (1720758742U))) << (((((((/* implicit */_Bool) arr_39 [i_11])) ? (((/* implicit */int) (short)-8701)) : (((/* implicit */int) (signed char)-117)))) + (8724)))))));
        var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) arr_5 [i_11] [i_11] [i_11])) : (arr_38 [i_11]))) / (((((/* implicit */_Bool) arr_38 [i_11])) ? (arr_38 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))))));
        arr_41 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1662403632)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_39 [i_11])) : (4294967295U)))))) ? (((((((/* implicit */_Bool) -110442517)) ? (0U) : (var_9))) + (((/* implicit */unsigned int) max((-498248530), (var_0)))))) : (((((/* implicit */_Bool) arr_39 [i_11])) ? (((((/* implicit */_Bool) 1277633349)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11]))) : (arr_3 [i_11] [i_11]))) : (((/* implicit */unsigned int) (((_Bool)0) ? (arr_39 [i_11]) : (((/* implicit */int) (unsigned char)109)))))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_3 [(unsigned short)16] [i_11])))) ? (((var_1) << (((var_1) - (2771227969U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_11] [i_11])))))));
    }
}
