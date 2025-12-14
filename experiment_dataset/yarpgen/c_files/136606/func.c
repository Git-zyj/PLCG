/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136606
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max(((unsigned short)4096), (((/* implicit */unsigned short) (_Bool)1))));
        var_11 += ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (((unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) % (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_10 [i_3 - 2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2])) << (((arr_8 [i_1] [i_2] [i_3 + 1]) - (3132732356U)))))) || (((/* implicit */_Bool) ((long long int) arr_4 [i_1])))));
                    var_14 = ((/* implicit */unsigned short) ((long long int) ((short) arr_8 [12] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_3] [0LL] [i_5] [i_2] = ((/* implicit */int) (((+(arr_8 [i_1] [i_2] [i_3]))) % (arr_8 [i_1] [i_5] [i_3 - 3])));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_2])) || (((/* implicit */_Bool) arr_13 [(unsigned short)13] [i_2] [i_2])))))) == (((arr_5 [i_1]) % (arr_5 [i_5])))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_12 [i_3] [i_2] [i_1] [i_1]);
                    arr_17 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (((-(arr_13 [i_2] [i_2] [i_2]))) + (arr_8 [i_3 - 3] [i_3 - 2] [i_3 + 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((short) arr_3 [i_8 + 1] [i_8 - 1])))));
                        var_17 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [(_Bool)1] [i_1] [i_1]);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) var_5);
}
