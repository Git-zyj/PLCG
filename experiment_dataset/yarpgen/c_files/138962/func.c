/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138962
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7765)))))), (var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) (unsigned short)7782))));
                    var_13 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */long long int) var_4)))))))));
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)57766)) != (((/* implicit */int) (unsigned short)7778)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)252)))) : (((((/* implicit */int) (unsigned short)57754)) / (((/* implicit */int) (unsigned short)7765)))))))));
                    arr_6 [(unsigned short)13] = ((/* implicit */_Bool) arr_2 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7765))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_7 - 2] [i_4 - 3] [i_3 + 3] [i_3 + 3]))))) : (var_10)));
                                arr_22 [i_3] [i_5] [i_5] [i_6] [i_7 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (_Bool)1)), (var_5)))))) ? (((/* implicit */int) arr_20 [i_3] [i_3])) : (min((((/* implicit */int) arr_15 [i_4 + 4] [i_4 + 4] [i_4 + 4])), (((((/* implicit */int) (unsigned short)57743)) / (((/* implicit */int) (unsigned short)57784))))))));
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min(((unsigned short)57784), ((unsigned short)57770))), ((unsigned short)7765))))));
                            }
                        } 
                    } 
                } 
                var_17 = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57773)) ? (1872926965U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7752)))))))));
            }
        } 
    } 
}
