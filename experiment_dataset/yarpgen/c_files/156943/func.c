/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156943
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
    var_15 = ((/* implicit */signed char) min((min((var_5), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20452)) >= (((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) == ((+(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (-(((long long int) var_0))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(unsigned char)5] [i_1] [(signed char)9] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)107)))), (((/* implicit */int) (signed char)103))));
                            var_16 ^= ((/* implicit */unsigned char) ((((3635062938061478466LL) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (unsigned short)23265))))) && (((/* implicit */_Bool) var_11))))))));
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)2048))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4516314109658243000LL), (((/* implicit */long long int) (unsigned short)5029))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5029))) : (4516314109658242997LL)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)40781)) : (((/* implicit */int) (signed char)-73)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_8)))))))));
}
