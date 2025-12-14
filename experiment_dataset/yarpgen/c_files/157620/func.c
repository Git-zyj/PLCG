/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157620
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(599845778)));
                            var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) var_5))))) ? (max((((/* implicit */unsigned int) var_6)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            arr_11 [(unsigned short)5] [i_2] = ((/* implicit */unsigned short) -599845778);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (~(((long long int) var_8))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((max((var_1), (max((599845788), (-599845778))))) >> (((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)7] [i_4]))))) - (1692587384U)))));
                            var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_8 [i_4 - 2]))), ((-(((/* implicit */int) arr_6 [i_0] [i_4 - 1] [i_4 - 2]))))));
                        }
                    } 
                } 
                var_13 -= ((((-599845763) + (2147483647))) >> (((max((max((arr_1 [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) 1446146895)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_4)))))) - (4776669412024698907ULL))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) var_9)) * (max((var_3), (((/* implicit */unsigned long long int) var_6)))))));
    var_16 = ((/* implicit */signed char) ((((384190405030285829LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33664))))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63517)) % (((/* implicit */int) ((((/* implicit */int) (unsigned short)2024)) != (((/* implicit */int) var_5))))))))));
}
