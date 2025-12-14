/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161937
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 4128346516U))));
                    arr_8 [i_1] [i_0] = max((((/* implicit */int) arr_7 [(signed char)17] [i_1] [i_2])), ((~(((/* implicit */int) var_12)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [(signed char)0] [i_3] [i_2] [i_2] [i_1] [(signed char)0] = ((/* implicit */short) ((((((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_8)) : (var_14))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))));
                                arr_16 [i_0] [8LL] [i_2] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) var_9)))) < (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_5])) != (((/* implicit */int) arr_20 [i_5])))))));
                                arr_22 [23LL] [23LL] [23LL] [i_5] [i_6] = ((/* implicit */int) arr_12 [(short)19] [i_2] [0] [i_0]);
                                arr_23 [i_5] [i_1] = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(((int) min((var_4), (var_4))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (signed char)-107))))))));
                arr_29 [i_7] [i_7] [i_7] = ((/* implicit */signed char) var_6);
                arr_30 [i_8] [i_8] [(signed char)5] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) var_13))))) != (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_12))))))) ? ((~(8191ULL))) : ((~(((((/* implicit */_Bool) 3244255794361817289ULL)) ? (7576548998486623315ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [1ULL] [i_8] [(unsigned char)4])))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -917840975))) >> (((((/* implicit */int) ((signed char) var_14))) + (113)))))) ? (((/* implicit */int) arr_0 [i_8] [i_7])) : (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_20 = var_5;
                    var_21 = ((/* implicit */unsigned char) max((((arr_1 [i_7]) ^ ((-(arr_10 [i_7] [i_7] [i_7] [i_7]))))), (166620780U)));
                    arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) var_11));
                    arr_34 [i_7] [i_7] [i_8] [(_Bool)1] = ((/* implicit */signed char) (+(((int) -1949191056))));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 17; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7] [i_11] [i_7] [(short)6] [i_11] = ((/* implicit */int) arr_20 [i_7]);
                                var_22 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_9)), (arr_17 [10ULL] [i_9] [i_11])))), (min((((/* implicit */unsigned long long int) (signed char)-32)), (8193ULL)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
