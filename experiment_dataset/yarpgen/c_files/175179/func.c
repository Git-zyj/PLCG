/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175179
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
    var_11 = ((/* implicit */short) (((~(6270122978497108633ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22438))))) : (var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_7 [i_2] [12LL] [12LL] [i_0] |= ((/* implicit */_Bool) (~(-1303293390)));
                var_12 = ((/* implicit */unsigned long long int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_2] [13] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 3] [(short)9])) : (((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_4]))));
                            var_13 = ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) -1809487440))))) : (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_3 [i_0 + 2] [i_3] [i_4])) - (13466)))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 2]))));
                        }
                    } 
                } 
            }
            for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                arr_16 [i_0] = ((/* implicit */signed char) arr_11 [i_5] [i_1] [i_0] [i_0] [i_1]);
                arr_17 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)144))));
            }
            for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) var_4);
                            arr_24 [i_8] [i_7] [i_6] [i_1] [i_8] = ((/* implicit */unsigned int) arr_2 [i_0] [i_8]);
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))));
                            arr_25 [(unsigned short)21] [i_1] [i_6 - 2] [i_8] [i_8 + 1] = ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_6 - 1] [i_7] [i_8]);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1172703521)) ? (((/* implicit */int) arr_13 [i_8] [i_8] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_20 [i_8] [(unsigned short)13] [i_8] [i_8] [i_8] [i_6 + 2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) 1172703521);
                            var_19 |= ((/* implicit */short) var_1);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_0])) ? (((/* implicit */long long int) ((unsigned int) var_1))) : (((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */long long int) 199510844)) : (arr_14 [i_1])))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3] [(_Bool)1] [i_0]))) : (arr_14 [(_Bool)1])));
            arr_32 [i_0] = (+(((/* implicit */int) ((unsigned char) arr_5 [(short)17] [i_0 - 1] [i_1] [i_0 - 1]))));
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
        {
            arr_35 [i_0] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 199510844)) ? (-1547863689) : (((/* implicit */int) (unsigned short)45720))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [0] [i_11] [0] [i_11] [0] [i_0 + 3] [i_0 + 1]))) : (15556375194398761277ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 3] [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 3] [(signed char)14])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 3] [i_0 + 3]))))) : (((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_11] [i_0] [i_11] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
        {
            arr_38 [i_0 + 3] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)18569)) ? (-1172703521) : (((/* implicit */int) var_0))))));
            arr_39 [i_0] = ((/* implicit */_Bool) arr_23 [i_0] [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_0 + 3]);
        }
        arr_40 [i_0 - 1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (short)20413)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14291))))));
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_23 = ((/* implicit */short) (~(-199510845)));
        arr_43 [i_13 + 1] = ((/* implicit */unsigned int) ((((max((var_6), (((/* implicit */long long int) var_5)))) > (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)218)))))) ? (((/* implicit */int) ((_Bool) 5240225576734606352LL))) : (((/* implicit */int) var_4))));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */long long int) -199510845)) + (min((((/* implicit */long long int) (_Bool)1)), (arr_22 [i_13])))))) ? (((/* implicit */int) arr_13 [i_13] [9] [i_13] [i_13])) : (199510844));
    }
}
