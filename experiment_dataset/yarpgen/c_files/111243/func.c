/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111243
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [(unsigned short)0] [i_2] [i_2] [i_2] [13LL] = ((/* implicit */unsigned int) (+(14107450825333417896ULL)));
                        arr_12 [(signed char)2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (15776977302443626945ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20152)) ? (337661356U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) : (arr_1 [i_0 - 2])))));
                        arr_13 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (var_14) : (((/* implicit */unsigned long long int) (+(var_0))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_18 &= ((/* implicit */signed char) var_10);
                        var_19 = ((/* implicit */unsigned char) (unsigned short)10813);
                        arr_17 [2ULL] &= ((/* implicit */unsigned short) (unsigned char)147);
                        arr_18 [i_0] [i_2] [i_4] = ((/* implicit */signed char) (+((+(((arr_4 [10ULL] [10ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_17))));
                        arr_22 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) var_4);
                        var_21 &= ((/* implicit */_Bool) (+((+(((/* implicit */int) var_1))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(10653833554225902637ULL)))) ? (arr_5 [(signed char)1] [i_1 - 3]) : (((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [i_5] [i_0])))));
                        arr_23 [(short)0] [(short)14] &= ((/* implicit */signed char) ((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))))) > (((/* implicit */int) var_16))));
                    }
                    var_23 = ((/* implicit */long long int) var_14);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            {
                arr_29 [i_6] [i_7] = ((/* implicit */int) 7235262076820889439ULL);
                arr_30 [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) var_15)) ? ((+(10257518294662716084ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_0))))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_6 [i_6])))))));
                var_24 -= ((/* implicit */short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (((+(((/* implicit */int) arr_6 [i_7])))) != (((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */int) var_11)))))))));
                arr_31 [i_6] [i_7] = ((/* implicit */int) (+(((var_4) ? (3067241444159125345ULL) : (((/* implicit */unsigned long long int) arr_4 [i_7] [i_6]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)63693)) == (((/* implicit */int) (short)31439))))) | (((var_12) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_4))))));
}
