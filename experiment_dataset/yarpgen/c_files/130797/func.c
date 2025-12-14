/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130797
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
    var_19 = ((/* implicit */unsigned short) 9U);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) & (((/* implicit */int) (unsigned char)39)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) var_1);
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_4))))) ? (4099185593U) : (((((/* implicit */_Bool) -1919515397)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53746))) : (4099185593U)))))));
                        arr_11 [(unsigned short)2] [i_1] = (short)-2;
                    }
                    for (unsigned short i_4 = 4; i_4 < 24; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(max((max((1153538212763267828LL), (-3537767857896174827LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) (_Bool)0)))))))));
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (8830632548327113758LL)));
                        var_24 = ((/* implicit */unsigned char) (signed char)-83);
                    }
                }
            } 
        } 
    } 
}
