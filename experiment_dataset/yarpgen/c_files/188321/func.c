/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188321
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned int) (~(-3165583736859638894LL)));
                                arr_12 [i_0] [i_3] [i_3] = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)0)))) <= (((/* implicit */int) ((signed char) var_8)))));
                                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(-1371271844)))), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 3] [i_2 + 1] [i_2 + 1])), (min((((/* implicit */unsigned long long int) (unsigned char)62)), (7654902028036060885ULL)))))));
                                var_16 ^= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 48633703)), (14744833900602993813ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) arr_7 [i_7] [i_5]);
                                var_18 += ((/* implicit */unsigned long long int) (short)17374);
                                arr_21 [i_0] [i_1] [i_1] [i_5 - 1] [i_6] [i_5] [i_7] &= ((/* implicit */signed char) max((((/* implicit */int) max((arr_7 [i_0 - 2] [i_0 - 3]), (arr_7 [i_0 + 3] [i_0 - 1])))), ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_19 &= ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                var_20 *= ((/* implicit */unsigned char) min((((unsigned long long int) arr_3 [i_1])), ((+(arr_3 [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) ((unsigned short) var_5))))));
}
