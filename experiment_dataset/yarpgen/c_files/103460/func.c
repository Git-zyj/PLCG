/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103460
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((min((var_6), (((/* implicit */unsigned long long int) var_5)))), (min((((/* implicit */unsigned long long int) var_9)), (var_4)))));
                                arr_12 [i_0] [(signed char)6] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_1)))) | ((-(var_6)))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((var_6) << (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4)))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_6)))))))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_5)))))))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_0)))))))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */short) min((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_4), (var_6))))), (((/* implicit */unsigned long long int) var_0))));
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */int) (((!(var_10))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_2)))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((_Bool) var_0));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_5))));
        var_18 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((unsigned short) var_7))))), (((/* implicit */int) (!(((((/* implicit */int) var_5)) > (((/* implicit */int) var_3)))))))));
        var_19 = (((!(((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))) ? (min((((/* implicit */int) var_9)), (var_1))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))));
    }
    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        arr_24 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_10)))))))) % ((~(((/* implicit */int) var_2))))));
        var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
    }
}
