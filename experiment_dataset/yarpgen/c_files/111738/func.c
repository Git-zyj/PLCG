/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111738
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1209815917)) ? (min(((+(4214617257U))), (4214617257U))) : (((((/* implicit */_Bool) 1307462099)) ? (4214617271U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (+(((10335131241072642848ULL) << (((/* implicit */int) (signed char)63))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 &= ((/* implicit */unsigned int) ((long long int) 2918150678U));
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) (-(1376816627U)))))));
                        arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (80350035U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60000)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_4])) ? (var_5) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 4214617259U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) : (var_5)))))));
                        arr_20 [i_5] [(unsigned char)2] &= ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) var_3);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2918150656U)))) & (((arr_21 [i_2]) % (((/* implicit */long long int) 3541318578U)))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])) ^ (-1)))))))));
            var_23 &= ((/* implicit */signed char) (~(((/* implicit */int) ((4214617250U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2]))))))));
        }
        arr_23 [(unsigned short)12] &= ((/* implicit */unsigned int) ((arr_16 [i_2] [i_2] [i_2]) >= (min(((~(80350039U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_6 [i_2] [i_2]))));
    }
    var_25 = ((/* implicit */unsigned short) var_17);
    var_26 = ((/* implicit */unsigned long long int) var_14);
    var_27 = ((((var_0) >> (((((/* implicit */int) var_17)) + (8544))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)92)), ((short)-32761))))) <= (var_5)))));
}
