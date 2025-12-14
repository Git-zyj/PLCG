/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139320
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
    var_20 = ((/* implicit */short) var_13);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((var_6) / (((/* implicit */int) var_10)))) + (2147483647))) << (((((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_11)))) - (243)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_12) : (var_18))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4860416631754878241LL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(var_14)))))) | ((-(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (short)29659)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) -415463627)), (var_12)))))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((/* implicit */_Bool) min((arr_3 [(_Bool)0] [i_3]), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]))))) && (((((/* implicit */_Bool) 415463610)) && ((_Bool)1))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 415463630)) : (arr_2 [i_2]))))) : (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((15482835082967208398ULL) > ((~(arr_0 [i_0])))))) : (((/* implicit */int) ((((((/* implicit */long long int) var_15)) != (arr_1 [i_1]))) && (((((/* implicit */long long int) ((/* implicit */int) var_2))) > (arr_2 [i_1]))))))));
            }
        } 
    } 
}
