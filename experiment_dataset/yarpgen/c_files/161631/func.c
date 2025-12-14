/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161631
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) 1954337694)) : (5060770697583259086ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)31))))))) : ((((_Bool)0) ? (27U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28917))) : (4294967295U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (-1860138564904351004LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
        var_16 -= ((/* implicit */_Bool) (unsigned char)171);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_0] |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1])) | (((/* implicit */int) (signed char)-4)))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1860138564904351015LL)) ? (((/* implicit */int) (unsigned short)38984)) : (((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)4221))) : (((((/* implicit */_Bool) (signed char)-12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)-26)), ((unsigned short)45769))), (arr_0 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 &= ((/* implicit */_Bool) 1291304345166462973ULL);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) 18446744073709549569ULL);
                        var_18 &= ((/* implicit */signed char) (unsigned char)255);
                        var_19 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) ((((/* implicit */_Bool) 1861243600U)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (short)13543))))));
                        arr_18 [i_0] [i_0] [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) arr_9 [i_2] [i_4]);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8276133214353425242LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (2804112760U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (2U))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -8219045953278192062LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) : (2042ULL)));
                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) (signed char)61)))), (arr_16 [i_0] [i_0] [i_2] [i_2] [i_5] [i_2])))) : (((/* implicit */int) ((short) arr_6 [i_0] [i_5])))));
                arr_23 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) -7652652403147797258LL);
            }
            /* vectorizable */
            for (short i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
            {
                arr_26 [i_0] [i_6] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) <= (arr_14 [i_0] [i_0] [i_0]))) ? (((unsigned int) arr_22 [(unsigned char)6] [i_6 - 2] [i_2] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 - 2] [i_6] [i_6])))));
                arr_27 [i_6] [i_2] = ((/* implicit */_Bool) (signed char)42);
            }
            /* vectorizable */
            for (short i_7 = 2; i_7 < 14; i_7 += 1) /* same iter space */
            {
                arr_32 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) 18446744073709549569ULL)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_6 [i_0] [i_7]))))));
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned char i_9 = 4; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_38 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_9] [i_9 - 2] [i_9 + 3] [i_9 + 4] [i_9 + 4] [i_9])) ? (7652652403147797258LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9 + 3] [i_9])))));
                            var_23 = ((/* implicit */unsigned char) ((short) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4241137676U))));
                            var_24 = ((/* implicit */signed char) arr_31 [i_0] [i_0] [i_7 - 2] [(_Bool)1]);
                        }
                    } 
                } 
                var_25 = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) 8286770597281038748ULL)));
                arr_39 [i_7] [i_2] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11979)) ? (-1714542255537486854LL) : (((/* implicit */long long int) 983699467U))));
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) arr_3 [i_0]);
                        var_27 = ((/* implicit */_Bool) ((long long int) (unsigned short)31448));
                        arr_46 [(unsigned char)11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8220381814037755152LL)) ? (-810824502) : (((/* implicit */int) (signed char)-87))))) ? (min((((/* implicit */unsigned int) (unsigned char)91)), (4130650012U))) : (((/* implicit */unsigned int) -61193688))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 63050394783186944ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (567928452U)))));
                        arr_47 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 2047ULL))))))), (((long long int) (unsigned char)153))));
                    }
                } 
            } 
            arr_48 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
    }
    var_28 = ((/* implicit */long long int) 1392731720U);
}
