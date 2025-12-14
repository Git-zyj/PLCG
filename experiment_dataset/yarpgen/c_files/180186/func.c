/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180186
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
    var_15 = ((/* implicit */short) 1174588096);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((var_1) + (2147483647))) << (((/* implicit */int) ((var_11) < (var_5)))))) : (((/* implicit */int) ((((/* implicit */int) (short)27702)) <= (((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) var_0);
                            var_18 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_7)))), ((+(arr_10 [i_0] [(signed char)12] [i_2] [i_2] [i_2] [i_3]))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1174588096))))))));
                            var_19 = ((/* implicit */signed char) arr_6 [i_1] [i_2]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) -1839826551132978932LL)) ? (12519929399450361512ULL) : (((/* implicit */unsigned long long int) arr_8 [2ULL] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_1])))) > (((/* implicit */unsigned long long int) (+(var_7))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                            arr_16 [i_5] [10] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((var_14), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((min((((/* implicit */unsigned long long int) var_13)), (var_8))), (((/* implicit */unsigned long long int) (-(var_5))))))));
                            arr_17 [i_0] [i_5] [i_0] [19U] = ((/* implicit */unsigned int) -1839826551132978932LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */unsigned short) (!(var_13)));
}
