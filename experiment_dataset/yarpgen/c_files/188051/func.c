/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188051
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) ((var_8) / (var_7)));
                    arr_9 [9ULL] [i_1] [i_0] = ((/* implicit */signed char) var_5);
                    arr_10 [i_1] [3ULL] = (_Bool)1;
                    arr_11 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                    arr_12 [i_1 + 2] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned char) ((short) var_5));
            arr_20 [(_Bool)1] [i_3 + 3] [15U] = ((/* implicit */unsigned short) arr_14 [i_3]);
        }
    }
    var_15 |= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (_Bool)1))))))) | (((/* implicit */int) ((unsigned short) var_12)))));
    var_16 = 13111040116762775908ULL;
}
