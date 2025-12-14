/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157656
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_9)) ^ (var_13))) / (max((var_4), (((/* implicit */unsigned long long int) var_2)))))) << (((unsigned int) (_Bool)1))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (+(var_17))))), ((~(min((((/* implicit */long long int) var_15)), (var_8))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned long long int) 1611510251U))))) ? (((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))))));
                    var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((short) var_13))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (((+(((((/* implicit */unsigned long long int) 1518388197U)) + (14324798101661812752ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (var_9) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)3258)), (4143398912U)))))))));
}
