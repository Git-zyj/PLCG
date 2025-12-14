/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188570
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
    var_20 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) (short)28672)) >> (((((/* implicit */int) (unsigned char)152)) - (136))))) >> ((((-(((/* implicit */int) (short)-28672)))) - (28661)))))));
    var_21 = ((/* implicit */int) var_10);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) ((unsigned short) var_15))) - (20871)))))) ? ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)28672)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) -5676625661331841040LL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((signed char) min((min((((/* implicit */long long int) var_4)), (0LL))), ((~(4261412864LL))))));
                                var_24 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-8500)))))))));
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) max((var_14), (((/* implicit */short) var_12)))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_10)))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4261412864LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
                                var_27 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */unsigned long long int) var_1)))) << (((((16289622147365225255ULL) - (((/* implicit */unsigned long long int) var_15)))) - (9796042337838559620ULL))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((_Bool) (+((~(((/* implicit */int) (signed char)118)))))));
                }
            } 
        } 
    } 
}
