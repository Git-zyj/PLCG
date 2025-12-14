/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180158
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9025)) << (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)127)) ? (8006185297594470032LL) : (((/* implicit */long long int) 3112291946U)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) max(((_Bool)0), ((_Bool)1)))), ((signed char)63)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 = (!((!((_Bool)0))));
                                var_13 = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)17430)));
                                var_14 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-12369))) & (5988317766013033474LL)));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-25388)) : (((/* implicit */int) (short)12368))));
                    var_17 = (((+(((/* implicit */int) (_Bool)1)))) != ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-17430)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)114), ((unsigned char)53))))) : (((((/* implicit */_Bool) (unsigned short)48379)) ? (-932847046933580952LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
}
