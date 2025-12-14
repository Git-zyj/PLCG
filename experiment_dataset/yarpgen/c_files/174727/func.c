/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174727
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (+(((/* implicit */int) var_1)))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_14 [i_3] [i_4] = ((/* implicit */short) var_0);
                            var_12 -= ((/* implicit */short) max((((((/* implicit */_Bool) (~(6923722509154578650LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_1] [i_3] [i_2] [i_1] [i_1]))) : (((6923722509154578650LL) >> (((var_5) + (8069305159892640596LL))))))), ((~(-6923722509154578651LL)))));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)166))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) % (var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_6] [i_4] [i_3] [i_3] [i_2] [i_1]))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned short)3909)) : (((/* implicit */int) (unsigned short)40679))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_4] [i_3] [i_2] [i_1])))))))));
                            var_14 = ((/* implicit */unsigned short) var_3);
                            var_15 = ((/* implicit */signed char) ((var_7) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11511484406307888060ULL)) ? (13195086313747165327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_4] [i_4] [(unsigned short)8])) / (((/* implicit */int) arr_9 [(unsigned char)4] [(unsigned short)6] [i_2] [i_1]))))) : (var_8))))));
                            var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [6ULL] [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_13 [3U])) : ((~(((/* implicit */int) arr_13 [i_1]))))))), (((var_8) >> (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) >= (((/* implicit */int) var_3)))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_4] [i_2] [i_3]))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_7] [i_2] [i_7 - 1] [i_7 + 1] [i_2] [i_7 + 2] [i_7])) ? (((((/* implicit */_Bool) -4567669695878792558LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_10))))));
                            arr_19 [i_7] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_5 [i_1] [i_3] [i_4])) - (((/* implicit */int) arr_3 [i_1]))))));
                        }
                        var_19 += ((/* implicit */signed char) ((((/* implicit */int) ((short) ((signed char) (unsigned short)47422)))) ^ (((((((/* implicit */int) var_2)) | (((/* implicit */int) var_3)))) >> (((((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)32170)))) - (18848)))))));
                        var_20 ^= ((/* implicit */long long int) var_10);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) / (-6923722509154578656LL))))));
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_10)))))) ? (arr_20 [i_8]) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_8]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8] [i_8] [(unsigned char)14] [i_8] [i_8] [i_8])) : (arr_20 [i_8])))))));
        var_23 = ((/* implicit */unsigned long long int) arr_7 [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [19U] [i_9])) && (((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])))))));
        var_25 = ((/* implicit */short) arr_16 [i_9] [i_9] [(short)15] [i_9] [i_9]);
        arr_24 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (arr_20 [i_9]))) ? (((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_9]) < (((/* implicit */unsigned long long int) var_10))))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_9])))) > (((/* implicit */int) arr_13 [i_9])))))));
        var_27 = ((/* implicit */short) (+(arr_15 [i_9] [i_9] [i_9] [i_9] [16LL] [i_9] [16LL])));
    }
    var_28 = ((/* implicit */unsigned char) var_2);
}
