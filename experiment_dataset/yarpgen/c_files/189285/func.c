/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189285
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [5] = max((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))))), (((((/* implicit */int) var_8)) << (((/* implicit */int) var_2)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-23204)) >= (-992477264)));
                arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_9)) : (arr_1 [i_0] [i_0])));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_11 ^= ((/* implicit */long long int) ((-116306482) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (arr_6 [i_1] [i_1] [i_1] [i_1])))));
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_0])) - (15994)))))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_6);
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_4)) - (47666))))))));
                            var_14 = ((/* implicit */_Bool) var_3);
                            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)-32755)))) != (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned short) ((((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) var_2)))) >> (((((/* implicit */int) var_3)) - (63759)))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_0]))))))));
                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) var_3)))) < (((/* implicit */int) var_0))));
            }
            var_19 = ((/* implicit */unsigned short) ((arr_20 [i_0]) == (((/* implicit */int) var_4))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_24 [i_0] [i_7] = ((/* implicit */unsigned short) var_0);
            var_20 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                arr_29 [i_9] [i_9] = ((/* implicit */unsigned int) var_6);
                var_21 = ((/* implicit */unsigned int) var_4);
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1))));
                arr_30 [i_9] [(_Bool)1] = ((/* implicit */unsigned short) arr_1 [i_8 + 3] [i_8 - 1]);
            }
            for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                var_23 += ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (short)32754)))))));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) var_0);
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((short) var_5)))));
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_27 ^= 9895352463442056665ULL;
                            arr_45 [i_0] [i_8] [i_8] [16U] [i_14] [i_14] = ((/* implicit */unsigned int) ((arr_16 [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_8 + 3]) | (((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_15] [i_15])) ? (((/* implicit */int) (short)32219)) : (arr_1 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            arr_46 [i_0] [i_0] = ((/* implicit */int) var_8);
        }
        arr_47 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1])) == (((/* implicit */int) arr_44 [i_0] [(_Bool)1] [(unsigned char)14] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_0)))))))))));
}
