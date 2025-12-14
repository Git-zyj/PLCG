/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174657
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) (unsigned short)20705);
                        var_14 = ((/* implicit */unsigned long long int) ((((var_7) < (2572683991U))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44807))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20705)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [(_Bool)1] [i_0 + 2]))) : (13140152805987852423ULL)))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 2118788589)) ? (var_0) : (((/* implicit */long long int) 668333196)))), (((/* implicit */long long int) (unsigned short)20728))))))))));
                        var_16 |= (~(((((/* implicit */_Bool) -2118788590)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (min((((/* implicit */int) (signed char)7)), (var_6))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 2118788589))))))));
                    }
                    var_18 = ((/* implicit */unsigned int) arr_7 [(unsigned short)1] [i_1] [i_2] [i_0]);
                    var_19 -= ((/* implicit */long long int) ((int) arr_6 [i_0] [6LL] [i_2 + 1] [(signed char)4]));
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(6389442866248391416ULL)))) || (((/* implicit */_Bool) (+(var_10)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(5587203068319943105ULL)))) ? ((+(2572684009U))) : (((/* implicit */unsigned int) ((((var_4) + (2147483647))) >> (((((/* implicit */int) (short)-8329)) + (8330))))))))));
}
