/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173972
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_12)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((var_1) + (310509491))))) : (((/* implicit */int) var_5)))))));
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) max((var_7), (var_7)))) : (((var_1) * (((/* implicit */int) var_7))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((var_6) | (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : ((~(566050662112530198ULL))))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */int) var_5)))), (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_11)) - (92)))))))), (((((/* implicit */_Bool) 17880693411597021425ULL)) ? (((/* implicit */unsigned long long int) 210995258)) : (566050662112530198ULL)))));
                            var_20 ^= ((/* implicit */signed char) ((((var_2) / (var_12))) * (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_5)))))));
                            var_21 ^= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_11)) << (((var_3) + (66693587))))) <= (((/* implicit */int) var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((var_0) & (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_10))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11))))), (var_0)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11))))));
                            var_23 = ((((var_12) != (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_7)))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_12))))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */int) var_11);
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_2);
}
