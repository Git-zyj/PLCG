/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157290
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1935687719) : (((/* implicit */int) ((short) var_9)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1935687711) : (1935687711))) < (((/* implicit */int) arr_3 [i_0 + 1]))))) : (((/* implicit */int) max((arr_3 [i_0 - 3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 244633210U)) || (((/* implicit */_Bool) arr_2 [1]))))))))));
        arr_4 [(_Bool)1] = ((/* implicit */signed char) 2505983088U);
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1055672817U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0 - 2] [i_0]))) : ((~(((/* implicit */int) var_0))))));
        arr_6 [i_0] [i_0 - 3] = ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_13 [i_1] [7]))));
                        var_14 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_3)))))), (arr_9 [i_1])));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) (~(max((var_9), (((/* implicit */unsigned long long int) arr_8 [i_1]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_26 [(_Bool)1] [i_6] [i_7] [i_7] = ((/* implicit */short) ((int) ((((/* implicit */long long int) 1935687691)) | (min((var_7), (((/* implicit */long long int) var_3)))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((~((~(max((((/* implicit */unsigned long long int) arr_11 [i_7])), (9943198706800970426ULL)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_3))))));
}
