/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116068
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
    var_19 = ((/* implicit */unsigned short) var_2);
    var_20 &= ((/* implicit */short) (~(((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            arr_13 [i_0] [1LL] [i_1] [(_Bool)1] [1LL] [(short)4] [1LL] = ((/* implicit */_Bool) (unsigned short)24);
                            var_21 *= ((/* implicit */short) ((long long int) ((arr_3 [i_0]) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)226)))));
                        }
                        var_22 = ((/* implicit */signed char) (short)32750);
                        arr_14 [14LL] [(unsigned short)12] [14LL] [(unsigned char)18] [14LL] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)247))));
                        arr_15 [(short)1] [i_1] [(_Bool)1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]);
                        arr_16 [11] [i_2 - 2] [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_0]));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_10 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 1] [(unsigned short)12] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (unsigned char)136)))));
                    var_25 = arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [(signed char)9] [12LL];
                }
            } 
        } 
        var_26 ^= ((/* implicit */short) arr_4 [i_0] [7LL]);
        /* LoopSeq 1 */
        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                var_27 = arr_12 [i_0] [(unsigned short)4] [i_0] [i_7 + 1] [i_0 - 1];
                var_28 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0]));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_25 [i_0] [i_7 - 3]))));
                var_30 = (!(((/* implicit */_Bool) arr_1 [i_7] [i_7])));
                arr_33 [i_0] [i_7 - 3] = ((/* implicit */short) (~(-509811710)));
            }
            var_31 = ((/* implicit */signed char) ((_Bool) arr_24 [i_7 - 4]));
            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (signed char i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                for (short i_13 = 3; i_13 < 15; i_13 += 4) 
                {
                    {
                        arr_44 [(unsigned short)4] [(unsigned short)1] [i_11] [i_13] [(unsigned short)1] = ((/* implicit */_Bool) ((short) min(((-(((/* implicit */int) (short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_10] [8]))))))));
                        var_33 = ((/* implicit */int) min((var_33), ((-(((/* implicit */int) min((arr_5 [i_10] [i_11] [i_10]), (arr_39 [i_13 - 2] [i_13 - 2] [i_13 - 1]))))))));
                        arr_45 [14LL] [i_11] [i_12] [i_13] = arr_11 [i_10] [i_10] [i_12] [i_13] [i_13] [i_13];
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */short) min((((/* implicit */int) arr_26 [(unsigned char)3] [i_10] [i_10] [i_10])), ((-(((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [(_Bool)1]))))));
    }
    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min((((long long int) var_17)), (((/* implicit */long long int) (short)0)))))));
    var_36 = ((/* implicit */signed char) var_11);
}
