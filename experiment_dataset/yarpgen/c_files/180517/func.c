/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180517
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
    var_19 = ((/* implicit */_Bool) ((long long int) var_17));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) | ((+(((/* implicit */int) var_11))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned short)19] = var_18;
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */short) ((max((-2419921196794100522LL), (((/* implicit */long long int) (unsigned char)168)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [2LL] [i_1 - 3])) ? (((/* implicit */int) arr_2 [i_1 - 3])) : (((/* implicit */int) max((var_8), (var_10)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)-32750)) / (((/* implicit */int) (unsigned char)170))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -2419921196794100519LL)) ? (-2419921196794100519LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))))));
        var_22 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_2]), (arr_2 [i_2])))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) ((unsigned short) var_10)))));
    }
    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        arr_16 [i_3 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1])) * (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1])))))));
        arr_17 [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_23 [(short)10] [(short)10] [i_5] &= ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) >= (((/* implicit */int) var_2))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))))))));
                    var_24 -= ((/* implicit */unsigned char) var_2);
                    var_25 |= var_18;
                    var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_1 [i_3 - 2]), (arr_1 [i_3 - 1]))))));
                }
            } 
        } 
        arr_24 [i_3 - 1] = ((/* implicit */unsigned short) ((arr_8 [i_3] [i_3 + 1]) && (((/* implicit */_Bool) ((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_28 [i_6] = ((/* implicit */short) ((min((var_4), (var_7))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_16))))) : (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            arr_32 [i_6] = ((/* implicit */unsigned char) var_18);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_6] [i_7]), (((/* implicit */unsigned char) arr_15 [i_6]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18))))));
        }
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) var_3))))) - (((/* implicit */int) var_2))));
}
