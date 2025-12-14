/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106735
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) max(((~(0ULL))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))))));
                            arr_12 [i_0] [(short)20] [i_2] = var_5;
                            arr_13 [i_0] = ((/* implicit */unsigned short) var_8);
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_3 [i_2] [i_3])), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)44134)))) >= (max((arr_9 [i_0]), (((/* implicit */int) (unsigned short)12))))));
                var_12 *= ((/* implicit */short) min((min((arr_10 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)8] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25179))))) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)0])))))));
            }
        } 
    } 
    var_13 += ((/* implicit */_Bool) ((long long int) var_3));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */short) (unsigned short)65527);
                            var_15 = ((/* implicit */_Bool) ((short) var_8));
                            arr_24 [i_5] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_21 [i_4] [i_5] [i_6] [i_7 + 1]), (((/* implicit */long long int) arr_11 [i_7] [i_5] [i_6] [i_7 + 1]))))), (min((((/* implicit */unsigned long long int) ((unsigned short) arr_22 [i_6] [i_5] [(_Bool)1] [i_7 - 1] [i_7 - 1] [i_6]))), (min((((/* implicit */unsigned long long int) (unsigned char)243)), (560750930165760ULL)))))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)5968))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (11641266U)))));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((max(((+(4194296LL))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)127)))))));
                            arr_29 [i_4] [i_5] [i_8] [15ULL] [i_9] [i_4] = ((/* implicit */_Bool) max((arr_28 [i_4] [i_5] [i_9 + 1] [(short)11]), ((unsigned short)59567)));
                            var_18 = ((/* implicit */unsigned char) var_2);
                            var_19 ^= ((/* implicit */short) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned char) ((min((var_9), (((/* implicit */long long int) var_1)))) / (var_4))));
}
