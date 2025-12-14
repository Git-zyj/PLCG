/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150229
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((2224471589707993216LL) >= (2224471589707993204LL)));
                var_19 += ((/* implicit */unsigned long long int) min((((3101949403U) | (4280368544U))), (((/* implicit */unsigned int) (signed char)-25))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((1193017876U), (min((((/* implicit */unsigned int) (unsigned short)20754)), (3953428334U)))))) & ((-9223372036854775807LL - 1LL))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))));
                                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0])))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                var_24 -= ((/* implicit */short) arr_10 [(_Bool)1] [i_1 - 1]);
                                arr_18 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (signed char)3)))));
                                var_25 = ((/* implicit */long long int) 12ULL);
                            }
                            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(((/* implicit */int) ((1145044296) > (((/* implicit */int) ((short) 4280368544U)))))))))));
                                var_27 = ((/* implicit */unsigned long long int) ((max((min((17ULL), (((/* implicit */unsigned long long int) (unsigned short)21120)))), (((/* implicit */unsigned long long int) ((18446744073709551611ULL) < (((/* implicit */unsigned long long int) 2949468812U))))))) > (((((/* implicit */_Bool) 1345498483U)) ? ((~(1028203284310364542ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))));
                                arr_21 [i_1] [i_1] [i_0] [i_1] [15LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3552812790636012059LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1012))))) : (2224471589707993219LL)));
                                var_28 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25955))) <= (2949468830U)))), (max((-2224471589707993219LL), (((/* implicit */long long int) 1193017886U))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) ((_Bool) 0ULL)))));
                                var_30 = ((/* implicit */signed char) min((16353043878937567644ULL), (((((arr_15 [8LL] [i_3]) <= (4207585733U))) ? (2093700194771983959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 87381554U))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((unsigned char) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */long long int) 87381540U)) <= (-7585347470860449984LL)))))));
}
