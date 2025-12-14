/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188727
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))) >= (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 - 1] [i_0])), ((short)11)))));
                var_11 = ((/* implicit */unsigned short) (-(min((var_5), (((/* implicit */unsigned int) (short)-5819))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [(unsigned char)6] [i_2] [12LL] [i_0] [(short)10] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned int) (short)32765)))), (((/* implicit */unsigned int) ((short) (short)-5812)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (short)32757))))))))) : (((long long int) (_Bool)0))));
                            var_12 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (short)5818))) == (var_5))) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-32759))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (var_10)))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) 2959476297U)), (4503597479886848LL))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */unsigned int) ((int) var_7))) >= ((+(268369920U)))))));
    var_16 *= var_5;
}
