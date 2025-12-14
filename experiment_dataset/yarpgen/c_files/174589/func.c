/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174589
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) arr_2 [i_1]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) var_7)), (var_3))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_15 [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1366097514097751532LL)), (arr_8 [i_2])))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1816))))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) 1805309553U)), (1366097514097751527LL))))))));
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1366097514097751532LL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) / (((/* implicit */int) ((13183622491814726062ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                    arr_17 [8LL] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) max((arr_7 [i_3] [i_3]), (((/* implicit */unsigned char) var_7))))))))));
                    arr_18 [i_3] = ((((/* implicit */_Bool) ((unsigned char) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((long long int) ((short) arr_6 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((unsigned int) arr_6 [(signed char)6])))))));
                }
            } 
        } 
    } 
    var_11 = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (15182895246115024566ULL)))))) ? (max((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((unsigned char) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)54)) > (((/* implicit */int) (signed char)-55)))))));
    var_12 = ((((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)0))))))) & (var_3));
}
