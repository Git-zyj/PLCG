/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141404
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 += ((/* implicit */int) (signed char)87);
        arr_3 [i_0] = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_0)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (~(var_5)))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (var_9)))) ? (var_4) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (short)4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_7 [i_3 + 1]))));
                    arr_13 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 912494912)) ? (0U) : (((/* implicit */unsigned int) 912494930))));
                    arr_14 [i_1] [i_2] [11U] [i_1] = ((/* implicit */_Bool) var_14);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [2U] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)));
        arr_17 [i_4] = arr_5 [i_4];
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5]))))) >> (((max((((/* implicit */unsigned int) var_2)), (arr_1 [i_5]))) - (304262580U)))));
        var_21 = ((/* implicit */unsigned int) (!((!(arr_15 [i_5])))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_2 [i_5] [(short)16])), (4294967295U))) / (((unsigned int) arr_1 [i_5]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_5]))))), (arr_16 [i_5]))))));
    }
    var_22 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_23 += ((/* implicit */short) ((((/* implicit */unsigned int) 912494917)) & (var_5)));
        var_24 += var_10;
        arr_26 [i_6] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */int) (short)-17664)), (-912494917))))))));
        var_25 += ((/* implicit */unsigned int) arr_23 [0U]);
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_28 [i_7])) || (((/* implicit */_Bool) arr_28 [i_7])))) ? (arr_28 [i_7]) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_28 [i_7]))))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (signed char i_9 = 4; i_9 < 20; i_9 += 1) 
            {
                {
                    arr_36 [i_7] [i_7] [i_7] = ((/* implicit */short) arr_32 [i_8]);
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7])))))) ? (arr_27 [i_7] [i_8]) : (((((/* implicit */_Bool) ((signed char) (short)-17667))) ? (min((arr_27 [i_7] [i_8]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((-912494935) - (((/* implicit */int) var_2)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            {
                                arr_43 [i_7] [i_11 - 1] [(unsigned short)20] [(_Bool)1] [i_8] [(short)10] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (arr_34 [i_11])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) -912494921))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7]))) : (arr_41 [i_7] [(signed char)1] [(signed char)1] [i_7] [i_11 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) (unsigned short)43190))))))));
                                var_27 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (short)13170))));
    }
    var_29 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) var_1))));
    var_30 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 3612072934U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((unsigned int) var_14)))) << (((/* implicit */int) (_Bool)1))));
}
