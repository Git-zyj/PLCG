/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173280
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */signed char) ((max((arr_6 [i_0] [i_1] [i_1]), (var_14))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (var_9)))) ? (((/* implicit */int) max(((short)-29298), (((/* implicit */short) (signed char)-22))))) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))))))));
                var_21 = min(((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) var_8)))))), (min((arr_0 [i_0] [i_1]), ((+(906069134))))));
                var_22 += ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))));
                var_23 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29302))) | (var_14))) % (arr_6 [i_0] [i_0] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-29320)) > (((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((min((14289004417293510834ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (16267201552138347696ULL))) < (((/* implicit */unsigned long long int) var_18)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_14 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) arr_9 [4U]))))), (min((((/* implicit */unsigned int) var_1)), (var_7))))))))));
                    arr_15 [(unsigned short)13] [i_3] [2U] [i_2] = ((/* implicit */unsigned long long int) 2938339922U);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14289004417293510845ULL))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_4))))))));
}
