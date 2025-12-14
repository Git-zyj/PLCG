/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11363
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
    var_16 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (short)9676)) ? (((/* implicit */unsigned int) var_8)) : (var_14))), ((+(var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) - (min((var_5), (((/* implicit */unsigned long long int) 2147483647))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_0] [i_0] = min(((+((-2147483647 - 1)))), ((+(((/* implicit */int) (unsigned short)1)))));
                            var_17 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (unsigned short)17)))), ((+(((/* implicit */int) (unsigned short)65535)))))) < ((+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_1)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((int) (+((-(((/* implicit */int) (signed char)21)))))));
                var_19 -= ((/* implicit */unsigned char) max(((+(((-2147483643) - (((/* implicit */int) (_Bool)0)))))), (((((((/* implicit */int) var_9)) + (((/* implicit */int) var_11)))) + ((+(((/* implicit */int) (unsigned short)16))))))));
            }
        } 
    } 
}
