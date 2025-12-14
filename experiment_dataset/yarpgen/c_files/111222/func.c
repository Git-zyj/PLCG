/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111222
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [4] [i_0 + 1] [i_0])) | (((/* implicit */int) arr_3 [(_Bool)1] [i_0 - 1] [(_Bool)1]))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_19 ^= ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)12] [i_2])) : (var_17))) : (((((/* implicit */_Bool) arr_5 [(signed char)6] [0ULL])) ? (arr_2 [13ULL] [i_1]) : (var_8))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_6 [i_0 - 2])));
            }
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [1ULL]) : (arr_2 [(_Bool)1] [i_1])))) ? (((/* implicit */int) ((var_17) == (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [0])) ? (((/* implicit */int) arr_13 [11U] [(_Bool)1] [11U] [11U])) : (arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] [i_0])))));
                    arr_15 [i_0] [i_1] [i_0] [i_4] = (i_0 % 2 == 0) ? (((((arr_2 [i_0 - 1] [i_0 - 1]) + (2147483647))) << (((arr_8 [i_0] [i_0] [i_0 + 1]) - (4378167280436241244ULL))))) : (((((arr_2 [i_0 - 1] [i_0 - 1]) + (2147483647))) << (((((arr_8 [i_0] [i_0] [i_0 + 1]) - (4378167280436241244ULL))) - (3047164556044387184ULL)))));
                    arr_16 [i_0] [4] [(unsigned short)3] [i_4] = ((/* implicit */int) var_0);
                    arr_17 [i_0] [i_1] [15] [i_0] = ((/* implicit */int) arr_8 [i_1] [i_0] [2LL]);
                }
                for (short i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5 + 1])) / (((/* implicit */int) arr_18 [i_5 - 2]))));
                    var_22 = ((/* implicit */long long int) arr_18 [i_0 - 2]);
                    arr_20 [i_1] [(unsigned short)18] &= ((/* implicit */int) ((((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])) != (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                            var_23 = (-(((/* implicit */int) arr_0 [i_0])));
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 364825325)) && (((/* implicit */_Bool) arr_12 [5] [7]))))) < (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                arr_31 [i_0 - 1] [(unsigned short)6] [i_8] &= ((/* implicit */short) ((arr_8 [i_0 - 2] [i_8] [i_1]) >> (((var_17) + (725167929)))));
                arr_32 [(unsigned char)12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_3))))) < (((/* implicit */int) arr_5 [i_0] [7U]))));
            }
        }
        for (short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [(unsigned short)14] [(unsigned short)14] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_36 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0])) <= (((/* implicit */int) var_14)))))));
            var_26 = ((/* implicit */unsigned long long int) arr_36 [i_0 - 1]);
            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0 + 1] [i_0] [(unsigned short)3] [i_0 + 1] [i_0]))));
        }
        var_28 ^= ((/* implicit */int) arr_5 [(short)9] [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) 
    {
        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [22])) ? (arr_37 [14]) : (((((/* implicit */_Bool) (unsigned short)13289)) ? (var_2) : (-162629141)))));
        var_30 ^= ((((/* implicit */_Bool) arr_37 [20])) ? (var_2) : (-390391398));
        var_31 ^= ((/* implicit */unsigned char) ((arr_39 [18]) < (arr_40 [i_10 - 1])));
        /* LoopSeq 1 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [14LL] [i_11 - 1])) ? ((+(((/* implicit */int) arr_43 [(short)12] [i_11])))) : ((~(((/* implicit */int) (_Bool)1))))));
            var_33 ^= var_17;
        }
    }
    var_34 = ((/* implicit */unsigned char) var_1);
    var_35 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)63131)) != (var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28923)) ? (13835058055282163712ULL) : (16792504527356827250ULL))))))) : (var_8)));
    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)266))));
}
