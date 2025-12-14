/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142140
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
    var_11 = -3856787500008496536LL;
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4610))))) : ((-((-(arr_6 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))))));
                    arr_10 [i_0 - 1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (max((arr_5 [i_0] [i_1 + 2] [i_2]), (((/* implicit */long long int) (unsigned short)65523)))) : (((/* implicit */long long int) ((int) (unsigned short)65535))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 22)) ? (var_5) : (((/* implicit */long long int) 1294444057))))) && (((/* implicit */_Bool) ((signed char) arr_5 [i_2] [i_1 + 1] [i_0])))))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(var_5)))), (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                arr_16 [i_3] [i_4 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39503))) > (14LL))) ? (-5401681948929121349LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_13 [i_3]))))));
                arr_17 [i_3] [i_4] = ((/* implicit */int) arr_7 [(unsigned short)0] [i_4] [i_3] [i_4 + 4]);
                var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65517)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4 + 3] [i_3])))))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_4] [i_4] [i_3] [i_3])))) : ((+(var_1)))))));
                arr_18 [i_4 + 1] [i_4] [i_4] = ((/* implicit */int) (((!(min((var_6), ((_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12392)))))))) : ((-(-1LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                arr_24 [i_5] [i_5] [i_6] = ((((/* implicit */_Bool) ((signed char) arr_6 [i_5] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) max((arr_0 [i_5]), (arr_0 [i_5])))) : (((arr_6 [i_6] [i_5] [i_6] [i_6]) / (arr_6 [i_6] [i_6] [i_5] [i_5]))));
                arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */_Bool) -1294444058)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (var_5)));
                arr_26 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) arr_14 [i_5] [i_5] [i_6])), (1763387412)))) & (((long long int) arr_0 [i_5]))));
                arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_19 [i_6] [i_5])))) != (((((/* implicit */_Bool) ((arr_13 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18940)))))) ? (arr_23 [i_5] [i_6]) : (((/* implicit */int) arr_2 [i_6]))))));
                arr_28 [i_5] [i_6] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_6]))))), (max((arr_22 [i_6] [i_5]), (arr_22 [i_5] [i_6]))));
            }
        } 
    } 
}
