/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131117
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!((!((_Bool)1)))))) : (((/* implicit */int) (!((_Bool)1))))));
                var_18 = ((/* implicit */short) max(((-((-(((/* implicit */int) var_4)))))), ((+(1048512)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (long long int i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_20 -= ((/* implicit */long long int) (~(((var_14) ^ (((/* implicit */int) (_Bool)1))))));
                    var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) max((var_4), (arr_13 [i_2] [i_4] [i_4] [i_4])))), ((~(((/* implicit */int) arr_13 [i_2 - 3] [i_4] [i_4] [i_2 - 3]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (((+(((/* implicit */int) ((3221722582714396509LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) == (((/* implicit */int) max((var_15), (((/* implicit */signed char) (_Bool)1)))))));
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) (_Bool)1)))) >= (((/* implicit */long long int) min((((unsigned int) -1048520)), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)56894))))))))));
}
