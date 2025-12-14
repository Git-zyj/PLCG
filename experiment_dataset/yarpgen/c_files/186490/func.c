/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186490
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (unsigned char)237))));
                var_21 = ((/* implicit */_Bool) (-(1850486003143076873LL)));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4688308241196128281ULL)) ? (8409761635808318490LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19093))))))));
                var_22 = ((/* implicit */unsigned short) var_14);
                var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((max((8409761635808318490LL), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) var_1)) - (26150)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                {
                    var_24 *= ((/* implicit */_Bool) min((min((1850486003143076873LL), (((/* implicit */long long int) ((1850486003143076873LL) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)46443)), (min((((/* implicit */unsigned int) var_13)), (66060288U))))))));
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(1455983508)))) ? ((-(var_19))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_4])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_3] [i_6] [i_2] [i_3] = ((/* implicit */unsigned short) 2147483647);
                                arr_19 [i_3] [i_3] [i_4] [i_3] [i_6 - 2] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) 2113929216)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) max((arr_7 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_12)) <= (max((1850486003143076873LL), (((/* implicit */long long int) var_0)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((var_5) + (((/* implicit */int) var_16)))))));
    var_28 = max(((+(2080768))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)19093)) ? (((/* implicit */int) (unsigned short)35516)) : (var_14))) == (((/* implicit */int) var_13))))));
}
