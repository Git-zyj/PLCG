/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109192
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
    var_12 = var_5;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1)))));
        var_14 |= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) : (var_2)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_0 [i_1] [i_1])))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_8)) : (var_9)));
                    var_18 = ((/* implicit */signed char) var_2);
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_2] [i_2] [i_1]) % (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_0)))))))) ? (3823714185U) : (max((arr_2 [i_1] [i_2]), (var_11))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (+(arr_10 [i_1] [i_1] [i_4])));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_1]))))) + (((/* implicit */int) ((((/* implicit */_Bool) 33554431U)) && (((/* implicit */_Bool) ((var_6) >> (((var_7) - (1355518952U))))))))));
                arr_18 [i_1] [(unsigned char)8] &= ((/* implicit */unsigned int) (-(631452120)));
                var_21 *= ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)206)) << (((/* implicit */int) arr_17 [i_1] [i_1] [i_5])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_5))))));
            }
            arr_19 [i_1] = ((/* implicit */unsigned int) 9223372036854775807LL);
            var_22 = ((/* implicit */long long int) 1613309371);
        }
        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            arr_22 [i_1] [i_1] = ((/* implicit */long long int) var_7);
            var_23 = ((/* implicit */long long int) var_1);
            arr_23 [(short)14] [i_1] [(short)14] &= ((/* implicit */unsigned short) (short)32761);
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_0)))) ? (((((/* implicit */unsigned int) var_2)) | (var_8))) : ((+(var_8)))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) / (var_8)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23539)))))) ? (((unsigned int) 471253110U)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)61607), (((/* implicit */unsigned short) (unsigned char)140)))))))))));
            }
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) 4213458918U)) : (18ULL))))));
            arr_28 [i_1] [i_1] = ((/* implicit */signed char) -1490302655);
            var_27 -= ((/* implicit */unsigned long long int) var_6);
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (max((arr_13 [i_1] [i_1]), (arr_13 [i_1] [i_1]))) : (((/* implicit */unsigned int) var_2))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            arr_36 [i_10] [i_10] [14U] &= ((/* implicit */unsigned short) (unsigned char)77);
            var_29 -= ((/* implicit */unsigned int) arr_0 [i_9] [i_10]);
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1613309372)) ? (arr_4 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_10)) ? (1138632679526093614ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))));
            arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_12 [i_9] [i_10]) : (((/* implicit */int) arr_24 [i_9]))))) ? ((+(var_9))) : (33554431U)));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    {
                        arr_42 [i_9] [i_10] [i_10] [i_11] [i_12] [i_11] = ((/* implicit */int) (!(var_3)));
                        arr_43 [i_9] [i_10] [i_11] [i_10] [i_12] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        arr_44 [i_11] [i_11] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned int) (+(arr_16 [i_9] [i_9])));
                        var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_1 [i_12])));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_47 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_9] [i_13] [i_13] [i_13]))) ? (((((/* implicit */_Bool) arr_4 [(short)8] [i_9] [(short)8])) ? (((/* implicit */long long int) 1459065918U)) : (7822011082970151418LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9)));
            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1138632679526093614ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_9] [i_9] [i_13]))))) : (var_7)));
        }
        var_34 = ((/* implicit */unsigned short) -1613435320);
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        arr_56 [i_9] [i_14] [i_15] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6972918896911345085ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                        arr_57 [i_9] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) <= (((/* implicit */long long int) arr_32 [i_9] [i_14] [i_9]))))) | (var_2)));
                    }
                } 
            } 
        } 
    }
    var_35 *= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (var_11))))) | ((+(var_6))));
    var_36 = var_0;
}
