/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116539
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (549755813872LL)))) : (((9029237757609430705ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((min((arr_1 [i_0]), (((/* implicit */long long int) (signed char)28)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    arr_7 [i_0] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), ((~(var_10))))) << (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [0] [6U])) || (((/* implicit */_Bool) (short)10651)))))))));
                    var_15 *= (((-(144115188075855868ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((max((arr_10 [i_4 + 2] [i_4]), (((/* implicit */unsigned int) (short)-10652)))) << ((((-(((/* implicit */int) (short)10670)))) + (10680)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_17 [i_4] [14] [i_4] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)10641))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_10 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) (+(arr_9 [i_3] [(signed char)16])))) : (((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)70)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50502)) % (((/* implicit */int) (unsigned char)63))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [(signed char)12] [7])))))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 3165645811U))));
                            arr_18 [i_3] [i_4 + 2] [i_4 + 2] [i_4] = ((((((/* implicit */_Bool) (-(arr_9 [i_4] [i_3])))) ? (min((((/* implicit */long long int) (short)-10652)), (549755813887LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-101)) ? (arr_16 [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_6]) : (((/* implicit */long long int) arr_9 [i_6] [i_6])))) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))) < ((+(-957110050693850874LL)))));
                        }
                    } 
                } 
                arr_19 [(unsigned short)9] [15ULL] [i_4] = ((/* implicit */unsigned int) ((short) min(((unsigned short)48737), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))))));
            }
        } 
    } 
}
