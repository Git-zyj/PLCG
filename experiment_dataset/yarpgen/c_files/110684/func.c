/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110684
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
    var_19 = ((/* implicit */short) 7264772141167192498ULL);
    var_20 = ((/* implicit */short) max((((-5656918823374304050LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15970048454278846086ULL)))))))), (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */long long int) var_12);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_22 = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_1))))))));
                    arr_8 [i_0] [4LL] [i_0] [4LL] = ((/* implicit */unsigned long long int) var_6);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [4] = ((/* implicit */unsigned short) (~(min((var_14), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                    arr_12 [13LL] [i_1] [i_3] = (~(7264772141167192502ULL));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_23 ^= ((/* implicit */int) 2878505231279144068LL);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) & ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) < (arr_9 [(unsigned short)13] [i_1] [i_0]))))))));
                    arr_16 [(short)21] = (~(max((max((arr_9 [i_0] [11ULL] [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4] [(unsigned short)2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_15 [i_4]))))))));
                    var_25 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                }
                var_26 = ((/* implicit */long long int) var_2);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (3264784890331361147ULL)));
            }
        } 
    } 
    var_28 = ((/* implicit */short) min((7264772141167192506ULL), (((/* implicit */unsigned long long int) (short)-29460))));
}
