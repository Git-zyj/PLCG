/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14105
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1ULL)))))))));
                            arr_14 [i_0 + 3] [i_1 - 2] [i_2] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(arr_8 [i_0] [(short)5] [i_1])))) ? (((var_4) ? (-769148711) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_6))))));
                            arr_15 [(unsigned char)17] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_0 + 2])), (arr_7 [i_0 + 1] [i_1] [(_Bool)0] [i_1 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) max(((-(arr_8 [i_1] [i_0] [i_1]))), (((/* implicit */int) max((arr_5 [i_0 - 3] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0])))))));
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 1000064440))));
                            var_13 *= ((/* implicit */unsigned int) (unsigned char)5);
                            arr_22 [(_Bool)1] [i_1] [i_1] [(signed char)15] [(signed char)12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -769148701)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_2))))) : (4906312614352285211LL)))) ? (var_2) : (min((((((/* implicit */_Bool) arr_0 [11])) ? (arr_3 [i_1]) : (arr_3 [i_0]))), (((/* implicit */unsigned int) ((643076473U) > (((/* implicit */unsigned int) 1292310096)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned short)0)), (var_9))), (((/* implicit */unsigned int) ((signed char) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) : (min((34011737528386783ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1599356540)) ? (323802098U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_15 = ((((/* implicit */_Bool) min((var_2), (max((((/* implicit */unsigned int) var_5)), (2197020161U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (_Bool)1))))))))) : ((+(min((((/* implicit */unsigned int) (unsigned char)84)), (3355120008U))))));
    var_16 = ((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) min((min((var_1), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (541620245) : (-1295803877)))))))));
    var_17 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned int) ((_Bool) 1599356540)))));
}
