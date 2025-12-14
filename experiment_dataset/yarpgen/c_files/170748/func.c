/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170748
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((+(0U))) != (min((4294967280U), (((/* implicit */unsigned int) (unsigned short)59607))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */long long int) ((19U) >> (((var_4) - (8236521112843001191ULL)))))) - (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) 2729115801U))));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        arr_8 [i_1] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)5926))))) ? (4294967282U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((var_4) - (8236521112843001196ULL))))))));
        arr_9 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) 13U)))));
    }
    for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)5929), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (6214089311007801461ULL))) : (((/* implicit */unsigned long long int) max((4000900475U), (((/* implicit */unsigned int) (unsigned short)65091))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36393))) : (4294967282U))))))));
        arr_14 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 19U)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -2147483645)) : (arr_12 [i_2 - 3]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
        arr_15 [i_2] [i_2] = ((/* implicit */short) var_2);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 7; i_5 += 4) 
            {
                {
                    arr_24 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) min((var_5), (arr_1 [i_3] [i_3])));
                    arr_25 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(-8881609641435784074LL)))), ((~(var_4)))));
                    arr_26 [i_3] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-18195)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) ((unsigned short) (short)-22)))))));
                    arr_27 [i_3] [i_3] [i_3] [i_3] = ((short) min((-3161916162533580482LL), (((/* implicit */long long int) var_0))));
                }
            } 
        } 
    } 
}
