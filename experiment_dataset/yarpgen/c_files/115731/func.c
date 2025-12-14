/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115731
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
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25877)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15290))) : (2395433076551454546LL)))) ? ((+(((/* implicit */int) (short)15314)))) : (var_7)));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 8246957695547515797ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62913))) : (arr_0 [i_1 + 3]))))) ? (8246957695547515795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 476904630U)) ? (min((((long long int) (unsigned short)17642)), (((/* implicit */long long int) ((_Bool) 476904630U))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)15290)) > (((/* implicit */int) (short)-15287))))))));
                            var_16 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46599))))) | (var_3))) ^ (min((13813932540248905495ULL), (10053813841132113921ULL)))));
                            arr_12 [12LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_7 [i_0] [i_0] [1LL]))), (arr_7 [i_0] [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_3))) : (((int) arr_8 [i_0] [i_1] [(short)5] [i_3] [(unsigned char)3] [i_2]))))) : (((unsigned long long int) (unsigned char)104))));
                        }
                    } 
                } 
            }
        } 
    } 
}
