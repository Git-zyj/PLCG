/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102305
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
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) var_4))) && (((/* implicit */_Bool) var_12))))) % (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) var_13))))));
    var_16 = ((/* implicit */signed char) max(((unsigned short)57908), (((/* implicit */unsigned short) (_Bool)0))));
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8040770465139294861LL)), (12899919129355429121ULL)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned short) arr_0 [i_1])), (var_2))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_3)))))), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 3])))));
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (var_1))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_8)))))));
                    var_20 = ((/* implicit */short) arr_1 [i_0]);
                    var_21 = ((/* implicit */signed char) (-((-(var_5)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned char) var_9);
                        var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((1274860414) | (((/* implicit */int) (_Bool)1)))))));
                    }
                }
                arr_13 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
}
