/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186941
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
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((signed char)15), ((signed char)-70)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_17)))))) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((signed char) ((short) arr_0 [i_0])));
                    arr_7 [i_1] [(unsigned short)8] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((var_10), (((/* implicit */unsigned int) arr_1 [i_1])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */int) (+(-1LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_18 [i_4] [i_4] |= ((long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (min((1327239253U), (((/* implicit */unsigned int) var_18))))));
                    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32754)) ? (((2115927628) % (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80))))))), (((/* implicit */int) arr_10 [i_5]))));
                    var_23 = ((/* implicit */unsigned int) var_5);
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_13)))));
                }
            } 
        } 
    } 
}
