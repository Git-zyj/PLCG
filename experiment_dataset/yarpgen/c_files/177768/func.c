/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177768
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((arr_0 [i_0 - 3]) + (2147483647))) << (((/* implicit */int) ((((((((/* implicit */int) arr_8 [i_0] [i_1] [i_3])) + (2147483647))) << (((9223372036854775792LL) - (9223372036854775792LL))))) > (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_7)) : (arr_3 [i_1]))))))));
                            var_20 = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_13 [i_0 + 1] [i_1] [i_4] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_3 [i_0 - 1])), (-9223372036854775792LL)));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) (unsigned short)65535)) << (((-9223372036854775792LL) + (9223372036854775807LL))))) : (((/* implicit */int) (unsigned short)1)))))))));
                            arr_14 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)25);
                            var_22 -= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 9308287227028253330ULL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (short)28511)))) : (((/* implicit */int) arr_9 [i_4] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)6))));
    var_24 = ((((/* implicit */int) var_14)) << (((((/* implicit */int) (unsigned char)122)) - (121))));
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned long long int) -9223372036854775775LL)) : (9138456846681298273ULL)));
}
