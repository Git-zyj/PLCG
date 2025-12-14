/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133697
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8))))))) != (((/* implicit */int) min(((unsigned char)0), (((unsigned char) var_3)))))));
    var_12 += ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (18446744073709551615ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((/* implicit */unsigned long long int) (unsigned char)255))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4122623565677899005ULL) : (((/* implicit */unsigned long long int) -6394015306867333867LL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) / (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3620002318U));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) (_Bool)0))))) | (((((/* implicit */int) arr_4 [i_0])) & (((590454296) ^ (((/* implicit */int) (unsigned char)1))))))));
                var_16 *= ((/* implicit */unsigned long long int) var_6);
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [(unsigned char)6] |= ((/* implicit */unsigned short) var_6);
                            arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~((-(arr_5 [i_2 + 1] [i_2] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
