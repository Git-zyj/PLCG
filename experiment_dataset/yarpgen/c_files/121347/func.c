/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121347
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) ^ (var_3))) << (((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)-26254))))) - (39234))))) <= (((/* implicit */unsigned long long int) (~(4183216699U))))));
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */int) var_18)) % (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_21 [i_4] [i_4] = ((/* implicit */unsigned char) (~(((var_1) ? ((+(var_13))) : (((/* implicit */int) ((unsigned short) (_Bool)0)))))));
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)180))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_0))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1408896947U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51372))) : (var_5))))))) : (((/* implicit */int) var_0)));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)33)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_27 [i_3] [1] [i_4] [i_9] = ((/* implicit */unsigned char) (~((-(((1408896947U) & (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? ((-(((/* implicit */int) (unsigned char)108)))) : (((/* implicit */int) ((((/* implicit */unsigned int) -179852129)) >= (4019891265U))))))) ? (((unsigned long long int) ((int) (unsigned char)102))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)29704)) : (((/* implicit */int) (signed char)79))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
