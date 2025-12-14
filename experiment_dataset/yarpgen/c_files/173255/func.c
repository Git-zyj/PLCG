/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173255
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
    var_15 = (+(max((((((/* implicit */_Bool) var_2)) ? (var_14) : (10730124671306704085ULL))), (var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((min(((_Bool)1), (var_4))) ? (var_8) : (var_10))) ^ (var_8)));
        var_16 = ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_12))), (((((/* implicit */_Bool) (unsigned short)35383)) ? (var_8) : (var_13)))))) ? (max((((var_5) ? (var_1) : (var_3))), (min((var_8), (((/* implicit */unsigned long long int) (unsigned short)35359)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_10) % (var_8))) != (5324749875040597887ULL))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = min((max((((((/* implicit */_Bool) var_13)) ? (var_6) : (7909981635759081522ULL))), (((var_14) & (var_14))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13121994198668953725ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] = ((/* implicit */_Bool) max((((unsigned long long int) min((10085928715581871381ULL), (18446744073709551615ULL)))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30176))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26985))) : (7203402492418756268ULL))) : (((var_5) ? (var_11) : (6829761593458779785ULL)))))));
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63310)) ^ (((/* implicit */int) (unsigned short)35330))))) ? (min((var_14), (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_10))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_13)))))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) (unsigned short)127)))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) var_7)), (4529821652279468852ULL))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))))), ((~((~(var_6)))))));
}
