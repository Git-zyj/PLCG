/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117748
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
    var_17 = ((/* implicit */long long int) (((-(var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_0))), (var_10)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned char)233))) ^ (((/* implicit */int) (unsigned char)233))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */long long int) (unsigned char)231);
                            arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [4] [(unsigned char)14]);
                            var_18 = ((/* implicit */unsigned char) min((max((max((419645090U), (((/* implicit */unsigned int) (_Bool)1)))), (var_4))), (var_15)));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) == (7376389546959945297LL)));
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (2600872251U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11683)))))) : (arr_11 [i_2] [i_2 - 3] [i_2 + 1] [i_2 + 1]))) / (min((((/* implicit */long long int) (unsigned char)23)), (var_6)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) arr_10 [15U] [i_1] [i_1] [15U]);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_4 - 2] [i_0]), (arr_8 [i_0] [i_4 + 3] [2U])))) ? ((~(((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32758)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)44531)) : (((/* implicit */int) (short)32758))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */long long int) var_12);
    var_23 += ((/* implicit */unsigned long long int) var_14);
}
