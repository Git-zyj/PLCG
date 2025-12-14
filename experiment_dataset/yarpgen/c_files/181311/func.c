/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181311
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
    var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!((_Bool)1)))), ((short)32767)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [7ULL] = ((/* implicit */unsigned short) (_Bool)0);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_9 [i_0] [(short)9] = ((/* implicit */int) var_4);
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)27558))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_12 [i_0] [i_0] [1] &= ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_2)))));
                var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_0 [i_1] [i_2]));
            }
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_18 *= ((/* implicit */_Bool) ((short) var_3));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52814)) ? (((/* implicit */int) (unsigned short)27558)) : (((/* implicit */int) (unsigned char)56))))) || (((/* implicit */_Bool) var_10))));
                var_20 ^= ((/* implicit */_Bool) ((int) arr_11 [i_0] [i_1]));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) ((int) arr_7 [(short)8] [i_1] [(unsigned char)4]))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0])) << (((/* implicit */int) arr_10 [i_3])))))));
            }
            var_23 = ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0)));
        }
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_4])) || (((/* implicit */_Bool) arr_19 [i_4] [i_4])))) ? (((((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)44777)))) & (((((/* implicit */int) (unsigned char)70)) << (((((/* implicit */int) (unsigned char)200)) - (186))))))) : (((/* implicit */int) ((((unsigned long long int) var_2)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) || ((_Bool)1))))))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_29 [i_6] = ((((/* implicit */_Bool) min((((unsigned long long int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_7])), (((/* implicit */unsigned long long int) ((unsigned short) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((int) arr_27 [(unsigned char)17] [i_5] [5] [(unsigned char)17] [(unsigned char)17] [(short)13])) : (arr_27 [i_4] [i_5] [i_5] [i_6] [i_7] [i_4])))));
                        var_25 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) arr_24 [i_4] [(unsigned short)6] [i_5])) == (arr_17 [i_4]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) 63686290);
                    var_27 ^= ((/* implicit */long long int) ((short) min((((/* implicit */int) arr_22 [i_9] [i_4])), (1752523359))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                                var_29 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_36 [i_4] [i_8])))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((arr_37 [i_4] [i_4] [i_4] [i_9]) != (((/* implicit */int) arr_30 [i_9]))))), (arr_26 [i_4] [i_8] [i_8] [i_9])))) * (((((/* implicit */int) (short)0)) << (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_35 [i_4] [(unsigned char)13] [i_4] [19])), (var_13))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4])))))) == (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))));
    }
    var_32 = ((/* implicit */short) max((var_0), (((/* implicit */unsigned int) var_1))));
}
