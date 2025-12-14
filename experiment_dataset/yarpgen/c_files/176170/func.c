/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176170
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    var_12 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))));
                    var_13 -= max((max((((/* implicit */unsigned long long int) var_8)), (var_1))), (((/* implicit */unsigned long long int) ((arr_1 [i_1 - 2] [i_2 + 1]) && (arr_1 [i_1 + 2] [i_2 - 2])))));
                    var_14 = min((var_6), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)0))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 |= ((-2109913375) - (-605408944));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_9 [i_1 - 1] [i_3 + 1] [i_4] [i_4] [i_4]))) ? ((((_Bool)0) ? (min((var_0), (((/* implicit */unsigned long long int) var_4)))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -124642380))))));
                                var_17 -= ((/* implicit */unsigned long long int) ((min((max((arr_8 [i_0] [i_0] [0] [i_2] [i_3 - 1] [i_4]), (((/* implicit */unsigned long long int) arr_11 [8])))), (((/* implicit */unsigned long long int) ((4692745176971334811ULL) <= (var_0)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!((_Bool)0))))))));
                                var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) / (((((/* implicit */_Bool) 17203930984348259982ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3028269060392022488ULL))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    arr_14 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_1] [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((var_7) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((arr_7 [i_0] [i_1] [i_1]) - (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_5 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1 + 2] [i_1]));
                                var_20 = ((/* implicit */short) ((var_0) << (((/* implicit */int) var_9))));
                                var_21 = (+(((/* implicit */int) ((_Bool) (_Bool)0))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_1))));
                    arr_22 [i_0] [i_1] [i_8] = ((/* implicit */_Bool) var_0);
                    arr_23 [i_1] [i_1] [i_8] = (!(((_Bool) var_7)));
                    var_23 -= (!(arr_1 [i_0] [i_0]));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13753998896738216805ULL)) ? (4294967295U) : (((/* implicit */unsigned int) 0))))) >= (arr_8 [i_0] [i_1 - 1] [i_1] [i_8] [i_8] [i_1 - 2]));
                }
                var_24 = ((/* implicit */signed char) (-(min((13552283569433477029ULL), (((/* implicit */unsigned long long int) max((536838144U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                var_25 *= ((/* implicit */unsigned int) min((10562830395931494839ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min(((~(var_4))), (((/* implicit */int) ((((/* implicit */int) arr_25 [i_9] [i_9 - 1])) >= (((/* implicit */int) (_Bool)1))))))))));
        var_27 -= ((/* implicit */int) var_11);
    }
    for (int i_10 = 1; i_10 < 22; i_10 += 3) 
    {
        var_28 &= ((/* implicit */unsigned int) ((arr_27 [i_10 + 1] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_10])))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            arr_32 [i_10 + 2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_10] [i_11] [i_10])) * (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) 7883913677778056798ULL)) ? (var_6) : (var_2)))))) || (((var_4) == (((/* implicit */int) (_Bool)1))))));
            var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)22785)), (4894460504276074567ULL)));
            arr_33 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(13552283569433477027ULL))))));
        }
        var_30 ^= var_11;
    }
    var_31 = ((/* implicit */int) min((((var_1) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22779))))))), (var_10)));
}
