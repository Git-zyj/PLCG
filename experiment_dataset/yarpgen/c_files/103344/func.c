/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103344
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
    var_17 = ((/* implicit */unsigned char) min(((+(var_13))), (((/* implicit */unsigned long long int) min((var_6), (var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) (_Bool)0))) & (max((((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)44295)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (short)-25818)) : (((/* implicit */int) ((_Bool) arr_4 [i_2 + 2] [(unsigned char)22] [i_2])))));
                            var_20 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (signed char)104)))) != (((arr_2 [i_0]) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)-47))))))) == (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1691579881856566644LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min(((-((~(((/* implicit */int) (unsigned char)188)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1420317425)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_16)) << (((/* implicit */int) var_1)))) : (((/* implicit */int) min(((short)1023), (((/* implicit */short) (unsigned char)194)))))))));
                var_22 = ((/* implicit */short) (+(((17169749351541380492ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31276)))))));
            }
        } 
    } 
}
