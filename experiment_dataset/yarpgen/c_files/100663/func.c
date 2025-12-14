/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100663
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((~(var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))))), (max((((var_5) ^ (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((-1663421491) + (745950555))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (((((/* implicit */long long int) var_3)) | (var_13)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -745950557)) ? (max((-3968288960383155307LL), (((/* implicit */long long int) 412744194U)))) : (max((0LL), (((/* implicit */long long int) var_3)))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (+(745950558))))) != (((min((var_1), (0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */short) ((745950558) - (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3])) <= (((/* implicit */int) (signed char)3)))))));
                            var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3])), (var_1)))))) <= (arr_10 [i_3])));
                            var_23 = (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)65524)) != (((/* implicit */int) (signed char)-32)))))) : (((((/* implicit */_Bool) 745950558)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) ^ (var_0))) : (var_12))));
                            var_24 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 |= ((/* implicit */long long int) (-((~((~(((/* implicit */int) (signed char)75))))))));
}
