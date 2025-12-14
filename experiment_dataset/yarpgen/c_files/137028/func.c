/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137028
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (7093223531857300180LL)));
                                var_14 += ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_8 [i_0]))))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (short)23631)))) % (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_4])) < (((/* implicit */int) (short)20932)))))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22472))) : (3479333252328281902LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(short)9] [i_3] [i_4] [i_4]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [14LL] = ((/* implicit */short) -2867532731090337645LL);
                            }
                        } 
                    } 
                    arr_14 [i_1] = -3803893419176520420LL;
                    var_15 ^= ((/* implicit */short) var_8);
                    var_16 = ((/* implicit */short) (+(var_2)));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)-6661), ((short)8654)))), (((((/* implicit */_Bool) (short)22466)) ? (-957752070622147438LL) : (957752070622147440LL)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-25198)) / (((/* implicit */int) (short)21581)))))));
}
