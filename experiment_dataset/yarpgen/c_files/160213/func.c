/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160213
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1369004886U)))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : ((+(((unsigned long long int) arr_1 [i_0]))))));
        var_13 += ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */_Bool) 1357667997819294520LL)) ? (1357667997819294520LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
        var_14 = (~(-852045893775409161LL));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1])))))));
        arr_4 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 786647109U)) ? ((+(12502288486130647957ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25367)))))) ? ((+(((unsigned long long int) 2167426498306368081ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2167426498306368081ULL)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (-(arr_2 [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)10562)) : (((/* implicit */int) (unsigned short)56228))));
        arr_8 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)10810))));
    }
    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        var_17 = ((/* implicit */int) ((_Bool) (+(arr_10 [i_3 + 3]))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */unsigned int) ((int) 1971824216));
                    arr_19 [i_3 + 1] [i_3 - 3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 3])) ? (arr_13 [i_3 + 1]) : (((/* implicit */long long int) 2925962409U))))) ? ((+(var_9))) : ((+(2167426498306368081ULL)))));
                    var_18 = (!(((/* implicit */_Bool) ((unsigned char) (~(var_1))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (((/* implicit */int) arr_14 [i_3 + 3] [i_3 + 1])) : (((/* implicit */int) (unsigned char)92))))) ? (((int) 1382974986655812073ULL)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 + 3] [i_3 + 1])))))));
                                arr_24 [i_3 - 1] [i_3 - 2] [i_3 + 3] [i_3 - 4] [i_3 + 1] [i_3 - 3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(3508320198U)))))) ? ((+((+(3508320170U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-21112)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_3 - 4] [i_3 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)97))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
    }
}
