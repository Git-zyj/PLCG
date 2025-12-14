/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11274
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) ((((arr_3 [i_0]) ^ (arr_3 [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)36376)))))));
                    var_13 ^= ((/* implicit */short) (-((+(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_5 [i_0 - 1] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)36367)))) != (((/* implicit */int) min((((/* implicit */unsigned short) max((var_3), (var_4)))), (max((var_11), (((/* implicit */unsigned short) arr_9 [i_3] [i_3])))))))));
        var_15 ^= ((/* implicit */long long int) var_0);
        var_16 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51732)) * (((/* implicit */int) (unsigned short)29160))))) ? (((unsigned long long int) (unsigned short)36376)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1]))))) > (var_8)));
    }
    for (short i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */short) (-((~(((/* implicit */int) arr_16 [i_7 - 2]))))));
                        var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max(((short)-17288), (arr_16 [i_6])))) ? (((/* implicit */int) min((arr_24 [i_4]), (arr_23 [i_4] [i_4] [i_7])))) : ((-(((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */short) arr_22 [i_4 - 1] [i_4] [i_4 - 1]);
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                for (short i_10 = 3; i_10 < 18; i_10 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_32 [i_9 + 1] [0ULL] [i_4 + 1] [i_8])))), ((-(((/* implicit */int) arr_31 [i_10] [i_10] [i_10 - 2] [(short)8]))))));
                            arr_35 [i_8] = var_11;
                        }
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_36 [i_12] [i_10] [5LL] [(unsigned short)17] [i_4] [i_4]))));
                            arr_38 [i_4] [i_8] [i_8] [i_8] [i_12] [i_10] [i_4 - 1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_32 [i_8] [16ULL] [i_4 + 1] [i_8])) | ((-(((/* implicit */int) var_3))))))));
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((unsigned long long int) arr_16 [(short)4])) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) % (((/* implicit */int) var_1))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) max(((+(((/* implicit */int) arr_25 [i_4 + 1] [i_4 + 1] [i_9])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)14844)), ((unsigned short)39641))))))))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (((unsigned long long int) var_1))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_9])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))))));
                            var_26 = ((/* implicit */short) max((var_26), (arr_37 [i_4 - 1] [i_4] [i_4 - 1] [(short)4])));
                        }
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                        {
                            arr_43 [i_4] [i_8] [i_4] [(short)11] [(short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_4 - 1] [i_8] [i_10 + 1] [i_8])) + ((+(((/* implicit */int) arr_32 [i_4 + 1] [i_14] [i_10 - 3] [i_8]))))));
                            var_27 ^= var_0;
                            var_28 ^= ((/* implicit */unsigned short) var_0);
                        }
                        arr_44 [i_4] [i_8] [i_9 - 1] [i_8] = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_42 [i_4] [i_8] [i_9] [(short)2] [15ULL])) : (((/* implicit */int) (unsigned short)36367)))) - (((((/* implicit */int) var_3)) + (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 4) 
        {
            for (short i_17 = 1; i_17 < 16; i_17 += 3) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_16 + 2])) >= (((/* implicit */int) var_11))))) + (((((/* implicit */int) arr_12 [i_16 + 1])) << (((((/* implicit */int) var_7)) + (9330)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 3; i_18 < 14; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 15; i_19 += 4) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_11)), (var_5)));
                                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) (-(var_5)))))))));
                                var_33 ^= arr_2 [i_19];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
