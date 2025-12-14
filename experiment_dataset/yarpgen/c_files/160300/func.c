/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160300
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))))) ? (max((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) >> (((var_6) - (16915170966248487003ULL)))))), (min((var_14), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)8] [(unsigned char)8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))))))));
        var_19 -= ((/* implicit */short) ((_Bool) 3842874390U));
        var_20 |= ((/* implicit */unsigned long long int) var_17);
        arr_2 [17ULL] [17ULL] = ((/* implicit */unsigned int) 5787594280341828805ULL);
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_21 |= ((/* implicit */short) max((arr_4 [i_1 + 1]), (((1435685424U) + (arr_4 [i_1 + 1])))));
        arr_6 [i_1 - 1] = ((/* implicit */long long int) min((((/* implicit */int) ((arr_5 [i_1]) > (arr_1 [i_1] [i_1 - 1])))), ((+(((/* implicit */int) arr_3 [i_1]))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_3 [i_2]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
        var_22 = ((/* implicit */signed char) 1129648723U);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
        {
            arr_15 [i_4] = ((/* implicit */short) arr_1 [i_4 - 1] [i_3 + 1]);
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)65521)))))));
        }
        for (signed char i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((4294967295U) ^ (0U))))));
            var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
            var_26 += (~(1129648723U));
        }
        arr_18 [i_3] [i_3 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        arr_19 [4ULL] [i_3] = (~(arr_0 [i_3 - 1] [i_3 + 1]));
        arr_20 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (short i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            {
                arr_26 [i_6] |= ((/* implicit */unsigned long long int) var_8);
                arr_27 [(unsigned char)18] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_6] [i_6])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                var_27 = ((/* implicit */unsigned long long int) arr_1 [i_6] [i_6]);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)65529)), (238676841U)));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) == ((-(min((10794119194289548189ULL), (((/* implicit */unsigned long long int) 0U))))))));
}
