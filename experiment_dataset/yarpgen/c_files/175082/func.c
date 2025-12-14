/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175082
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [(signed char)17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (unsigned char)231)))));
                            var_12 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_1 - 2] [i_2] [i_0])) != (((/* implicit */int) (unsigned char)4))))))));
                        }
                    } 
                } 
                arr_12 [(unsigned char)4] [i_1 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))) && (((/* implicit */_Bool) ((signed char) var_0))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_5 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [(unsigned char)5] [i_4] [(unsigned char)5] [i_1 + 1])))))));
                            var_14 *= ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned char)231))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) & (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_16 = 11558598174611041859ULL;
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
}
