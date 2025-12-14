/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144877
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_3);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (((arr_2 [(unsigned char)7]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_0)))) % (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned long long int) var_10))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) -2500274949738828222LL);
            arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) var_13));
            var_23 = ((/* implicit */short) var_6);
            var_24 = ((/* implicit */_Bool) (-((~(((unsigned int) 3957973509U))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_16), (((/* implicit */short) arr_1 [i_0 - 1]))))) - (((/* implicit */int) var_0))));
        }
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_11 [(signed char)6] [(signed char)6] [i_3] = ((/* implicit */signed char) ((min((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_2)) - (103))))), (((/* implicit */int) (unsigned short)35454)))) >> ((((+(((/* implicit */int) arr_3 [i_0 + 1])))) + (707)))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2528534551U);
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)7287)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        var_27 = ((/* implicit */long long int) var_11);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_21 [i_6] [i_4] [i_4] [i_6] |= ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)185)) << (((min((var_10), (((/* implicit */long long int) (unsigned short)30082)))) - (30061LL)))))));
                    arr_22 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) min((arr_16 [i_4 + 1]), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 536870912U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5]))))))));
                    arr_23 [i_5] [i_6] [i_6] [i_5] = var_16;
                }
            } 
        } 
        var_28 |= var_17;
    }
    for (unsigned int i_7 = 3; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    arr_30 [i_7] = ((/* implicit */unsigned int) ((long long int) (+(min((((/* implicit */unsigned int) var_8)), (var_18))))));
                    arr_31 [i_7] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_8])), (var_19)))) ? ((+(arr_10 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (((unsigned long long int) 536870916U))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */short) (_Bool)1)), ((short)480))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_7]))))) : (min((((/* implicit */unsigned long long int) ((signed char) var_17))), (((arr_19 [3U] [(unsigned char)15] [3U] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15662)))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */long long int) var_8);
        arr_32 [i_7 - 3] = ((/* implicit */short) ((unsigned int) 3758096384U));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 = ((/* implicit */int) ((536870916U) >> (((/* implicit */int) (_Bool)0))));
        arr_36 [i_10] = ((/* implicit */unsigned int) (_Bool)1);
        var_32 = ((/* implicit */long long int) (+((+(min((587045691U), (((/* implicit */unsigned int) -1992215514))))))));
    }
    var_33 = (-(((/* implicit */int) var_16)));
    var_34 |= ((/* implicit */unsigned short) var_16);
    var_35 &= ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) * (-1692133308)))));
}
