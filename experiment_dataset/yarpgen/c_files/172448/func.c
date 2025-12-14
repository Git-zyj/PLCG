/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172448
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) var_1)), (((/* implicit */long long int) (~(var_2))))))) ? (1753407536U) : (((/* implicit */unsigned int) 209401509))));
    var_16 = ((/* implicit */long long int) (((~(11969053090480158113ULL))) & ((((~(11969053090480158111ULL))) ^ (max((var_5), (1841146364244857224ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(short)8] [(_Bool)1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)198))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [(_Bool)1] [8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned char)255))) || ((!(((/* implicit */_Bool) (unsigned short)43989))))));
                            arr_12 [12U] [i_1] [i_3] [i_3] |= ((/* implicit */long long int) ((unsigned short) ((6477690983229393499ULL) - (((/* implicit */unsigned long long int) -7393639633191903036LL)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(arr_2 [(short)4])))) ? (((((/* implicit */_Bool) (signed char)124)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) -7393639633191903037LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) (unsigned char)121))));
            }
        } 
    } 
}
