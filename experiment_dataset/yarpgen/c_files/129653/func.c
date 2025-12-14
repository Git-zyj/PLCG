/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129653
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31850)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [9]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-18))))) : (arr_0 [i_1 + 1] [i_1 + 2])))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)(-127 - 1))), ((+(arr_2 [i_0] [i_1]))))))));
                    arr_8 [i_0] [i_1] [i_2] [(unsigned short)4] = (signed char)(-127 - 1);
                }
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) min((min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)(-127 - 1))))), (((/* implicit */unsigned short) min(((short)16885), (((/* implicit */short) arr_11 [(unsigned char)8]))))))))));
                    var_23 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)0))))));
                }
                var_24 = ((/* implicit */short) min((min((arr_10 [i_1 + 1] [i_0] [i_1 - 1]), (((/* implicit */unsigned int) (unsigned short)5537)))), (min((arr_10 [i_1 - 1] [i_0] [i_1 + 2]), (((/* implicit */unsigned int) (unsigned char)88))))));
                arr_12 [i_0] [i_0] [i_1 + 2] = ((/* implicit */short) (~((-(((((/* implicit */_Bool) (short)-24261)) ? (arr_5 [i_0] [i_0] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29)))))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) var_16);
}
