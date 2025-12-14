/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130833
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) (short)-12395)))) >= (((/* implicit */int) ((unsigned short) var_11)))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28611)) ? (-1673241492) : (((/* implicit */int) var_10)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_0] [i_1 + 3] [i_1 + 2])), ((~(arr_6 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) 2279277299702645301LL)) : (((((/* implicit */_Bool) ((signed char) -1942898265))) ? (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]))) : (max((8778358261030783875ULL), (((/* implicit */unsigned long long int) arr_1 [(short)2]))))))));
                            var_14 = ((/* implicit */short) ((((((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_12 [i_2] [i_2] [i_1 + 2] [(unsigned char)6] [i_1 - 1])))) + (2147483647))) >> (((9668385812678767740ULL) - (9668385812678767724ULL)))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) 3520689022U);
                            arr_16 [i_0] [i_1] [1U] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(16589442259103313385ULL)))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-6244))))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((16589442259103313370ULL), (((/* implicit */unsigned long long int) (unsigned char)217))))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 7; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16820447329690289194ULL)) ? (16820447329690289194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (2279277299702645301LL) : (((/* implicit */long long int) arr_6 [i_1 + 2] [i_1] [i_1 + 1]))))) && (((/* implicit */_Bool) (-(arr_6 [i_1 + 1] [i_1 + 1] [i_6 + 2])))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_2] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_6), (((/* implicit */short) var_4)))))))), ((~(var_9))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) arr_15 [i_3]);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)7] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])))));
                            arr_23 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-43))))));
                            arr_24 [7U] [7U] [i_7] = ((/* implicit */_Bool) var_4);
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_7] [6] = ((/* implicit */short) ((int) arr_12 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1]));
                        }
                        arr_26 [(short)7] [(short)7] [(short)7] [10LL] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [(unsigned char)5] [i_1 + 3] [i_1 + 2] [i_1 + 3] [1LL])), (arr_6 [i_1 + 2] [i_1] [i_3])))), (((((/* implicit */_Bool) (~(1857301814606238236ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_2]))))) : (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3])), (arr_11 [i_2])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min(((+(arr_30 [i_9 + 2] [i_9 + 2] [i_9 - 1]))), (max((((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2))))), ((-(arr_30 [(_Bool)1] [14U] [14U])))))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_8);
                            var_20 = ((/* implicit */int) ((min((-8433830032464293781LL), (((/* implicit */long long int) (unsigned short)65535)))) - (((/* implicit */long long int) (((~(var_0))) << (((arr_31 [(_Bool)1]) - (1253169754716223552LL))))))));
                            arr_37 [i_8] [i_9] [14ULL] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_34 [i_9] [i_9 + 2]), (2980988606U))))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) | (min((8778358261030783875ULL), (((/* implicit */unsigned long long int) 2147483647))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (-2279277299702645290LL))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)3079)) ? (17189441162499669211ULL) : (3622467878511879513ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1626296744019262409ULL)))))))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-36)) + (((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_0)))))));
}
