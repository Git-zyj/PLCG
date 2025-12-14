/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145393
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
    var_10 = ((/* implicit */int) var_6);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6841851928361075534LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-6841851928361075534LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (arr_1 [i_1 - 1] [i_1 - 1])))));
                arr_5 [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_1] [i_1 - 2]);
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (arr_1 [i_1 + 1] [i_0])));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 3851852935282377063LL)))));
                            var_14 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10442922805359328349ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63699))) : (6841851928361075534LL)))) ? (max((arr_10 [(signed char)9] [(signed char)9] [i_2] [17LL]), (var_5))) : (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_1 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
