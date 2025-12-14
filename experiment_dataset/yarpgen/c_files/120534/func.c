/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120534
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) (((~(((/* implicit */int) (signed char)-74)))) % (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_3))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) -9118638777137807733LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)11))))) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned short)9429)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((int) var_17)), (((/* implicit */int) ((6442201258262304105ULL) > (((/* implicit */unsigned long long int) -3574868182679051571LL)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)16316)) % (((/* implicit */int) (short)28487)))) > (((/* implicit */int) (_Bool)0)))))));
                arr_4 [i_1] = ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_0 [i_1 + 2])));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [6LL] [i_1] [i_2] [(unsigned short)12] = ((/* implicit */_Bool) var_16);
                            var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-15), ((signed char)-6))))) % (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_5 [i_1 + 3] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49219))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_18))))));
                    arr_18 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)16317)), ((-(((/* implicit */int) (_Bool)0))))));
                    arr_19 [8U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1894248449U)) ? (((/* implicit */int) (short)22668)) : (((/* implicit */int) (short)22662)))) % (((((/* implicit */_Bool) var_14)) ? (264349990) : (((/* implicit */int) arr_0 [i_4]))))));
                }
            } 
        } 
    } 
}
