/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173908
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_10 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_4) : (((/* implicit */long long int) var_3))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((int) var_0))) == ((~(arr_10 [(unsigned char)3] [(unsigned char)3] [1] [i_2])))))));
                            var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) (unsigned char)108)))))));
                            arr_14 [i_0] [(short)16] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((var_3) ^ (var_3)))) || (((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                        }
                    } 
                } 
                var_12 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (2030629166))) - (20458)))))));
                arr_15 [(short)11] = (~((+(((int) var_7)))));
                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) || (((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0])))))) : (min((((/* implicit */long long int) arr_4 [i_0] [(unsigned char)9] [i_1])), (((arr_8 [i_1] [i_0] [(signed char)18] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (unsigned char)148);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) var_3))))) * (((/* implicit */int) var_2)))));
                var_16 *= ((/* implicit */signed char) -5963159028617068533LL);
                arr_21 [i_4] [i_4] [(short)11] = var_7;
                var_17 -= ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
