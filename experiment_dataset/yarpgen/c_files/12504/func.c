/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12504
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */int) var_13);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((max((min((var_5), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) | (((/* implicit */long long int) (~((+(var_3))))))));
                                var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((~(var_5))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)72)) | (((/* implicit */int) (unsigned short)25625)))))))), ((+(var_9)))));
                                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14059518439440353915ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) -127065460)) && (((/* implicit */_Bool) (unsigned short)25625))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)25625)) == (((/* implicit */int) (short)12857)))))))), (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (var_2))))))));
                                var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_6)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_1)))) : (min((var_10), (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) 16936826810831434529ULL)) ? (max((8737649869633811217ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) -168284112)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(-8413893213412942165LL)));
    var_19 = (-(min(((~(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
}
