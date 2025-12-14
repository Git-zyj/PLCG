/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118283
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (min((((/* implicit */unsigned long long int) var_1)), (7345875821055907789ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_17 = var_5;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (4488067714336765502LL))) - (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))), (((/* implicit */long long int) (short)32755))));
            var_19 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4488067714336765502LL)))));
            var_20 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_2 [i_1])))), ((-(((/* implicit */int) arr_2 [i_0]))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) ((short) max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))));
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) ((signed char) arr_2 [i_0])))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_21 = ((((/* implicit */_Bool) 356363904U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_13)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_2])), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3938603391U)))))))) : (((arr_10 [i_2 + 2] [i_2 + 1] [i_2 + 1]) >> (((((/* implicit */int) arr_7 [i_2 - 1])) - (14394))))));
            var_22 ^= ((/* implicit */unsigned char) 3443748879U);
            arr_11 [i_3] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_13) >= (((/* implicit */int) arr_1 [i_2 + 1] [i_3])))))));
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_23 = ((/* implicit */long long int) arr_9 [i_2 + 2] [i_2 - 1]);
            var_24 ^= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (arr_13 [i_2] [i_4] [i_5]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_5 + 2] [i_4])))))))));
                        arr_20 [i_4] [i_6] &= ((/* implicit */long long int) max((arr_10 [i_2] [i_4] [i_5]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_5 + 4])))))));
                        var_26 ^= ((/* implicit */long long int) (+(min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5] [i_5])) < (((/* implicit */int) arr_1 [i_2] [i_5]))))), (arr_18 [i_6] [i_6] [i_5 + 2] [i_4] [i_2 - 1])))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) var_0);
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            arr_23 [i_2] [i_7] [(signed char)7] = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62090)) || (((/* implicit */_Bool) var_4))));
            arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2 + 3]))))) ? (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_8)), (2360575694U)))))) : ((~(min((((/* implicit */long long int) arr_8 [i_2])), (arr_12 [i_2 + 2] [i_2] [i_7])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_28 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_25 [i_8]))))));
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_32 [i_10] [(unsigned char)3] [10LL] [i_10 + 1] [i_10]);
                            var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)27518)) ? (((/* implicit */long long int) arr_3 [i_2 + 1])) : (var_0)))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_27 [i_2])) ^ (((/* implicit */int) var_14))))))) ? ((~(((/* implicit */int) (unsigned char)254)))) : (min((arr_31 [(unsigned char)6] [i_10 + 1] [i_11] [(short)2] [(unsigned short)0]), (var_13)))));
                            var_32 = ((/* implicit */_Bool) (signed char)-39);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_8] [i_9]))))) : (((/* implicit */int) var_7)))))));
                            var_34 = ((/* implicit */unsigned int) (+(arr_19 [i_2] [i_8] [i_9] [i_13])));
                            arr_42 [(unsigned char)8] [i_8] [i_2 + 1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (851218417U)))) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (arr_3 [i_2 + 2])))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_14])) ^ ((+(((/* implicit */int) arr_32 [i_2 + 1] [8] [i_2 + 2] [i_2 + 1] [i_8]))))));
                var_36 ^= ((/* implicit */unsigned int) ((3358722725725805961ULL) <= (12309820152569879844ULL)));
                var_37 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((+(((/* implicit */int) arr_22 [i_8]))))));
                var_38 -= ((/* implicit */unsigned short) var_11);
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), (arr_35 [i_2] [i_8] [i_2] [i_15]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8]))) : ((~(arr_12 [i_2] [i_8] [i_14])))))));
                    var_39 = ((/* implicit */unsigned short) min(((unsigned char)95), ((unsigned char)19)));
                }
            }
            var_40 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)5298)), (664279728U))))));
            /* LoopSeq 2 */
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_58 [i_2 + 1] [i_2] [i_8] [i_2] = ((/* implicit */unsigned char) max(((!((!(((/* implicit */_Bool) var_6)))))), ((!(arr_43 [i_2 + 3] [i_8] [i_18 - 1])))));
                            var_41 = ((/* implicit */unsigned int) max(((~(arr_19 [i_18] [i_18] [i_18 - 1] [i_18]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_2 - 1] [i_18 - 1] [i_18])))));
                            arr_59 [i_2] [i_8] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) (short)32760)));
                        }
                    } 
                } 
                var_42 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_22 [(short)2])) : (((/* implicit */int) var_9)))) | ((-(((/* implicit */int) var_9))))));
                var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) -24LL))));
                var_44 = var_6;
            }
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_45 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_48 [i_2] [i_8] [i_19])))) ? (((arr_47 [i_2] [i_2] [i_2]) ? (arr_57 [i_2] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)8] [(unsigned short)8]))))) : (((/* implicit */unsigned long long int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 3]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= ((~(((/* implicit */int) arr_46 [(short)10] [i_2] [i_8] [i_19]))))))) : ((~(((/* implicit */int) ((((/* implicit */int) var_11)) < (var_13)))))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)95))))) : (arr_17 [i_2 + 2])))))));
            }
        }
        var_47 = ((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_2 - 1] [i_2 - 1] [i_2 + 1])), (((int) arr_21 [i_2 + 2] [i_2 + 1] [i_2 - 1]))));
    }
}
