/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115937
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (110192525U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                            var_19 = ((/* implicit */unsigned char) var_3);
                            arr_10 [13ULL] [i_2] [i_0] = ((/* implicit */unsigned short) ((long long int) min((((long long int) -8126395576269771834LL)), (((/* implicit */long long int) arr_5 [i_3 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 4184774771U)))) > (var_12)));
    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (4184774770U))))))) ? (var_16) : (((/* implicit */int) var_2))));
    var_22 *= ((/* implicit */short) max(((-((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775803LL)))) || (((/* implicit */_Bool) (-(var_12)))))))));
    var_23 ^= ((/* implicit */unsigned short) var_12);
}
