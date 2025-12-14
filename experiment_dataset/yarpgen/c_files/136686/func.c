/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136686
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */signed char) (+((+(var_2)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) (~(-4129810247769231433LL)));
                        arr_18 [4LL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [0U])) < (((/* implicit */int) ((2754982284U) <= (((/* implicit */unsigned int) 562450749)))))));
                        arr_19 [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)17078);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    arr_29 [i_7 - 2] [i_5] [i_5] [i_5] [i_5] [i_1] = ((int) arr_16 [i_7 - 1] [i_7 + 2] [i_7] [i_7 + 2] [i_5]);
                    arr_30 [i_1] [(unsigned short)3] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_6] [i_7 + 1]))) != (((long long int) 9649484043389293458ULL))));
                }
                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */int) ((1539985011U) < (1686624459U)));
                arr_32 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_5] [8LL]))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_15 = ((/* implicit */int) ((unsigned int) arr_25 [i_5] [i_5]));
                    arr_39 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_9 [(unsigned short)9] [i_8] [i_9])))))));
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (!(((_Bool) arr_21 [i_8] [i_5] [i_11]))));
                            var_17 &= ((/* implicit */unsigned long long int) arr_11 [7LL] [i_5]);
                            arr_45 [i_1] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */short) (~(3579907268712846184ULL)));
            arr_46 [i_5] = arr_16 [i_1] [i_5] [i_5] [i_5] [i_5];
        }
    }
}
