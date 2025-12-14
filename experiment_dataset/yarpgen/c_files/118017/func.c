/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118017
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [(short)0] [(short)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)178))))), (((((/* implicit */_Bool) arr_3 [(unsigned char)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 2])) * (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [8U] [(unsigned short)4])) / (((/* implicit */int) arr_2 [(unsigned char)8] [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (((((+((~(((/* implicit */int) (unsigned char)1)))))) + (2147483647))) >> (((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [3ULL] [8ULL]))))), (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) - (6835924657854145010LL)))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)8])) & (((/* implicit */int) arr_0 [10LL] [(_Bool)1]))))) ? (((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))) : (((((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) arr_0 [(unsigned char)4] [(unsigned char)4])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) != (arr_1 [i_0]))))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((signed char) var_5))), (((((/* implicit */_Bool) 4611650834055299072ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4494803534348288ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_9)) - (51880)))))) / (((var_7) / (var_7)))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)11862)) : (((/* implicit */int) (unsigned short)32443)))))) * (((((((/* implicit */_Bool) 8578861447037025671ULL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_7 [(short)6])))) / (((((/* implicit */_Bool) arr_2 [22] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_2]))))))));
        arr_9 [i_2] = ((/* implicit */short) var_9);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_2 - 1] [i_2 - 1])))) * (max((min((arr_1 [i_2]), (-1678873318131880287LL))), (((((/* implicit */_Bool) (short)-19577)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [21ULL] [(short)12])))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-32748))))) << (((((((/* implicit */int) arr_0 [i_3] [i_3])) ^ (((((/* implicit */_Bool) -1795221670)) ? (((/* implicit */int) arr_11 [(signed char)12] [i_3] [(signed char)0])) : (((/* implicit */int) var_9)))))) - (7890)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [6U] [6U] [3ULL] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_16 [(_Bool)1] [i_3] [i_2] [(unsigned short)5] [i_5] [(unsigned short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [13LL] [i_4])))))) ? (((/* implicit */long long int) (-(var_8)))) : (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 1] [(unsigned char)0])) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [4ULL])) : (((/* implicit */int) arr_6 [i_2 - 1]))))));
                                arr_21 [i_2] [11LL] [i_2] [13LL] [i_2] [12ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2 - 1]))))) % (((/* implicit */int) arr_2 [i_2] [i_2 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((2314082727U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_14 [i_2] [i_7] [i_7])), (arr_3 [i_2])))) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])))));
                                var_17 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) (short)11629)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10266))) : (18245750117893644093ULL)))) / (((((/* implicit */int) (short)-1)) * (((/* implicit */int) (short)6781))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) arr_26 [(unsigned short)3] [i_9]);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_26 [i_9] [17LL]))) ? (((/* implicit */unsigned long long int) ((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))))) : (((((/* implicit */_Bool) 5296112216651848044ULL)) ? (((/* implicit */unsigned long long int) 5LL)) : (0ULL)))));
    }
}
