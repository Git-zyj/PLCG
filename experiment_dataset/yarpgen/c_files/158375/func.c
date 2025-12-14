/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158375
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
    var_18 = ((/* implicit */short) var_3);
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-72))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_6 [i_0] [i_1]))))))))));
                arr_8 [i_0] = ((/* implicit */long long int) ((4294967278U) >> (((((/* implicit */int) (unsigned short)3359)) - (3340)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_21 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) min((max((var_11), (((/* implicit */unsigned short) arr_0 [i_2])))), (var_17))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((min((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_10 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2])) >= (((/* implicit */int) min((arr_9 [i_0] [i_2] [2] [i_2]), (((/* implicit */short) arr_4 [i_0] [i_2])))))))))))));
                    var_23 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
                }
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) == (((/* implicit */int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16915190600771214200ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7680))) : (2190046019883375904ULL)));
}
