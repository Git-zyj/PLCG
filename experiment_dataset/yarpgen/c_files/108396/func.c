/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108396
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_1)) - (202))))))));
    var_16 = ((/* implicit */unsigned short) (+(max((min((((/* implicit */unsigned long long int) var_1)), (var_9))), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) (-(((4573700068945851956ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) <= (((/* implicit */int) var_12))))))))));
                                arr_15 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        for (long long int i_6 = 4; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) < (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_5])))) / (var_7)))));
                                var_19 += ((/* implicit */unsigned int) (unsigned char)140);
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [(signed char)5] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)7936))))))) && (((/* implicit */_Bool) (+(-176534271))))));
                    arr_21 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(min(((-(((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) max((var_14), (((/* implicit */short) var_4)))))))));
                }
            } 
        } 
    } 
}
