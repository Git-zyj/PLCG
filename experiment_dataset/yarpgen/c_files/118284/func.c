/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118284
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
    var_14 = ((/* implicit */unsigned long long int) 4127383281765520205LL);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) ((((/* implicit */int) (short)29151)) << (((4127383281765520185LL) - (4127383281765520183LL)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [(short)9])) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)-116))))) * (((unsigned long long int) 4127383281765520168LL)))))));
                        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (-9223372036854775795LL)));
                        var_18 = ((/* implicit */short) ((arr_4 [i_1]) >= (((/* implicit */unsigned long long int) ((long long int) (signed char)-84)))));
                    }
                } 
            } 
        } 
        arr_12 [(unsigned char)8] |= ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)16] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)246))))) ? (((unsigned long long int) -9223372036854775797LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-84)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [(short)3] [2ULL] [16LL] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -4127383281765520212LL)) < (((arr_1 [i_6]) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_6]))) ^ (8619195294024311255ULL)))))));
                        arr_22 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((-9223372036854775792LL) + (2344878598378371036LL)))) - (((((/* implicit */_Bool) (signed char)83)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 4127383281765520173LL)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58584))) == (-2344878598378371036LL)))))));
                    }
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_4] [(unsigned short)6] [0U]) >> (((((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) arr_7 [0U] [i_4] [i_4])) : (((/* implicit */int) arr_6 [i_0] [(signed char)15] [i_0] [i_0])))) - (80)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_4] [(signed char)16])) >> (((long long int) 0ULL))))) : (((-4127383281765520197LL) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36407))) - (-4127383281765520174LL)))))));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) 49937688)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) : (-9223372036854775795LL));
        arr_27 [i_7] = ((unsigned long long int) ((unsigned short) arr_6 [i_7] [i_7] [i_7] [(unsigned short)2]));
        var_21 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) 8337778488265277021ULL)) ? (-1608186339695678544LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? ((+(((((/* implicit */_Bool) -3838516657938047113LL)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) arr_23 [i_7])))))) : (((((/* implicit */_Bool) ((signed char) 4127383281765520205LL))) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [(_Bool)1])) : (((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) (unsigned short)36426)) : (((/* implicit */int) (unsigned char)44))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((var_3) - (((/* implicit */unsigned int) 49937671)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) >> (((var_5) - (3290919418395594984ULL)))));
}
