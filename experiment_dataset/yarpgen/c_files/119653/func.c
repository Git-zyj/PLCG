/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119653
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [9LL] [i_1] [(unsigned char)20] [(signed char)21] = ((/* implicit */unsigned short) (+(((1305982623) / (((/* implicit */int) (signed char)13))))));
                    var_13 = ((/* implicit */unsigned short) min((1305982623), (min((((/* implicit */int) (signed char)13)), (((((/* implicit */_Bool) (unsigned short)30047)) ? (((/* implicit */int) (unsigned short)36527)) : (1450398766)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+(2095431073U)));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [2ULL] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (1305982619) : (var_10)))) ? (var_10) : ((~(var_1)))))));
                    arr_17 [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)17)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 1275234117U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) ? (var_3) : (var_3)))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((short) (((+(var_3))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_13 [18LL]))))))));
                }
            } 
        } 
    } 
    var_16 = var_6;
}
