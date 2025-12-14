/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157149
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)42402))) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */int) (unsigned short)42406))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : ((((~(var_7))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3)))))))));
                var_19 -= ((/* implicit */unsigned short) (unsigned char)111);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)))) : (((unsigned long long int) var_4))))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_13)), (15801258476499218529ULL))))) : (((/* implicit */int) ((signed char) (((_Bool)1) ? (var_10) : (((/* implicit */long long int) var_14))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_8))))))));
                            }
                        } 
                    } 
                } 
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1]))) : (max((var_10), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_0] [(unsigned short)13] [i_1] [i_1] [i_0] [i_1]) : (var_15)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((var_17) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42399)))))) : (((unsigned long long int) arr_10 [i_0] [14LL] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_13), (var_13)))) << (((((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) - (1407534100459596060LL)))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((max((((var_13) ? (var_11) : (var_5))), (((((/* implicit */int) (unsigned char)116)) ^ (var_11))))), (((((/* implicit */_Bool) (short)-17864)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (_Bool)1)))))))));
                arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -80118637)) ? (((/* implicit */long long int) 4294967295U)) : (7153305621803047556LL)));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_6 + 3] [i_6 - 2]) : (var_15)))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */short) (-((+(arr_21 [i_9 - 1] [i_7] [i_6 - 1])))));
                                arr_27 [i_5] [i_8] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_25 [i_5] [i_6 - 2] [i_9 + 1] [i_8] [i_6 - 2])), ((-(var_8)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_14)) & (var_10))), (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))) ? (((long long int) var_2)) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_9))))), ((~(4294967276U))))))));
}
