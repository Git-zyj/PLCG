/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124036
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
    var_19 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (16952422004885386991ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (unsigned char)220);
        var_20 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0]));
        arr_4 [i_0] [i_0] = (-(((arr_1 [4ULL]) + (((/* implicit */int) var_0)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : ((~(var_8)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 16337370371412098217ULL)) ? (15684523596137997553ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) var_8)))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)9))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (12021209126023339551ULL)));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)40424)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (arr_10 [i_1] [17LL] [i_1] [i_1])))));
                    arr_19 [(unsigned short)12] [i_3] [i_0] = ((/* implicit */unsigned char) 21ULL);
                    arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_17) : (arr_14 [i_0] [i_4])));
                }
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((arr_7 [i_0] [(unsigned short)6] [i_3] [i_3]) + (((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) var_5)) : (arr_1 [15U]))))))));
                var_26 += ((/* implicit */long long int) (+(arr_10 [i_0] [i_1] [i_1] [i_3])));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)40424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (10764771902612891793ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)190))))))))));
                arr_21 [i_0] [i_0] [0ULL] [i_1] = ((/* implicit */short) ((unsigned int) var_15));
            }
        }
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) 801563847);
        arr_24 [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4294967295U))) + (((/* implicit */unsigned int) arr_1 [i_5]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_29 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) 6997782515692995664LL)) ? (7ULL) : (arr_12 [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            arr_28 [i_6 + 3] = ((/* implicit */unsigned char) (((-(max((var_18), (((/* implicit */int) var_0)))))) == (((/* implicit */int) var_7))));
            var_30 += ((/* implicit */_Bool) max((arr_10 [i_5] [i_5] [i_5] [i_5]), (15U)));
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 12; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((var_18) | (((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) var_0))))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)0)))))))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_32 += max((((((arr_33 [(unsigned short)8]) * (((/* implicit */unsigned long long int) 0LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16301), (((/* implicit */unsigned short) arr_31 [8U])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 692597052)) ? (arr_29 [i_8]) : (((/* implicit */int) (unsigned short)5878))))));
                    arr_39 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) 1484489106)) : (max((((/* implicit */long long int) -692597053)), (-7313565914259834218LL)))))) ? (((/* implicit */unsigned long long int) var_8)) : (min((var_11), (((/* implicit */unsigned long long int) var_12))))));
                }
            }
        } 
    } 
}
