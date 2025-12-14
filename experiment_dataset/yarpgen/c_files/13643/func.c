/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13643
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_3)))) <= (((unsigned long long int) (unsigned short)62911))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_11 *= ((/* implicit */long long int) ((((unsigned long long int) (-2147483647 - 1))) != ((+(arr_0 [i_3])))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-(((14097869749118629308ULL) >> (((/* implicit */int) (_Bool)1)))))))));
                            var_13 = ((/* implicit */unsigned char) (+((+(7507849737552294029LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(max((3349142020808678252LL), (((/* implicit */long long int) var_7))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (1286928856109332159ULL)))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (716392971U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65519)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            arr_22 [i_4] [i_4] |= ((/* implicit */unsigned long long int) var_9);
                            var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) min(((~(2486962081839365944ULL))), (((/* implicit */unsigned long long int) (unsigned char)173))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (_Bool)1))));
                        }
                    } 
                } 
                arr_23 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)255)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) & (max((arr_10 [0ULL] [i_5]), (((/* implicit */unsigned long long int) var_5))))))));
                arr_24 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_18 [i_4 - 1] [i_5] [i_4 + 1] [i_4])))) ? (arr_17 [i_4 + 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)5)))))))) ? (((/* implicit */int) ((unsigned short) arr_13 [i_4 + 3]))) : (((/* implicit */int) arr_6 [i_5] [i_5]))));
                var_17 &= ((/* implicit */unsigned long long int) ((var_6) < ((+(((/* implicit */int) arr_5 [i_5]))))));
            }
        } 
    } 
}
