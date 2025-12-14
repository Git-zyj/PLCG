/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175705
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])) - (8985))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 730201356U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_2 [i_1 + 4] [i_1 + 4])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) == (arr_2 [i_1 + 1] [i_4])))) : (((/* implicit */int) ((unsigned char) arr_2 [i_1 - 2] [i_3])))));
                                var_14 ^= ((/* implicit */short) (signed char)32);
                                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)32)) << (((/* implicit */int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) (_Bool)1)))))))) == (((((/* implicit */_Bool) (short)32748)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-14773), (((/* implicit */short) (_Bool)1))))))))));
                                var_16 = ((/* implicit */unsigned short) ((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((((/* implicit */int) var_5)) + (((/* implicit */int) var_12)))))) >= (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-44))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4791338077144039278LL)))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) >= (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1626554199)) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)35543)), (min((((/* implicit */int) arr_10 [i_0] [i_0] [i_1])), (var_1))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)13451)))) / (364466725))));
        var_21 = ((((unsigned int) arr_6 [i_7] [(_Bool)1])) % (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-44)) - (((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_13 [i_8] [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_8] [i_8])))), ((+(((/* implicit */int) (unsigned char)245)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) arr_10 [i_8] [(unsigned char)4] [(signed char)8]);
                        var_24 = ((((((/* implicit */int) arr_6 [i_9] [4U])) | (((/* implicit */int) arr_6 [i_8] [10])))) + (((/* implicit */int) max(((unsigned char)177), (((/* implicit */unsigned char) var_6))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [10U] [i_10] [10U]), (arr_8 [i_8] [i_10] [i_11]))))) ^ (arr_14 [i_8] [i_8] [i_8] [i_8] [(signed char)1] [i_8] [i_8])));
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) (short)-32765))) : (((int) (unsigned short)35543)))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)32)), (-671842539)))) : (4294967272U)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27190))))) ? (((/* implicit */int) (unsigned short)1536)) : ((~(((/* implicit */int) (short)7578))))));
                    arr_42 [i_8] [i_8] [i_8] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_33 [(short)5] [i_12] [i_12] [i_12])) - (min((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_6))))), (var_13)))));
                    var_29 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_40 [(short)6] [(unsigned char)0])) ? (((/* implicit */int) arr_40 [i_8] [(short)6])) : (((/* implicit */int) arr_40 [i_8] [(_Bool)1])))) >= (((((/* implicit */int) arr_40 [(signed char)6] [(signed char)10])) - (((/* implicit */int) var_2))))));
                }
            } 
        } 
    }
    for (signed char i_14 = 1; i_14 < 11; i_14 += 2) 
    {
        var_30 = ((/* implicit */signed char) min((min((((/* implicit */int) arr_20 [17LL] [17U] [i_14 - 1] [i_14] [i_14] [i_14 + 2])), (var_1))), (((/* implicit */int) min(((signed char)127), ((signed char)-2))))));
        var_31 = ((/* implicit */_Bool) var_2);
    }
}
