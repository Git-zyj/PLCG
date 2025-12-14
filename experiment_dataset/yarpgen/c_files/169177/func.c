/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169177
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
    var_12 = ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (((var_1) + (571699627U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7)))))))) ? ((+(max((var_3), (3723267692U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) 3299563378U);
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_4))))) && (((/* implicit */_Bool) max((0), (((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((1U), (((/* implicit */unsigned int) (signed char)-101))))) && (((/* implicit */_Bool) -1197177456)))))));
                        arr_16 [i_1] [i_4] = ((/* implicit */long long int) (-(((571699613U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3723267668U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)58393)))))))));
                        var_14 = ((/* implicit */unsigned long long int) min(((-(min((571699627U), (((/* implicit */unsigned int) (signed char)-101)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)-1)))))));
                        var_15 = ((/* implicit */signed char) ((min((9663366697228528785ULL), (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
                    }
                    arr_17 [8LL] [8LL] [i_1] = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) 0)))) ? (min((((/* implicit */unsigned int) (unsigned short)32767)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
                arr_18 [i_1] [(unsigned short)3] [4] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_6))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                var_16 = ((/* implicit */_Bool) ((unsigned char) ((min((((/* implicit */long long int) var_1)), (var_6))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)72)) >> (((((/* implicit */int) var_2)) - (39)))))))));
                var_17 = ((/* implicit */unsigned short) ((short) min((((var_1) ^ (((/* implicit */unsigned int) -1259510071)))), (((/* implicit */unsigned int) 1259510070)))));
                arr_19 [i_1] [i_1] = (!(((/* implicit */_Bool) 1099511627775ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (max(((-(4625101253803575652LL))), (((/* implicit */long long int) max((702838423U), (((/* implicit */unsigned int) (signed char)-63)))))))));
}
