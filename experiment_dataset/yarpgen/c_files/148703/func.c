/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148703
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
    var_13 = ((/* implicit */short) (unsigned short)54861);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_2]))))))) && (((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned short)54861))))))));
                            arr_13 [(_Bool)1] [i_1] [11LL] [i_1] [i_1] [i_1] = min((((((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2] [i_0])) + (((((/* implicit */int) (unsigned char)135)) - (((/* implicit */int) (unsigned short)54861)))))), ((+(((/* implicit */int) max((((/* implicit */short) (signed char)-125)), ((short)-7411)))))));
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((long long int) arr_7 [i_0] [i_0] [i_0] [i_3] [(_Bool)0])) + (4123LL)))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0 - 1] [(short)13] [(short)18] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) != (12678460))));
            }
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_10))));
            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)66))) > (min((((/* implicit */long long int) 266014943)), (-4732507076965681380LL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_1] [i_5] [i_5 + 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(var_12)));
                            arr_24 [i_0] [i_1] [(signed char)18] [i_6] [i_5] [i_7] = ((/* implicit */short) ((arr_4 [i_5 + 1] [i_0 - 2] [i_0 - 1] [i_0]) <= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_5] [i_5] = 12678460;
            }
            for (long long int i_8 = 2; i_8 < 18; i_8 += 1) 
            {
                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)95)), (-2134624740)));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max(((short)10920), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) (short)-7387)) || (((/* implicit */_Bool) -3059411170383135948LL)))))))));
                            arr_34 [i_0] [i_1] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) (unsigned char)247);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 18; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((long long int) max((((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)28708)))), ((~(((/* implicit */int) (short)-7387)))))));
                            arr_41 [i_0] [i_12] [i_8] [i_11] [i_11] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) 3926126305361620463LL))));
                            arr_42 [i_0 - 1] [i_12] [i_12] [i_11] [i_12] = ((/* implicit */signed char) min(((~((~(((/* implicit */int) (short)-7387)))))), (max((-66808770), (266014943)))));
                            var_22 |= ((/* implicit */short) var_1);
                        }
                    } 
                } 
                arr_43 [i_0] [i_1] [(short)4] &= ((/* implicit */short) (~(max((-66808770), (((/* implicit */int) (unsigned char)76))))));
            }
        }
    }
    var_23 = (_Bool)1;
    var_24 = var_2;
}
