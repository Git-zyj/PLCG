/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151841
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((short) 283726776524341248LL)), (((/* implicit */short) ((arr_6 [i_0] [i_3] [(_Bool)1]) <= (283726776524341248LL))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)62992)))) : (((/* implicit */int) min((min(((unsigned char)61), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) var_10)))))));
                        arr_11 [i_1] [i_1] [(signed char)16] [14LL] [i_1] = ((/* implicit */_Bool) ((((arr_6 [i_0 + 3] [i_1] [i_2 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1] [i_1]))))) / (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [(signed char)11]))) : (arr_9 [9U] [(_Bool)1] [19] [(signed char)0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_1 - 2] [i_0 + 3])))))));
                        arr_12 [i_0] [4ULL] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)190)) <= (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))))));
                        arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_6 [(short)19] [i_1] [i_2 - 2]) < (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_2 [i_2 - 2] [i_1 - 1])))))));
                    }
                } 
            } 
        } 
        arr_14 [10] = min((864893062), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_3 [(signed char)10] [i_0] [(_Bool)1])))))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_26 [i_5] [i_7] [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_7] [5LL] [5LL])) >= (((/* implicit */int) arr_1 [i_4 - 1]))));
                        arr_27 [i_7] [i_6] [12] = arr_4 [i_7];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_36 [i_9] [i_4] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20)) != (((/* implicit */int) (unsigned short)34429))));
                        arr_37 [i_9] [i_9] = (+(382668979));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned int) (short)38);
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 4; i_12 < 13; i_12 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) arr_31 [8] [i_11] [8]);
                var_23 = ((/* implicit */long long int) ((arr_21 [i_4 - 1] [i_4 - 4] [i_11] [i_4 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [8] [i_11] [(_Bool)1])))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -610500399)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_18) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))));
            }
            for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                var_25 ^= ((/* implicit */long long int) ((var_19) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11])))));
                arr_47 [5ULL] [5ULL] [14] = ((/* implicit */unsigned char) ((arr_17 [i_4 - 2] [i_4 - 3] [i_4 - 4]) ? (arr_39 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 4] [i_4 + 1])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    {
                        arr_52 [i_4] [i_11] [0LL] [i_15] = ((/* implicit */unsigned long long int) var_17);
                        var_26 ^= ((/* implicit */short) var_7);
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            var_27 = ((/* implicit */int) arr_4 [18LL]);
            arr_56 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) != (arr_35 [i_4 + 1] [16U])));
        }
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_45 [i_17] [i_17] [i_17] [i_17])))))));
        var_29 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_17] [i_17] [i_17] [i_17]))) - (var_13));
        arr_59 [7] = ((((/* implicit */_Bool) arr_42 [i_17] [i_17] [i_17] [i_17])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)11] [i_17] [15LL]))));
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2634543943U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1015718963U)));
            arr_63 [i_17] [i_18] [i_17] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_17] [i_17] [i_17] [16U])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_7 [i_17]))) : (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))))));
            arr_64 [i_17] [i_18] |= ((/* implicit */long long int) ((((unsigned int) var_1)) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    {
                        arr_69 [(short)8] [i_17] = ((/* implicit */unsigned short) var_3);
                        var_31 ^= ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        }
    }
    var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-31))))) / (var_19)));
}
