/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172415
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_6 [i_0 + 4] [i_1 - 1] [i_0 + 4])))))))));
                var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((var_0) - (11836140284050895443ULL)))))) || (((/* implicit */_Bool) (-(783169317))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */int) (unsigned char)111))))) ? (max((((/* implicit */int) arr_15 [2LL] [i_2])), (var_11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_5] [i_4])))))) : (arr_8 [i_4])));
                        arr_17 [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (max((27ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [8ULL])))))))));
                        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_7)))))), (((unsigned long long int) ((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))))));
                        var_21 -= ((/* implicit */signed char) min((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_9 [i_5]))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((arr_8 [i_3]) < (arr_11 [i_4])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_5] [(short)13])), (var_7)))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_1 [i_5])))) : (((/* implicit */int) max(((short)7882), (((/* implicit */short) arr_13 [i_2] [i_3] [4ULL] [i_3])))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 1927507626U)) ? (2367459673U) : (((/* implicit */unsigned int) ((arr_6 [i_2] [i_2] [i_2]) / (((/* implicit */int) arr_15 [i_2] [i_2])))))));
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) arr_5 [i_6]);
        var_24 -= var_0;
        arr_21 [i_6] = ((/* implicit */signed char) arr_2 [i_6]);
        var_25 = arr_4 [i_6] [i_6] [0U];
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_26 += ((((/* implicit */_Bool) (+(arr_22 [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8]))) | (((arr_26 [i_7] [i_8] [i_8]) & (((/* implicit */long long int) var_2))))))) : (((unsigned long long int) arr_4 [i_7] [i_7] [i_7])));
            var_27 = ((/* implicit */unsigned long long int) var_8);
            arr_28 [i_8] [i_8] [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_7] [i_8])) != ((~(((/* implicit */int) (unsigned char)0))))));
            var_28 += ((/* implicit */int) ((((unsigned long long int) ((0ULL) >= (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [(short)14]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_27 [i_7] [i_7])))) && (((/* implicit */_Bool) arr_1 [i_7]))))))));
            var_29 -= ((/* implicit */short) (((+((-(-2072187952))))) >> (((((((/* implicit */_Bool) ((signed char) arr_3 [i_7] [i_7] [(signed char)11]))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [16U] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8]))))) + (8944863097050286526LL)))));
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(short)21])) && (((/* implicit */_Bool) var_11))))), (arr_3 [i_9] [i_7] [i_7])))) / (max((arr_26 [i_7] [i_9] [i_7]), (arr_26 [i_7] [i_9] [i_9])))));
            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_29 [i_7])) * (arr_27 [i_7] [i_7]))))));
        }
        var_32 = ((/* implicit */int) ((unsigned long long int) arr_4 [i_7] [i_7] [i_7]));
    }
    var_33 = ((/* implicit */signed char) var_14);
}
