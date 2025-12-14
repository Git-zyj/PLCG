/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185605
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((524287), (((/* implicit */int) (unsigned short)16384))))), (((unsigned int) (unsigned short)49153)))))));
                    var_20 += ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49141)))))))), (((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1864796015U)))) ^ (-5264316662470888167LL)))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) -1)), (((((/* implicit */unsigned long long int) 1023LL)) + (16672509009522251172ULL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned int) 5264316662470888167LL)))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_3] [i_4] = max((((/* implicit */int) (unsigned short)16382)), ((~(((/* implicit */int) (_Bool)1)))));
                var_22 = ((/* implicit */unsigned int) (((+(2044159157))) - (((/* implicit */int) min(((_Bool)0), (max(((_Bool)0), ((_Bool)1))))))));
                var_23 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3556988117U)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_7))));
}
