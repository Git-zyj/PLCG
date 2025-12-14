/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149326
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
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_1 [(_Bool)1]);
                var_17 -= ((/* implicit */unsigned short) min((((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 2]))), (min((var_8), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_9 [16LL] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)7245)) << (((1678056526) - (1678056516))))) == (((((/* implicit */_Bool) (unsigned short)58291)) ? (1678056510) : (1678056508)))));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((-1678056508) & (((/* implicit */int) (_Bool)0))))) - (((arr_8 [i_0 + 2] [i_2] [i_2] [i_1] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) (unsigned short)58291)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_3])), (var_9))) : (((unsigned long long int) 14LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_6 [i_0 - 2] [i_0] [i_0 - 1])))))));
                            arr_10 [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1678056508)))))) <= ((~(((15LL) % (((/* implicit */long long int) var_8))))))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)31))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_9) * (var_9))) + (((/* implicit */unsigned long long int) (+(var_8))))))) ? (var_3) : (((/* implicit */int) var_5))));
}
