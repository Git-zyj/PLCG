/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145679
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((max((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) 642197907313121355LL))), (max((-5770684783165509078LL), (((/* implicit */long long int) var_10)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)13353), (((/* implicit */unsigned short) (_Bool)0)))))));
                            arr_12 [6U] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_5 [i_2 + 2] [i_1]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (signed char)-48));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */_Bool) ((unsigned int) (+(-5770684783165509078LL))));
                var_17 -= ((unsigned int) ((((/* implicit */_Bool) max((7222508699644464095LL), (-5770684783165509078LL)))) ? (max((((/* implicit */unsigned long long int) 2302863537U)), (913625575072144645ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7050750530891508813ULL) >= (((/* implicit */unsigned long long int) 1394159604))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((unsigned int) ((((/* implicit */long long int) 731064221)) / (642197907313121355LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_19 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_9)), (var_14))), (((/* implicit */long long int) 3996509135U))))), (var_5)));
}
