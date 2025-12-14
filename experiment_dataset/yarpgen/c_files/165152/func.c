/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165152
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
    var_20 = ((/* implicit */long long int) var_4);
    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 283726776524341248ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-32047))))) ? (var_8) : (((/* implicit */unsigned long long int) -877844510))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32047)) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))) <= (((long long int) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_22 &= ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0]);
                            var_23 = ((/* implicit */_Bool) var_2);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (15058403058188854546ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5226521120947933884ULL)))))) : (var_10))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((1463957052), (((/* implicit */int) (unsigned short)37915))))))) >= (31U)));
                        }
                    } 
                } 
                arr_12 [i_1] [9LL] = ((/* implicit */unsigned short) (signed char)-34);
            }
        } 
    } 
    var_26 = ((/* implicit */int) -1824784068470449566LL);
}
