/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155199
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (18444492273895866368ULL))) : (((((/* implicit */unsigned long long int) 544746628508685066LL)) - (2251799813685247ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) arr_11 [i_3] [i_1] [i_3] [i_4]);
                                var_12 -= ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 2251799813685247ULL)) ? (1001605361U) : (var_8)))), (((arr_6 [i_0] [i_1] [i_2] [i_0]) ? (((/* implicit */long long int) var_4)) : (5987751868761358793LL))))) != (max((((((/* implicit */_Bool) -258289995948644258LL)) ? (7127864792793628804LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])), (var_5)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) ((arr_4 [i_1] [i_1] [i_2] [i_1]) || (((/* implicit */_Bool) (unsigned short)65523)))))))) ? (-5987751868761358789LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((622689663U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37518))))))))));
}
