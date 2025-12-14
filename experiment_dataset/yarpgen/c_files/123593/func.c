/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123593
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((min((max((var_0), (((/* implicit */unsigned long long int) (unsigned char)255)))), (var_3))), (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_0))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(short)14] [i_3] |= (_Bool)1;
                            var_20 = ((/* implicit */unsigned short) (signed char)-1);
                            var_21 -= ((/* implicit */short) max(((unsigned char)49), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15876))) > (var_0))))));
                            arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) (unsigned char)206);
                        }
                    } 
                } 
                var_22 ^= max((max((((/* implicit */unsigned long long int) (unsigned char)194)), (var_0))), (((/* implicit */unsigned long long int) (signed char)2)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((0ULL) >= (((/* implicit */unsigned long long int) max((197871590U), (((/* implicit */unsigned int) (signed char)26))))))))));
    var_24 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((((/* implicit */int) (unsigned char)206)) < (((/* implicit */int) (unsigned char)237))))), (max((((/* implicit */int) (signed char)0)), (-491724621))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_14))))) <= (((((/* implicit */int) (unsigned short)63625)) * (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)63073))));
                            arr_24 [i_5] [i_5] [i_6 + 1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) var_14)), ((unsigned short)38025))), (((/* implicit */unsigned short) var_1))));
                            var_27 = var_3;
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((-164785254), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_12)))))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_37 [i_5] = ((/* implicit */int) var_8);
                            arr_38 [i_5] [i_5] [i_10] [4ULL] = ((/* implicit */unsigned long long int) min((-164785266), (((/* implicit */int) (short)-21415))));
                            arr_39 [i_4] [i_5] [0LL] [0LL] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */long long int) 164785230)))))))) >> (((var_17) - (3262112018010510457ULL)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((3786341792U), (2272516727U)))), (((min((var_17), (((/* implicit */unsigned long long int) var_12)))) | (((9268853189201345788ULL) >> (((508625478U) - (508625417U)))))))));
            }
        } 
    } 
    var_30 ^= ((/* implicit */unsigned char) var_7);
}
