/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177928
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
    var_15 = var_1;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((unsigned char) var_11));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_2 [i_0 + 1]));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) (!(arr_12 [i_2] [i_1] [i_4 + 2])));
                            var_18 += ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]);
                            var_19 = ((/* implicit */_Bool) (~(var_1)));
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_11 [(unsigned char)16] [i_3] [2U]))));
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_4 [i_2])))));
                        var_22 = ((/* implicit */long long int) (short)-11582);
                        arr_17 [(unsigned short)5] [i_1] [(unsigned short)5] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((int) arr_5 [(signed char)2] [(signed char)2]));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-33))));
                    arr_23 [i_6] [i_6] [i_6] [(unsigned char)0] = ((/* implicit */_Bool) arr_16 [i_6] [i_6]);
                    arr_24 [i_6] [i_6] [i_7] = arr_22 [i_6] [i_6 + 3];
                }
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 20; i_8 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((unsigned char) arr_25 [i_8 - 3]));
        var_25 *= ((/* implicit */short) 1681018766679408132ULL);
    }
    /* vectorizable */
    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        var_26 += ((/* implicit */unsigned long long int) arr_30 [8LL]);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(var_4))))));
        arr_32 [i_9] = ((/* implicit */int) arr_27 [i_9]);
        var_28 = (!(((/* implicit */_Bool) arr_31 [(signed char)18] [i_9 - 1])));
    }
    /* LoopNest 2 */
    for (short i_10 = 1; i_10 < 12; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            {
                var_29 = ((/* implicit */unsigned char) ((short) ((short) (short)-27770)));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_2))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_1);
    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((long long int) var_4)))));
}
