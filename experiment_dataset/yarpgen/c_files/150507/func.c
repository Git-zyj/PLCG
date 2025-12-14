/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150507
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [0ULL] |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 2] [i_1])) * (((/* implicit */int) arr_2 [i_1] [i_0])))));
            var_18 = (+(((/* implicit */int) ((unsigned char) arr_2 [i_1] [(short)19]))));
        }
        for (int i_2 = 4; i_2 < 23; i_2 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_0 - 1]);
            var_19 = ((unsigned short) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])) & (16765162399260671012ULL)));
            var_20 |= ((/* implicit */unsigned short) ((unsigned char) arr_3 [i_0 - 1]));
        }
        for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_5] [i_4] [i_3 - 1]))));
                        var_22 = ((/* implicit */short) ((unsigned long long int) 2097136));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_0] [i_0] [21] [i_0] [19])) - (((/* implicit */int) arr_10 [i_0])))) & (((/* implicit */int) arr_10 [i_5]))));
                        var_24 = ((/* implicit */unsigned long long int) arr_16 [i_3 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8600842368246790885LL)) ? (arr_8 [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 - 1] [i_3 + 1])));
            var_25 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [2];
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_0 - 2]));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 1] [i_3 - 1]))) == ((~(4183102846163202298ULL)))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0 + 3] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_6 + 2] [i_0 + 1] [i_0])) - (16212)))));
                    var_28 = ((/* implicit */long long int) ((unsigned long long int) ((arr_22 [i_0] [i_0] [i_7]) & (((/* implicit */int) (short)3397)))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) (+(var_5)));
    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    var_31 += ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) ((int) max((var_1), (var_15)))))));
    var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)384))));
}
