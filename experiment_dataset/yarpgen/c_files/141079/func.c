/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141079
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
    var_13 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0])) | (((/* implicit */int) ((signed char) var_12)))))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_3 [i_3 - 4] [i_0 + 1])))));
                        arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)58))));
                        arr_14 [i_0 + 1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_19 [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_5]);
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) (unsigned short)0)) ? (138387978) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                    arr_21 [i_0 - 1] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned char) (((~(arr_5 [i_0] [i_0] [i_5]))) / (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (signed char i_7 = 4; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_6] [i_4] [i_5] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-4518790215655306246LL)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (arr_25 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                                var_16 = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)9))))))));
                                arr_27 [i_7] [i_4] [i_0] [i_6] [i_7] = ((((/* implicit */int) (unsigned char)15)) != ((+(arr_7 [i_7 - 4]))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_7] [i_7 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) arr_25 [i_8] [i_9] [i_9] [i_11] [i_11] [i_12]);
                            arr_40 [i_11] [i_9] [i_10] [i_11] [i_9] [i_8] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)220))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_11 - 2] [i_9] = ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_34 [i_9 - 1] [i_11 - 1] [i_11 - 1]))));
                            arr_44 [i_9] [i_13] [i_11] [i_10] [i_9 + 1] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_11 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)31))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_7))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >> (((arr_29 [i_9 - 1]) - (1327016329))))))));
                            arr_45 [i_8] [i_8] [i_9] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_31 [i_9] [i_11] [i_13]);
                            arr_46 [i_8] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) (+((+(-1737282749)))));
                            var_18 -= ((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_5))))))))));
                        }
                        arr_47 [i_9] [i_9] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_4 [i_11 + 1]))))));
                    }
                } 
            } 
        } 
        arr_48 [i_8] = ((/* implicit */int) arr_1 [i_8]);
    }
    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        arr_51 [i_14] = ((/* implicit */_Bool) arr_32 [i_14] [i_14]);
        arr_52 [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) arr_35 [i_14] [i_14]))), (max(((+(0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)247)) != (((/* implicit */int) arr_9 [i_14] [i_14] [i_14])))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (_Bool)0))))) ? (max((arr_24 [i_14]), (arr_24 [i_14]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_14] [i_14] [i_14])) | (((/* implicit */int) arr_23 [i_14] [i_14] [i_14])))))));
    }
}
