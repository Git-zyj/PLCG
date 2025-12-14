/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125125
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
    var_13 = ((/* implicit */signed char) (((+(var_0))) / (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((unsigned short) var_11))))))));
    var_14 = ((/* implicit */signed char) min((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) : (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 675974374))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((unsigned long long int) 4502500115742720LL))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)3]))) % (3878764209778324248ULL)))) ? ((~(var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_1])))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_3)), (var_10))), (((/* implicit */int) arr_3 [i_0 - 3]))))) ? (((/* implicit */int) ((arr_0 [i_0 - 3]) <= (arr_0 [i_0 + 1])))) : (((/* implicit */int) (signed char)35))));
                                arr_14 [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((14567979863931227369ULL), (((/* implicit */unsigned long long int) (unsigned short)33269)))) >> (((/* implicit */int) ((14567979863931227369ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16090))))))))) ? (((var_5) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_2 [i_0 - 2])))) : (((var_10) & (((/* implicit */int) arr_2 [i_3]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
