/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124706
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
    var_16 = ((/* implicit */unsigned long long int) (signed char)-81);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max(((~(max((((/* implicit */unsigned int) (signed char)-74)), (arr_5 [i_1] [(_Bool)1] [i_2]))))), (((unsigned int) max((arr_10 [i_0] [i_0 - 1] [i_0] [i_0]), (arr_11 [i_0]))))));
                            arr_15 [i_0] [i_0 - 2] [i_0 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_3])), (var_1))), (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) (signed char)-45)) : (min(((~(((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) (short)(-32767 - 1)))))));
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (short)-32745);
                            arr_17 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (max((((/* implicit */long long int) arr_12 [i_3] [i_3 - 1] [i_1] [i_3 + 1] [22ULL])), (min((((/* implicit */long long int) (_Bool)0)), (-8309023965148972188LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3])))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1 + 1] = (signed char)-70;
                arr_19 [i_0] = ((/* implicit */int) min((((unsigned int) (short)-16259)), (((/* implicit */unsigned int) (signed char)-74))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_2)) % (((/* implicit */int) (signed char)69)))))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (((((~(((/* implicit */int) var_14)))) + (2147483647))) << (((((-3728491125432411803LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))))) + (23LL))))))));
}
