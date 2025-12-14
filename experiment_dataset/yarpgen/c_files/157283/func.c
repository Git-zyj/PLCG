/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157283
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3923649723U)) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (min((min((((/* implicit */unsigned long long int) 412938678U)), (arr_1 [21U]))), (((/* implicit */unsigned long long int) ((4294967287U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)20])))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (3923649738U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18254717917228552052ULL)) ? (-107722008) : (((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))))), (min((((/* implicit */unsigned long long int) (signed char)32)), (min((15935916441916821787ULL), (((/* implicit */unsigned long long int) arr_2 [(signed char)6]))))))));
        var_15 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) min((18269975766176634243ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))) : (arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262013868U)) ? (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)12] [(unsigned short)12])) <= (((/* implicit */int) arr_6 [i_1])))))))) ? ((-(arr_5 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        var_17 &= ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_1])), (var_0)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_3) : (var_3))) : (((/* implicit */int) arr_2 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (signed char)-34)))) <= (((/* implicit */int) arr_4 [i_1] [11ULL]))));
        var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_1])), (594436303U)));
    }
    var_19 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [11U] [i_4] [i_2] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)12)) | (14680064)))))) ? (((/* implicit */long long int) ((min((371317558U), (((/* implicit */unsigned int) arr_9 [i_6])))) << (((/* implicit */int) arr_12 [i_6] [i_5] [(unsigned short)9]))))) : (arr_5 [i_2])));
                                var_20 *= ((/* implicit */unsigned char) min((var_4), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [(_Bool)1])), (arr_14 [i_4] [i_2]))))));
                            }
                        } 
                    } 
                } 
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) << (((((/* implicit */int) arr_8 [i_2])) - (25445)))))) ? (244172418U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) <= (((/* implicit */int) arr_8 [i_2]))))))));
            }
        } 
    } 
}
