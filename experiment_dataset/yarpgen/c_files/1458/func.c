/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1458
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), ((+((-2147483647 - 1))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) 7ULL);
                            var_19 = max((18446744073709551604ULL), (((/* implicit */unsigned long long int) 5013694991872927154LL)));
                            arr_13 [i_0] [i_1] [(short)0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) 3988766595U)), (arr_5 [i_0] [(signed char)13] [i_2])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) : (max((((/* implicit */unsigned long long int) (unsigned short)14561)), (16291256151311462193ULL)))));
                            var_20 = ((7ULL) | (18446744073709551608ULL));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) 788754904U)), (-2927311488594368985LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))))) && (((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_22 ^= min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((var_16) / (((/* implicit */int) (signed char)35))))) ? (((18132485414492921560ULL) * (2155487922398089422ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16130))))));
    var_23 = ((/* implicit */int) var_17);
}
